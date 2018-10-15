#include "mainwindow.h"
#include "ui_mainwindow.h"

#define FOOT (0)
#define COLOR (1)
#define DISTANCE (2)

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::GenerateDATSAT(QTableWidget * Table)
{
    for(int i=0; i < Table->columnCount(); i++)
    {
        for(int j=0; j < Table->rowCount(); j++)
        {
            Table->setItem(j,i,new QTableWidgetItem(GenerateText(i)));
        }
    }

}

QString MainWindow::GenerateText(int columnIndex)
{
    switch (columnIndex) {

    default:
    case FOOT:

        return QString("Right");

        break;

    case COLOR:

        return QString("Red");

        break;

    case DISTANCE:

        return QString("Near");

        break;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Generate_released()
{
    qDebug("Hello");
    this->GenerateDATSAT(ui->tableWidget);
}
