#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_upButton_clicked();

    void on_powerButton_clicked();

    void on_downButton_clicked();

    void on_selectButton_clicked();

private:
    void changeMenu(QString selectedMenu);

public:
    int getBatteryLevel();

public:
    void setBatteryLevel(int newBatteryLevel);

private:
    Ui::MainWindow *ui;

private:
    int batteryLevel;

private:
    QString allOptions [6] = {"PROGRAM","FREQUENCY","MED","SCREENING","CHILDREN","SETTINGS"};

private:
    int selectionIndex;

};





#endif // MAINWINDOW_H
