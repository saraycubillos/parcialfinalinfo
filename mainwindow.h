#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <QFile>
#include <string.h>
#include "planeta.h"
#include "graficar.h"
#include "grafico.h"
#include "objeto.h"
#include <iostream>
#include <fstream>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void actualizar();


    void GUARDARDATOS(double x, double y, double vx, double vy, double m, double r, int plan);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    QGraphicsScene *scene;
    int h_limit;
    int v_limit;
    QList<Graficar*>LISTA;
    QList<Grafico*>lista;
    double masa;
    double posx;
    double posy;
    double radio;
    double vx;
    double vy;
    int planetas=0;
    int aleatorioposx();
    int aleatorioacely();
};

#endif // MAINWINDOW_H
