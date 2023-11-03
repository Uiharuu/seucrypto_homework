#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <string>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

struct information{
    bool DES_AES;
    bool random_self;
    bool SHA_MD5;
    bool str_file;
    std::string key;
    std::string target;

};


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    information informations;
    QString filepath;




private slots:
    void on_self_radioButton_toggled(bool checked);

    void on_str_radioButton_toggled(bool checked);

    void on_file_radioButton_toggled(bool checked);

    void on_file_pushButton_clicked();

    void on_start_pushButton_clicked();

    void getinformations();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H


