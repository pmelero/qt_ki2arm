#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sstream>
#include <iostream>

using namespace std;
const std::string baseCommand = "/home/alumno/groovy_workspace/ipa_canopen/ipa_canopen_core/bin/move_device /dev/pcan32";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(500,400);
    connect(ui->pushButton_1p, SIGNAL(released()), this, SLOT(killProcess()));
    connect(ui->pushButton_1m, SIGNAL(released()), this, SLOT(killProcess()));
    connect(ui->pushButton_2p, SIGNAL(released()), this, SLOT(killProcess()));
    connect(ui->pushButton_2m, SIGNAL(released()), this, SLOT(killProcess()));
    connect(ui->pushButton_3p, SIGNAL(released()), this, SLOT(killProcess()));
    connect(ui->pushButton_3m, SIGNAL(released()), this, SLOT(killProcess()));
    connect(ui->pushButton_4p, SIGNAL(released()), this, SLOT(killProcess()));
    connect(ui->pushButton_4m, SIGNAL(released()), this, SLOT(killProcess()));
    connect(ui->pushButton_5p, SIGNAL(released()), this, SLOT(killProcess()));
    connect(ui->pushButton_5m, SIGNAL(released()), this, SLOT(killProcess()));
    connect(ui->pushButton_6p, SIGNAL(released()), this, SLOT(killProcess()));
    connect(ui->pushButton_6m, SIGNAL(released()), this, SLOT(killProcess()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

///************     PRESSED EVENT     ************///

void MainWindow::on_pushButton_1p_pressed()
{
    //convert from double to string
    std::stringstream strs;
    strs << ui->velocity->value();
    velocity = strs.str();

    std::stringstream strs2;
    strs2 << ui->aceleration->value();
    aceleration = strs2.str();

    finalCommand = baseCommand + " 3 500K 10 " + velocity + " " + aceleration + " &";
    cout << "-->" + finalCommand <<endl;
    system(finalCommand.c_str());
    ui->parameters->setEnabled(false);
}


void MainWindow::on_pushButton_1m_pressed()
{
    //convert from double to string
    std::stringstream strs;
    strs << -(ui->velocity->value());
    velocity = strs.str();

    std::stringstream strs2;
    strs2 << -(ui->aceleration->value());
    aceleration = strs2.str();

    finalCommand = baseCommand + " 3 500K 10 " + velocity + " " + aceleration + " &";
    system(finalCommand.c_str());
    cout << "-->" + finalCommand <<endl;
}

void MainWindow::on_pushButton_2p_pressed()
{
    //convert from double to string
    std::stringstream strs;
    strs << ui->velocity->value();
    velocity = strs.str();

    std::stringstream strs2;
    strs2 << ui->aceleration->value();
    aceleration = strs2.str();

    finalCommand = baseCommand + " 4 500K 10 " + velocity + " " + aceleration + " &";
    cout << "-->" + finalCommand <<endl;
    system(finalCommand.c_str());
    ui->parameters->setEnabled(false);
}

void MainWindow::on_pushButton_2m_pressed()
{
    //convert from double to string
    std::stringstream strs;
    strs << -(ui->velocity->value());
    velocity = strs.str();

    std::stringstream strs2;
    strs2 << -(ui->aceleration->value());
    aceleration = strs2.str();

    finalCommand = baseCommand + " 4 500K 10 " + velocity + " " + aceleration + " &";
    cout << "-->" + finalCommand <<endl;
    system(finalCommand.c_str());
    ui->parameters->setEnabled(false);
}

void MainWindow::on_pushButton_3p_pressed()
{
    //convert from double to string
    std::stringstream strs;
    strs << ui->velocity->value();
    velocity = strs.str();

    std::stringstream strs2;
    strs2 << ui->aceleration->value();
    aceleration = strs2.str();

    finalCommand = baseCommand + " 5 500K 10 " + velocity + " " + aceleration + " &";
    cout << "-->" + finalCommand <<endl;
    system(finalCommand.c_str());
    ui->parameters->setEnabled(false);
}

void MainWindow::on_pushButton_3m_pressed()
{
    //convert from double to string
    std::stringstream strs;
    strs << -(ui->velocity->value());
    velocity = strs.str();

    std::stringstream strs2;
    strs2 << -(ui->aceleration->value());
    aceleration = strs2.str();

    finalCommand = baseCommand + " 5 500K 10 " + velocity + " " + aceleration + " &";
    cout << "-->" + finalCommand <<endl;
    system(finalCommand.c_str());
    ui->parameters->setEnabled(false);
}

void MainWindow::on_pushButton_4p_pressed()
{
    //convert from double to string
    std::stringstream strs;
    strs << ui->velocity->value();
    velocity = strs.str();

    std::stringstream strs2;
    strs2 << ui->aceleration->value();
    aceleration = strs2.str();

    finalCommand = baseCommand + " 6 500K 10 " + velocity + " " + aceleration + " &";
    cout << "-->" + finalCommand <<endl;
    system(finalCommand.c_str());
    ui->parameters->setEnabled(false);
}

void MainWindow::on_pushButton_4m_pressed()
{
    //convert from double to string
    std::stringstream strs;
    strs << -(ui->velocity->value());
    velocity = strs.str();

    std::stringstream strs2;
    strs2 << -(ui->aceleration->value());
    aceleration = strs2.str();

    finalCommand = baseCommand + " 6 500K 10 " + velocity + " " + aceleration + " &";
    cout << "-->" + finalCommand <<endl;
    system(finalCommand.c_str());
    ui->parameters->setEnabled(false);
}

void MainWindow::on_pushButton_5p_pressed()
{
    //convert from double to string
    std::stringstream strs;
    strs << ui->velocity->value();
    velocity = strs.str();

    std::stringstream strs2;
    strs2 << ui->aceleration->value();
    aceleration = strs2.str();

    finalCommand = baseCommand + " 7 500K 10 " + velocity + " " + aceleration + " &";
    cout << "-->" + finalCommand <<endl;
    system(finalCommand.c_str());
    ui->parameters->setEnabled(false);
}

void MainWindow::on_pushButton_5m_pressed()
{
    //convert from double to string
    std::stringstream strs;
    strs << -(ui->velocity->value());
    velocity = strs.str();

    std::stringstream strs2;
    strs2 << -(ui->aceleration->value());
    aceleration = strs2.str();

    finalCommand = baseCommand + " 7 500K 10 " + velocity + " " + aceleration + " &";
    cout << "-->" + finalCommand <<endl;
    system(finalCommand.c_str());
    ui->parameters->setEnabled(false);
}

void MainWindow::on_pushButton_6p_pressed()
{
    //convert from double to string
    std::stringstream strs;
    strs << ui->velocity->value();
    velocity = strs.str();

    std::stringstream strs2;
    strs2 << ui->aceleration->value();
    aceleration = strs2.str();

    finalCommand = baseCommand + " 8 500K 10 " + velocity + " " + aceleration + " &";
    cout << "-->" + finalCommand <<endl;
    system(finalCommand.c_str());
    ui->parameters->setEnabled(false);
}

void MainWindow::on_pushButton_6m_pressed()
{
    //convert from double to string
    std::stringstream strs;
    strs << -(ui->velocity->value());
    velocity = strs.str();

    std::stringstream strs2;
    strs2 << -(ui->aceleration->value());
    aceleration = strs2.str();

    finalCommand = baseCommand + " 8 500K 10 " + velocity + " " + aceleration + " &";
    cout << "-->" + finalCommand <<endl;
    system(finalCommand.c_str());
    ui->parameters->setEnabled(false);
}


///************     RELEASED EVENT     ************///

void MainWindow::killProcess(){
  cout << "matando proceso"<<endl;
  std::string proscessName = "move_device";
  std::string s="pkill -9 -f "+ proscessName;
  system(s.c_str());
  ui->parameters->setEnabled(true);
}

///************     CLICKED EVENT     ************///

void MainWindow::on_pushButton_IniR_clicked()
{

}
