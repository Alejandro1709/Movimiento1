#pragma once

class Caracter {
  private:
    int x;
    int y;
    int* dx;
    int* dy;
    bool sentido;
  public:
    Caracter();

    void setX(int x);
    void setY(int y);
    void setSentido(bool sentido);
    void borrar();
    void mover();
    void mostrar();
    
    ~Caracter();
};