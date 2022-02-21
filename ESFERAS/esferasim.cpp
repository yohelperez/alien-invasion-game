#include "esferasim.h"
#include <stdlib.h>
#include <math.h>
#include "mainwindow.h"
const float k=-((1.29)*0.01*3.14)/2;//constante por estar en el mismo medio
ESFERASIM::ESFERASIM()
{


    Radio=50;
    px=50+rand()%800;
    py=200+rand()%490;
    vx=0;
    vy=-10;
    Masa=50+rand()%600+1-50;
    if(px<Radio || px+Radio>990){
        if(px<Radio){
            px=Radio;
        }
        else{
            px=990-Radio;
        }
    }

    if(py<Radio || py+Radio>440){
        if(py<Radio){
            py=Radio;
        }
        else{
            py=440-Radio;
        }
    }    
}

ESFERASIM::ESFERASIM(float px_, float py_, float vx_, float vy_, float Masa_, float radio_){
   Radio=radio_;
   px=px_;
   py=py_;
   vx=vx_;
   vy=vy_;
   Masa=Masa_;



}

ESFERASIM::~ESFERASIM(){

}

void ESFERASIM::actualizar(float dt)
{
    float v;
    v=pow((pow(vx,2)+pow(vy,2)),0.5);
    ace_x=(k*(pow(v,2))*(pow(Radio,2))/Masa)*cos(atan2(vy,vx));
    ace_y=((k*(pow(v,2))*(pow(Radio,2))/Masa)*sin(atan2(vy,vx)))-10;
    px+=vx*dt+1*dt*dt/2;
    py+=vy*dt+1*dt*dt/2;
    vy+=-10;
    vx+=0;
}

float ESFERASIM::getX(){
    return px;
}

float ESFERASIM::getY(){
    return py;
}

float ESFERASIM::get_Vx(){
    return vx;
}

float ESFERASIM::get_Vy(){
    return vy;
}

float ESFERASIM::get_Masa(){
    return Masa;
}

float ESFERASIM::get_radio(){
    return Radio;
}
