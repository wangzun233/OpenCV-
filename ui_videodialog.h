/********************************************************************************
** Form generated from reading UI file 'videodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEODIALOG_H
#define UI_VIDEODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_VideoDialog
{
public:
    QPushButton *streamButton;
    QPushButton *getButton;
    QLabel *label;
    QLabel *shot1;

    void setupUi(QDialog *VideoDialog)
    {
        if (VideoDialog->objectName().isEmpty())
            VideoDialog->setObjectName(QStringLiteral("VideoDialog"));
        VideoDialog->resize(1368, 653);
        QFont font;
        font.setPointSize(20);
        VideoDialog->setFont(font);
        streamButton = new QPushButton(VideoDialog);
        streamButton->setObjectName(QStringLiteral("streamButton"));
        streamButton->setGeometry(QRect(460, 520, 181, 101));
        getButton = new QPushButton(VideoDialog);
        getButton->setObjectName(QStringLiteral("getButton"));
        getButton->setGeometry(QRect(660, 520, 181, 101));
        label = new QLabel(VideoDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 640, 480));
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Sunken);
        label->setLineWidth(2);
        shot1 = new QLabel(VideoDialog);
        shot1->setObjectName(QStringLiteral("shot1"));
        shot1->setGeometry(QRect(670, 10, 640, 480));
        shot1->setFrameShape(QFrame::Panel);
        shot1->setFrameShadow(QFrame::Sunken);
        shot1->setLineWidth(2);

        retranslateUi(VideoDialog);

        QMetaObject::connectSlotsByName(VideoDialog);
    } // setupUi

    void retranslateUi(QDialog *VideoDialog)
    {
        VideoDialog->setWindowTitle(QApplication::translate("VideoDialog", "VideoDialog", Q_NULLPTR));
        streamButton->setText(QApplication::translate("VideoDialog", "\350\216\267\345\217\226\350\247\206\351\242\221", Q_NULLPTR));
        getButton->setText(QApplication::translate("VideoDialog", "\350\216\267\345\217\226\345\277\253\347\205\247", Q_NULLPTR));
        label->setText(QString());
        shot1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VideoDialog: public Ui_VideoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEODIALOG_H
