#include "objeto.h"

objeto::objeto()
{

}

void objeto::Asignar(int pxi, float pyi, int ay, float m, float rad)
{
    posx=pxi;
    posy=pyi;
    acely=ay;
    Masa=m;
    radio=rad;

}

void objeto::caer() //se actualizan todos los datos//
{
    posx=posx;
    posy=posy-5*acely;

}

void objeto::rebotar()
{   posx=posx;
    posy=posy+5*acely;
}

double objeto::getPosx() const
{
    return posx;
}

void objeto::setPosx(double value)
{
    posx = value;
}

double objeto::getPosy() const
{
    return posy;
}

void objeto::setPosy(double value)
{
    posy = value;
}

double objeto::getAcely() const
{
    return acely;
}

void objeto::setAcely(double value)
{
    acely = value;
}

double objeto::getMasa() const
{
    return Masa;
}

void objeto::setMasa(double value)
{
    Masa = value;
}

double objeto::getRadio() const
{
    return radio;
}

void objeto::setRadio(double value)
{
    radio = value;
}
