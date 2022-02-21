#ifndef PROT_H
#define PROT_H
#include<QGraphicsItem>
#include "esferasim.h"
#include <QGraphicsScene>
#include <QPainter>
#include<QPixmap>
#include <QMouseEvent>


class prot:public  QGraphicsItem
{
public:
    prot(int x, int y);
    QRectF boundingRect() const;    //necesario definirla, devuelve el rectangulo que encierra el objeto
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void setEscala(float s);
    void actualizar(int x, int y);
    int getpx();
    int getpy();
    int px,py,radio;
};

#endif // PROT_H


