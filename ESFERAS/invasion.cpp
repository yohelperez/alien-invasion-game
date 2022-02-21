#include "invasion.h"

invasion::invasion()
{

}

invasion::~invasion(){

}

QRectF invasion::boundingRect() const
{
     return QRectF(0,0,990,500);
}

void invasion::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){

    QPixmap pixmap;
    pixmap.load("://alien-attack.jpg");
    painter->setBrush(QBrush(pixmap));
    painter->drawRect(boundingRect());
}
