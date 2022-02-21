#ifndef ESFERAGRAF_H
#define ESFERAGRAF_H
#include<QGraphicsItem>
#include "esferasim.h"
#include <QGraphicsScene>
#include <QPainter>

class ESFERAGRAF:public  QGraphicsItem
{
public:
    ESFERAGRAF();
    ESFERAGRAF(float px_, float py_, float vx_, float vy_, float Masa_, float radio_);
    ~ESFERAGRAF();
    QRectF boundingRect() const;    //necesario definirla, devuelve el rectangulo que encierra el objeto
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void setEscala(float s);
    void actualizar(float dt, float v_lim);
    ESFERASIM* getEsf();
    ESFERASIM* esf;
    float escala;
};

#endif // ESFERAGRAF_H
