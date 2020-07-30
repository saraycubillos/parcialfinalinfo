#include "grafico.h"

#include "QDebug"
#include <string>
#include <string.h>
Grafico::Grafico(int x, float y,int ay, float m, float r) : escala(0.02)
{

    O=new objeto();
    O->Asignar(x,y,ay,m,r);
}

Grafico::~Grafico()
{
    delete O;
}

QRectF Grafico::boundingRect() const
{
        return QRectF(-1*escala*O->getRadio(),-1*escala*O->getRadio(),2*escala*O->getRadio(),2*escala*O->getRadio());
}

void Grafico::paint(QPainter*painter, const QStyleOptionGraphicsItem*, QWidget*)
{

    painter->setBrush(Qt::magenta);
    painter->drawEllipse(boundingRect());
}

void Grafico::setEscala(float s)
{
    escala=s;
}

void Grafico::Actualizar()
{
    O->caer();
    setPos(O->getPosx()*escala,(-O->getPosy())*escala);
}
objeto *Grafico::getEsf()
{
    return O;
}
