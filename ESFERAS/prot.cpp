#include "prot.h"
#include <QDebug>

prot::prot(int x, int y)
{
    px=x;
    py=y;

}
QRectF prot::boundingRect() const
{
        return QRectF(px,py,100,100);
}

void prot::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPixmap pixmap;
    pixmap.load("://marcador.png");
    painter->setBrush(QBrush(pixmap));
    painter->drawPixmap(px,py,80,80,pixmap);

}

void prot::actualizar(int x, int y)
{
    setPos(x,y);
}

int prot::getpx(){
    return px;
}
int prot::getpy(){
    return py;
}

