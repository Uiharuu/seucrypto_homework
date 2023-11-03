#include "widget.h"
#include "ui_widget.h"
#include "QButtonGroup"
#include "QString"
#include "QFileDialog"
#include "QMessageBox"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 对称加密算法设置逻辑
    QButtonGroup *SEA = new QButtonGroup(this);
    SEA->addButton(ui->DESradioButton);
    SEA->addButton(ui->AESradioButton);
    ui->DESradioButton->setChecked(true);

    // 密钥设置逻辑
    QButtonGroup *key = new QButtonGroup(this);
    key->addButton(ui->random_radioButton);
    key->addButton(ui->self_radioButton);
    ui->random_radioButton->setChecked(true);
    ui->key_lineEdit->setEnabled(false);
    connect(ui->self_radioButton, &QRadioButton::toggled, this, &Widget::on_self_radioButton_toggled);

    // hash设置逻辑
    QButtonGroup *hash = new QButtonGroup(this);
    hash->addButton(ui->SHAradioButton);
    hash->addButton(ui->MD5radioButton);
    ui->SHAradioButton->setChecked(true);

    // 加密目标设置逻辑
    QButtonGroup *target = new QButtonGroup(this);
    target->addButton(ui->str_radioButton);
    target->addButton(ui->file_radioButton);
    ui->str_radioButton->setChecked(true);
    connect(ui->str_radioButton, &QRadioButton::toggled, this, &Widget::on_str_radioButton_toggled);
    connect(ui->file_radioButton, &QRadioButton::toggled, this, &Widget::on_file_radioButton_toggled);
    ui->file_pushButton->setEnabled(false);
    connect(ui->file_pushButton, &QPushButton::clicked, this, &Widget::on_file_pushButton_clicked);



}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_self_radioButton_toggled(bool checked)
{
    ui->key_lineEdit->setEnabled(checked);
    if(!checked){
        ui->key_lineEdit->clear();
    }
}

void Widget::on_str_radioButton_toggled(bool checked)
{
    ui->str_lineEdit->setEnabled(checked);
    if(!checked){
        ui->str_lineEdit->clear();
    }
}

void Widget::on_file_radioButton_toggled(bool checked)
{
    ui->file_pushButton->setEnabled(checked);
}

void Widget::on_file_pushButton_clicked()
{
    filepath = QFileDialog::getOpenFileName(this, "选择待加密文件 ", QCoreApplication::applicationFilePath(), "*.* ");
    if (filepath.isEmpty()){
        QMessageBox::warning(this,"错误 ","请选择一个文件 ");
    }

}

void Widget::getinformations(){
    if (ui->DESradioButton->isChecked()){
        informations.DES_AES = true;
    }
    else {
        informations.DES_AES = false;
    }

    if (ui->random_radioButton->isChecked()){
        informations.random_self = true;
    }
    else {
        informations.random_self = false;
        informations.key = ui->self_radioButton->text().toStdString();
    }

    if (ui->SHAradioButton->isChecked()){
        informations.SHA_MD5 = true;
    }
    else {
        informations.SHA_MD5 = false;
    }

    if (ui->str_radioButton->isChecked()){
        informations.str_file = true;
        informations.target = ui->str_lineEdit->text().toStdString();
    }
    else {
        informations.str_file = false;
        informations.target = filepath.toStdString();
    }
}

void Widget::on_start_pushButton_clicked()
{
    getinformations();
    QMessageBox::warning(this, " ", "正在加密中 ");
    // TODO
}
