#include "esferagraf.h"
#include "QDebug"
#include "esferasim.h"


ESFERAGRAF::ESFERAGRAF()
{
    escala=1;
    esf=new ESFERASIM();
}


ESFERAGRAF::ESFERAGRAF(float px_, float py_, float vx_, float vy_, float Masa_, float radio_){
    escala=1;
    esf=new ESFERASIM(px_, py_, vx_, vy_, Masa_, radio_);
}

ESFERAGRAF::~ESFERAGRAF(){
    delete esf;
}
QRectF ESFERAGRAF::boundingRect() const
{
        return QRectF(-1*esf->Radio,-1*esf->Radio,1*esf->Radio,1*esf->Radio);

}

void ESFERAGRAF::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

    QPixmap pixmap;
    pixmap.load("://alien.png");
    painter->setBrush(QBrush(pixmap));
    painter->drawEllipse(boundingRect());

}


void ESFERAGRAF::setEscala(float s)
{
    escala=s;
}

void ESFERAGRAF::actualizar(float dt, float v_lim)//ACTUALIZA POSICION Y VELOCIDAD DE LA ESFERA
{
    esf->actualizar(dt);

    setPos(esf->getX(),(v_lim-esf->getY()));
}

ESFERASIM *ESFERAGRAF::getEsf()
{
    return esf;
}

