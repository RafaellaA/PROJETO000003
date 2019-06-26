#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QColor>
#include <QAction>
#include "sculptor.h"
#include "vector"

class Plotter : public QWidget
{
    Q_OBJECT
private:
    vector<vector<Voxel>>e;
    //float amplitude = 1.0,frequencia = 1,velocidade = 0.0,angulo = 0.0;
    //int timerId;
    //QColor background;
    //QAction *actionOpcao;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void shape(int sh);
    Sculptor *s;
    int dim,plano; //Dimensao e plano
    int r,g,b,a; //cores que serao modificadas
    int _x,_y,_z; //Medidas do PLano
    int raio,rx,ry,rz;
    int x,y,z;//variaveis auxiliares
    int sh = 1;
    //void timerEvent(QTimerEvent *event);
    //void mousePressEvent(QMouseEvent *event);
    //void mouseMoveEvent(QMouseEvent *event);
    //void contextMenuEvent(QContextMenuEvent *event);

signals:
    //void moveX(int);
    //void moveY(int);

public slots:
    //void setTamanho(int _nlinhas, int _ncolunas);
    /*void mudaDimX(int size);
    void mudaDimY(int size);
    void mudaDimZ(int size);
    void mudaRx(int _rx);
    void mudaRy(int _ry);
    void mudaRz(int _rz);
    void mudaR(int vermelho);
    void mudaG(int verde);
    void mudaB(int azul);
    void mudaAlpha(int a);
    //void setVelocidade(int _velocidade);
    //void mudacor(void);
*/

};

#endif // PLOTTER_H
