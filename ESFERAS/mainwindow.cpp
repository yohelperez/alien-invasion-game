#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <fstream>

using namespace std;
#include<iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    h_limit=990;
    v_limit=490;
    dt=0.01;                  //Asigna el lapso de tiempo

    num=0;                    // variable de puntuacion jugadores
    num2=0;
    niveles=1;
    ban = 0;                  // bandera que me dice si estoy en el juego del jugador 1 o 2
    cont1 = 0;                //contador para entrar a este while a crear una nueva esfera
    dificultad = 10000;       // variable del timer

    screen= new invasion;    // crea un objeto tipo invasion
    timer=new QTimer(this);                 //crea el timer
    scene=new QGraphicsScene(this);         //crea la scene
    scene->setSceneRect(0,0,h_limit,v_limit);     //asigna el rectangulo que encierra la scene, determinado por h_limit y v_limit

    ui->graphicsView->setScene(scene);
    qDebug()<<ui->graphicsView->size();
    ui->centralWidget->adjustSize();
    qDebug()<<ui->centralWidget->size();
    qDebug()<<this->size();
    scene->addRect(scene->sceneRect());


    //Para la mira

    protag=(new prot(0,0));
    protag->actualizar(520,360);
    scene->addItem(protag);
    protag->setFlag(QGraphicsItem::ItemIsMovable,true); // permiten mover el ob jeto con el mouse
    protag->setTransformOriginPoint(0,0);               // permiten mover el objeto con el mouse


    ui->nivel->display(1);               // nivel
    connect(timer,SIGNAL(timeout()),this,SLOT(on_pushButton_clicked()));

    }


MainWindow::~MainWindow()
{
    delete timer;
    delete scene;
    delete ui;
}


void MainWindow::bordercollision(ESFERASIM *b)
{

    if(b->py<b->Radio){//for para saber si las naves llegan al inferior de la pantalla

        if (b->Radio>0){
           for(int i=0;i<bars.size();i++){  //for para "eliminar" todas las naves una vez toca el suelo alguna
                bars.at(i)->getEsf()->Radio=0;


         }
        timer->stop();
        ui->label_2->setText("PERDISTE. PLANETA INVADIDO");
        scene->addItem(screen);


        if (ban==0){
        ui->label_3->setText("JUGADOR 2");
        ban=1;
        }
        if (ban>1){
            protag->setPos(520,360);
            ui->label_3->setText("");
            if (num > num2)
            {
                 ui->label_5->setText("GANADOR: JUGADOR 1");
            }
            else if (num < num2)
            {
                 ui->label_5->setText("GANADOR: JUGADOR 2");
            }
            else {
                ui->label_5->setText("JUGADORES EMPATARON EN PUNTOS");
            }


        }
        }

    }
}


void MainWindow::on_pushButton_clicked() //boton "Comenzar"
{
    scene->removeItem(screen);

    timer->start(dificultad*dt);
     while (cont1%21==0) {
         bars.append(new ESFERAGRAF());
         scene->addItem(bars.at(con));
         con++; //contador de las posiciones de bars

         cont1++; //contador para entrar a este while a crear una nueva esfera
     }


    //Para el jugador 2
     if (ban!=0){
         if (ban==1){   // inicializacion de las condiciones del juego para el jugador 2
             dificultad=10000;
             ui->label_2->setText("");
             protag->setPos(520,360);
             ban++;
             niveles=1;
             ui->nivel->display(niveles);
         }

         for(int i=0;i<bars.size();i++){
            bordercollision(bars.at(i)->getEsf());  // funcion para verificar si ha perdido
            bars.at(i)->actualizar(dt,v_limit);

            if (bars.at(i)->collidesWithItem(protag)){ // if para ver si ha colisionado con el prot

                bars.at(i)->getEsf()->Radio=0;
                num2+=5;
                ui->puntuacion_2->display(num2);
                if (num2%40==0){
                    niveles++;
                    ui->nivel->display(niveles);
                    dificultad-=2000;
                }

             }

        }

     }

     //Para el jugador 1
     if (ban==0){

         for(int i=0;i<bars.size();i++){
            bordercollision(bars.at(i)->getEsf());  // funcion para verificar si ha perdido
            bars.at(i)->actualizar(dt,v_limit);

            if (bars.at(i)->collidesWithItem(protag)){// if para ver si ha colisionado con el prot
                bars.at(i)->getEsf()->Radio=0;
                num+=5;
                ui->puntuacion->display(num);
                if (num%40==0){
                    niveles++;
                    ui->nivel->display(niveles);
                    dificultad-=2000;
                }
            }

        }
     }

     cont1++;

}


void MainWindow::on_pushButton_2_clicked()  //boton "pausa"
{
    timer->stop();


}

void MainWindow::on_pushButton_3_clicked()  //boton "guardar"
{
    ofstream datos;
    datos.open("datos.txt");

    //se guarda los datos del juego
    datos<<bars.size()<<"\n"<<num<<"\n"<<num2<<"\n"<<niveles<<"\n"<<ban<<"\n"<<cont1<<"\n"<<dificultad<<"\n"<<dt<<"\n";

    //se guarda los datos de las esferas
    for(int i=0; i<bars.size();i++){
        datos<<bars.at(i)->getEsf()->getX()<<"\t"<<bars.at(i)->getEsf()->getY()<<"\t"<<bars.at(i)->getEsf()->get_Vx()<<"\t"<<bars.at(i)->getEsf()->get_Vy()<<"\t"<<bars.at(i)->getEsf()->get_Masa()<<"\t"<<bars.at(i)->getEsf()->get_radio()<<"\n";
    }

    datos.close();
}

void MainWindow::on_pushButton_4_clicked() //boton "cargar"
{
    float px, py,vx,vy,masa,radio;
    fstream datos;
    datos.open("datos.txt");

    //se cargan los datos del juego
    datos>>con, datos>>num, datos>>num2, datos>>niveles, datos>>ban, datos>>cont1,datos>>dificultad,datos>>dt;

    for(int i=0;i<con;i++){ // ciclo para llenar la lista "bars" con las esferas guardadas
        datos>>px, datos>>py, datos>>vx, datos>>vy, datos>>masa, datos>>radio;
        bars.append(new ESFERAGRAF(px, py, vx, vy, masa, radio));
        scene->addItem(bars.at(i));
    }

    //se sacan en pantalla los datos del juego
    ui->nivel->display(niveles);
    ui->puntuacion->display(num);
    ui->puntuacion_2->display(num2);

}
