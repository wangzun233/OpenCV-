#include "videodialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VideoDialog w;
    w.show();

    return a.exec();
}
