#ifndef FACETHREAD_H
#define FACETHREAD_H

#include <QObject>
#include <opencv2/opencv.hpp>

#include <iostream>
#include <string.h>
#include <QImage>
#include <QMediaPlayer>
using namespace std;
using namespace cv;
class FaceThread : public QObject
{
    Q_OBJECT
public:
    explicit FaceThread(QObject *parent = nullptr);

signals:

public slots:
    void onFace(QImage);
private:
    QMediaPlayer* player;//
};

#endif // FACETHREAD_H
