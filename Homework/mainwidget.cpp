#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <QString>
MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(LogPas()));
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::LogPas()
{
    QString log=ui->lineEdit->text();
    QString pas=ui->lineEdit_2->text();
}
