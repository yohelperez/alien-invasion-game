#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include "esferasim.h"
#include "esferagraf.h"
#include "prot.h"
#include "invasion.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int h_limit;                //longitud en X del mundo
    int v_limit;                //longitud en Y del mundo
    int num;                    // variable de puntuacion
    int num2;
    int niveles;
    int ban;                    //bandera para saber en el juego de cual jugador estoy
    int cont1;                  // contador que controla la frecuencia de aparicion de las naves
    int dificultad;


private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;              //timer para los intervalos de tiempo entre cada frame
    QGraphicsScene *scene;      //scene que muestra los objetos animados
    float dt;                   //intervalo de tiempo entre frames
    int con=0;                  //contador de las posiciones de la lista bars
    void bordercollision(ESFERASIM *b);   //metodo para las colisiones con los bordes del mundo
    QList<ESFERAGRAF*> bars;//LISTA DE ESFERAS GRAFICAS
    prot* protag;
    invasion* screen;

    
};

#endif // MAINWINDOW_H
