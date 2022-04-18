#include "ui_mainwindow.h"
#include <QList>
#include <vector>
#include "mainwindow.h"
#include <QString>
#include <QMessageBox> // para imprimir los mensajes en recuadro
#include <QDebug> // para imprimir mensajes
#include <QtGui>
#include <QImage>
#include <stdlib.h>
#include <QLabel>
#include <QFile>
#include <QPixmap>
#include <time.h>
//#include <QtWidgets>

#include <QtWidgets>
//#include <QMediaPlayer>
//#include <QSound>
#include <sstream>
#include <fstream>
#include <iostream>
#include <string.h>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <dulces.h>

mainwindow::mainwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainwindow)
{
    controladorEventos =  new QTimer();
    controladorEventos->start(100);
    connect(controladorEventos,SIGNAL(timeout()),this,SLOT(moverObjetos()));
    //      el que envia la señal, que señal , la clase  ,  slot que recibe



    ui->setupUi(this);
    scene= new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,700,450);
    personaje_principal = new bolita(10,20,30); //x,y,tamaño
    scene->addItem(personaje_principal);

    nubePrueba =  new Nube(true);
    scene->addItem(nubePrueba);

    Obstaculos.push_back(new obstaculo(0,0,700,20));
    scene->addItem(Obstaculos.back());

    Obstaculos.push_back(new obstaculo(0,200,700,20));
    scene->addItem(Obstaculos.back());

    Obstaculos.push_back(new obstaculo(0,0,20,400));
    scene->addItem(Obstaculos.back());

    Obstaculos.push_back(new obstaculo(340,0,20,400));
    scene->addItem(Obstaculos.back());
}

mainwindow::~mainwindow()
{
    delete ui;
}



bool mainwindow::EuvalarColision(void)
{
    bool colision = false;
    QList<obstaculo*>:: Iterator it; //itarador para recorrer la lista de obstaculos
    for(it= Obstaculos.begin(); it!= Obstaculos.end(); it++){

       if((*it)-> collidesWithItem(personaje_principal))
           colision = true;
    }
    return colision;
}






void MainWindow::moverObjetos()
{
    //scene->update();
}






/*
void MainWindow::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key()==Qt::Key_D)
        {
        if(!this->EuvalarColision())
            personaje_principal->MoveRight();
        }

    else if(evento->key()==Qt::Key_A)
    {
        if(this->EuvalarColision())
            personaje_principal->MoveLeft();
    }


}

*/



mainwindow::mainwindow(QTimer *controladorEventos, bool bandera, Nube *nubePrueba, Ui::MainWindow *ui, QGraphicsScene *scene) : controladorEventos(controladorEventos),
    bandera(bandera),
    nubePrueba(nubePrueba),
    ui(ui),
    scene(scene)
{}
