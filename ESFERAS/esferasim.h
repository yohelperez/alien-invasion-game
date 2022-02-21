#ifndef ESFERASIM_H
#define ESFERASIM_H


class ESFERASIM
{
public:
    float px,py,vx,vy,Masa,Radio;//,E=0.8;//E coeficiente de restitucion;
    float ace_x,ace_y;
    ESFERASIM();
    ESFERASIM(float px_, float py_, float vx_, float vy_, float Masa_, float radio_);
    ~ESFERASIM();
    void actualizar(float dt);              //metodo que cambia los valores de posicion (realiza el movimiento), recive el lapso de tiempo transcurrido
    float getX();                  //metodos para retornar los atributos
    float getY();
    float get_Vx();
    float get_Vy();
    float get_Masa();
    float get_radio();
};

#endif // ESFERASIM_H
