#ifndef INVASION_H
#define INVASION_H
#include<QGraphicsItem>
#include "esferasim.h"
#include <QGraphicsScene>
#include <QPainter>

class invasion: public QGraphicsItem
{
public:
    invasion();
    ~invasion();
    QRectF boundingRect() const;    //necesario definirla, devuelve el rectangulo que encierra el objeto
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    //void setEscala(float s);
};

#endif // INVASION_H
