#ifndef INICIO_H
#define INICIO_H
#include <QGraphicsEffect>
#include <QGraphicsScene>
#include <QPainter>
#include "mainwindow.h"


class inicio: public QGraphicsItem
{
public:
    inicio();
    ~inicio();
    QRectF boundingRect() const;    //necesario definirla, devuelve el rectangulo que encierra el objeto
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    //void setEscala(float s);
};

#endif // INICIO_H
