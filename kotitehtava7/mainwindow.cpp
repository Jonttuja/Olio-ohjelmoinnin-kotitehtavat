#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_btnCount_clicked()
{
    QLabel* lab = ui->labelInfo;
    QLineEdit* lin = ui->txtResult;
    counter += 1;
    lab->setText( "Painiketta painettu " + QString::number(counter) + " kertaa");
    lin->setText(QString::number(counter));
}


void MainWindow::on_btnReset_clicked()
{
    QLabel* lab = ui->labelInfo;
    QLineEdit* lin = ui->txtResult;
    lab->setText( "Painiketta painettu " + QString::number(counter) + " kertaa");
    lin->setText(QString::number(counter));
    counter = 0;
}

