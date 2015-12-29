#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();        
    std::string velocity;
    std::string aceleration;
    std::string finalCommand;

private slots:

    void killProcess();
    void on_pushButton_1p_pressed();
    void on_pushButton_1m_pressed();
    void on_pushButton_2p_pressed();
    void on_pushButton_2m_pressed();
    void on_pushButton_3p_pressed();
    void on_pushButton_3m_pressed();
    void on_pushButton_4p_pressed();
    void on_pushButton_4m_pressed();
    void on_pushButton_5p_pressed();
    void on_pushButton_5m_pressed();
    void on_pushButton_6p_pressed();
    void on_pushButton_6m_pressed();
    void on_pushButton_IniR_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
