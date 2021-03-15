#include "facethread.h"
#include <QVector>//向量容器
#include <QDebug>
#include <opencv2/imgproc/types_c.h>
FaceThread::FaceThread(QObject *parent) : QObject(parent)
{
    player = new QMediaPlayer(this);
    player->setMedia(QUrl::fromLocalFile("/home/wangzun233/Music/sound_3.wav"));
    player->setVolume(50);

}

void FaceThread::onFace(QImage img)
{
    //将图像转换为24位色
    QImage image = img.convertToFormat(QImage::Format_RGB888);
    //构造Mat对象  将QImage转换为Mat
    Mat matImg = Mat(image.height(),image.width(),CV_8UC3,image.bits(),image.bytesPerLine());
    //加载人脸检测分类器
    string path = "./haarcascade_frontalface_alt.xml";
    CascadeClassifier fac_detector;//检测人脸的分类器
    fac_detector.load(path);//加载人脸检测分类器
    //向量容器来保存检测到的人脸数据
    vector<Rect> faces;//x,y,w,h
    Mat imgGray;
    //灰度处理
    cvtColor(matImg,imgGray,CV_RGB2GRAY);
    //直方图形均衡化  通过拉伸像素强度分布范围增强图像识别的一种算法
    equalizeHist(imgGray,imgGray);
    //人脸检测
    fac_detector.detectMultiScale(imgGray,faces,1.1,3,CASCADE_SCALE_IMAGE,Size(30,30));
    if(!faces.empty()){
        qDebug()<<"检测到"+QString::number(faces.size());
        player->play();
    }
}
