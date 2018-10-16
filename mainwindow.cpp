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

        switch(rand() %2){
        case 0:
            return QString("Right");
            break;

        case 1:
            return QString("Left");
            break;

        default:
            return QString("NULL");
            break;
        }

        break;

    case COLOR:

        switch(rand() %4){
        case 0:
             return QString("Red");
            break;

        case 1:
            return QString("Yellow");
            break;

        case 2:
            return QString("Blue");
            break;

        case 3:
            return QString("Green");
            break;

        default:
            return QString("NULL");
            break;
        }


        break;

    case DISTANCE:

        switch(rand() %2){
        case 0:
            return QString("Near");
            break;

        case 1:
            return QString("Far");
            break;

        default:
            return QString("NULL");
            break;
        }

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
