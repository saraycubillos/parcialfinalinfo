#ifndef OBJETO_H
#define OBJETO_H

class objeto
{   double posx,posy;
    double acely;
    double Masa;
    double radio;
public:
    objeto();
    void Asignar(int pi, float pyi, int ay,float m, float rad);
    void setEscala(float s);
    void caer();
    void rebotar();
    double getPosx() const;
    void setPosx(double value);
    double getPosy() const;
    void setPosy(double value);
    double getAcely() const;
    void setAcely(double value);
    double getMasa() const;
    void setMasa(double value);
    double getRadio() const;
    void setRadio(double value);
};

#endif // OBJETO_H
