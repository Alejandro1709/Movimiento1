#pragma once

class Caracter {
  private:
    int x;
    int y;
    int* dx;
  public:
    Caracter();

    void setX(int x);
    void setY(int y);

    void borrar();
    void mover();
    void mostrar();
    
    ~Caracter();
};