/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QWidget *layoutWidget;
    QHBoxLayout *Hash_horizontalLayout;
    QLabel *label_6;
    QRadioButton *SHAradioButton;
    QRadioButton *MD5radioButton;
    QLabel *label_7;
    QPushButton *start_pushButton;
    QWidget *widget;
    QHBoxLayout *key_horizontalLayout;
    QLabel *label_4;
    QRadioButton *random_radioButton;
    QRadioButton *self_radioButton;
    QLineEdit *key_lineEdit;
    QWidget *widget1;
    QHBoxLayout *SEA_horizontalLayout;
    QLabel *label_3;
    QRadioButton *DESradioButton;
    QRadioButton *AESradioButton;
    QWidget *widget2;
    QHBoxLayout *str_horizontalLayout;
    QRadioButton *str_radioButton;
    QLineEdit *str_lineEdit;
    QWidget *widget3;
    QHBoxLayout *file_horizontalLayout;
    QRadioButton *file_radioButton;
    QPushButton *file_pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(516, 423);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 50, 168, 27));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 140, 151, 21));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 260, 71, 21));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 290, 311, 31));
        Hash_horizontalLayout = new QHBoxLayout(layoutWidget);
        Hash_horizontalLayout->setObjectName(QString::fromUtf8("Hash_horizontalLayout"));
        Hash_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        Hash_horizontalLayout->addWidget(label_6);

        SHAradioButton = new QRadioButton(layoutWidget);
        SHAradioButton->setObjectName(QString::fromUtf8("SHAradioButton"));

        Hash_horizontalLayout->addWidget(SHAradioButton);

        MD5radioButton = new QRadioButton(layoutWidget);
        MD5radioButton->setObjectName(QString::fromUtf8("MD5radioButton"));

        Hash_horizontalLayout->addWidget(MD5radioButton);

        label_7 = new QLabel(Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 330, 71, 21));
        start_pushButton = new QPushButton(Widget);
        start_pushButton->setObjectName(QString::fromUtf8("start_pushButton"));
        start_pushButton->setGeometry(QRect(360, 350, 131, 61));
        start_pushButton->setIconSize(QSize(21, 21));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 220, 307, 22));
        key_horizontalLayout = new QHBoxLayout(widget);
        key_horizontalLayout->setObjectName(QString::fromUtf8("key_horizontalLayout"));
        key_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        key_horizontalLayout->addWidget(label_4);

        random_radioButton = new QRadioButton(widget);
        random_radioButton->setObjectName(QString::fromUtf8("random_radioButton"));

        key_horizontalLayout->addWidget(random_radioButton);

        self_radioButton = new QRadioButton(widget);
        self_radioButton->setObjectName(QString::fromUtf8("self_radioButton"));

        key_horizontalLayout->addWidget(self_radioButton);

        key_lineEdit = new QLineEdit(widget);
        key_lineEdit->setObjectName(QString::fromUtf8("key_lineEdit"));

        key_horizontalLayout->addWidget(key_lineEdit);

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(90, 180, 311, 31));
        SEA_horizontalLayout = new QHBoxLayout(widget1);
        SEA_horizontalLayout->setObjectName(QString::fromUtf8("SEA_horizontalLayout"));
        SEA_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        SEA_horizontalLayout->addWidget(label_3);

        DESradioButton = new QRadioButton(widget1);
        DESradioButton->setObjectName(QString::fromUtf8("DESradioButton"));

        SEA_horizontalLayout->addWidget(DESradioButton);

        AESradioButton = new QRadioButton(widget1);
        AESradioButton->setObjectName(QString::fromUtf8("AESradioButton"));

        SEA_horizontalLayout->addWidget(AESradioButton);

        widget2 = new QWidget(Widget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(90, 360, 200, 22));
        str_horizontalLayout = new QHBoxLayout(widget2);
        str_horizontalLayout->setObjectName(QString::fromUtf8("str_horizontalLayout"));
        str_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        str_radioButton = new QRadioButton(widget2);
        str_radioButton->setObjectName(QString::fromUtf8("str_radioButton"));

        str_horizontalLayout->addWidget(str_radioButton);

        str_lineEdit = new QLineEdit(widget2);
        str_lineEdit->setObjectName(QString::fromUtf8("str_lineEdit"));

        str_horizontalLayout->addWidget(str_lineEdit);

        widget3 = new QWidget(Widget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(90, 390, 130, 25));
        file_horizontalLayout = new QHBoxLayout(widget3);
        file_horizontalLayout->setObjectName(QString::fromUtf8("file_horizontalLayout"));
        file_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        file_radioButton = new QRadioButton(widget3);
        file_radioButton->setObjectName(QString::fromUtf8("file_radioButton"));

        file_horizontalLayout->addWidget(file_radioButton);

        file_pushButton = new QPushButton(widget3);
        file_pushButton->setObjectName(QString::fromUtf8("file_pushButton"));

        file_horizontalLayout->addWidget(file_pushButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\345\245\207\346\200\252\347\232\204\345\212\240\345\257\206\350\275\257\344\273\266</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\257\271\347\247\260\345\212\240\345\257\206\347\256\227\346\263\225\350\256\276\347\275\256</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt;\">Hash\350\256\276\347\275\256</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt;\">\347\256\227\346\263\225\357\274\232</span></p></body></html>", nullptr));
        SHAradioButton->setText(QCoreApplication::translate("Widget", "SHA", nullptr));
        MD5radioButton->setText(QCoreApplication::translate("Widget", "MD5", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\212\240\345\257\206\347\233\256\346\240\207</span></p></body></html>", nullptr));
        start_pushButton->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213\345\212\240\345\257\206", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\257\206\351\222\245\357\274\232</span></p></body></html>", nullptr));
        random_radioButton->setText(QCoreApplication::translate("Widget", "\351\232\217\346\234\272", nullptr));
        self_radioButton->setText(QCoreApplication::translate("Widget", "\350\207\252\345\256\232\344\271\211", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt;\">\347\256\227\346\263\225\357\274\232</span></p></body></html>", nullptr));
        DESradioButton->setText(QCoreApplication::translate("Widget", "DES", nullptr));
        AESradioButton->setText(QCoreApplication::translate("Widget", "AES", nullptr));
        str_radioButton->setText(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262", nullptr));
        file_radioButton->setText(QCoreApplication::translate("Widget", "\346\226\207\344\273\266", nullptr));
        file_pushButton->setText(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
