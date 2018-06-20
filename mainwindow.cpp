#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    char buf[256];
    ui->setupUi(this);
    chdir("C:\\Devel");
    ui->textEdit->setText(getcwd(buf, sizeof(buf)));
    //ui->listWidget->addItem("teste");
}

MainWindow::~MainWindow()
{
    delete ui;
}
