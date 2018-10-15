#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void GenerateDATSAT(QTableWidget * Table);
    QString GenerateText(int columnIndex);

private slots:
    void on_Generate_released();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
