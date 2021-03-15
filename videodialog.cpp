#include "videodialog.h"
#include "ui_videodialog.h"

#include <QPixmap>

VideoDialog::VideoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VideoDialog)
{
    ui->setupUi(this);
    mananger = new QNetworkAccessManager(this);
    thread = new QThread(this);
    FaceWork = new FaceThread;
    FaceWork->moveToThread(thread);
    thread->start();
    connect(this,SIGNAL(Face(QImage)),FaceWork,SLOT(onFace(QImage)));
}

VideoDialog::~VideoDialog()
{
    delete ui;
}
//获取视频按钮转到槽
void VideoDialog::on_streamButton_clicked()
{
    QString url = "http://127.0.0.1:8080/?action=stream";
    //qDebug()<<url;
    quest.setUrl(QUrl(url));
    Streamreply = mananger->get(quest);//发送获取请求包
    connect(Streamreply,SIGNAL(readyRead()),this,SLOT(onReadStream()));
}
//处理视频的发送来的视频
void VideoDialog::onReadStream()
{
    StreamBuf.append(Streamreply->readAll());
    char spos[3]={(char)0xff,(char)0xd8};
    char epos[3]={(char)0xff,(char)0xd9};
    int startPos = StreamBuf.indexOf(spos,0);
    if(startPos == -1){
        StreamBuf.clear();
        return;
    }
    int endPos = StreamBuf.indexOf(epos,startPos);
    if(endPos==-1){
        return;
    }
    QByteArray imageBuf = StreamBuf.mid(startPos,endPos-startPos+2);
    if(streamImage.loadFromData(imageBuf,"JPG")==false){
        qDebug()<<"无效图片";
        StreamBuf.clear();
        return;
    }else{
        ui->label->setPixmap(QPixmap::fromImage(streamImage));
        emit Face(streamImage);//发送信号
        StreamBuf.clear();
    }
}

void VideoDialog::onReadSnapshot()
{
    SnapshotrBuf.append(Snapshotreply->readAll());
    char spos[3]={(char)0xff,(char)0xd8};
    char epos[3]={(char)0xff,(char)0xd9};
    int startPos = SnapshotrBuf.indexOf(spos,0);
    if(startPos == -1){
        SnapshotrBuf.clear();
        return;
    }
    int endPos = SnapshotrBuf.indexOf(epos,startPos);
    if(endPos==-1){
        return;
    }
    QByteArray imageBuf = SnapshotrBuf.mid(startPos,endPos-startPos+2);
    if(streamImage.loadFromData(imageBuf,"JPG")==false){
        qDebug()<<"无效图片";
        SnapshotrBuf.clear();
        return;
    }else{
        ui->shot1->setPixmap(QPixmap::fromImage(streamImage));
        SnapshotrBuf.clear();
    }
}

void VideoDialog::on_getButton_clicked()//获取快照
{
    QString url = "http://127.0.0.1:8080/?action=snapshot";
    //qDebug()<<url;
    quest.setUrl(QUrl(url));
    Snapshotreply = mananger->get(quest);//发送获取请求包
    connect(Snapshotreply,SIGNAL(readyRead()),this,SLOT(onReadSnapshot()));
}
