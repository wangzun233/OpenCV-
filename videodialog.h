#ifndef VIDEODIALOG_H
#define VIDEODIALOG_H

#include <QDialog>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrl>
#include <QDebug>
#include <QThread>
#include "facethread.h"
namespace Ui {
class VideoDialog;
}

class VideoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit VideoDialog(QWidget *parent = nullptr);
    ~VideoDialog();

private slots:
    void on_streamButton_clicked();
    void onReadStream();
    void onReadSnapshot();
    void on_getButton_clicked();

signals:
    void Face(QImage);//自定义信号，通过这个信号触发人脸检测的槽函数运行
private:
    Ui::VideoDialog *ui;
    QNetworkAccessManager* mananger;// 管理整个通信过程
    QNetworkRequest quest;//请求报文对象
    QNetworkReply* Streamreply;// 接收视频响应报文
    QNetworkReply* Snapshotreply;// 接收快照响应报文
    QByteArray StreamBuf;//保存视频
    QByteArray SnapshotrBuf;//保存快照
    QImage streamImage;

    QThread* thread;//线程对象
    FaceThread* FaceWork;//人脸
};

#endif // VIDEODIALOG_H
