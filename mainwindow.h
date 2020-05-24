#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <time.h>


namespace Ui {
    class MainWindow;
}


class MainWindow : public QMainWindow
{
Q_OBJECT


public:
    explicit MainWindow(QWidget *parent = nullptr);
    QString randomize(const std::vector<QString> &locationsCache);
    std::vector<QString> locationsCache{};
    void updateLocationsCache();
    ~MainWindow();


signals:
    void game_selected();


private slots:
    void on_dropButton_clicked();
    void apex();
    void fortnite();
    void pubg();
    void warzone();


private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
