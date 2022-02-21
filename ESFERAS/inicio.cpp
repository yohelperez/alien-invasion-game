#include "inicio.h"

inicio::inicio()
{

}

inicio::~inicio(){

}

QRectF inicio::boundingRect() const{
       return QRectF(-1*50,-1*50,1*500,1*500);
}

void inicio::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){

    QPixmap pixmap;
    pixmap.load("://invadido.jpg");
    painter->setBrush(QBrush(pixmap));
    painter->drawRect(boundingRect());

}
