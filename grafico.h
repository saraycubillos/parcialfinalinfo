#ifndef GRAFICO_H
#define GRAFICO_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include "objeto.h"
//#include <QRandomGenerator>
#include <string.h>
#include <string>

class Grafico: public QGraphicsItem
{
public:
    Grafico(int x, float y, int ay, float m, float r);
    ~Grafico();
    void Actualizar();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void setEscala(float s);


    objeto* getEsf();
private:
    objeto* O;
    float escala;
};

#endif // GRAFICO_H
