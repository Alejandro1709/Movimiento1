#include "Caracter.h"
#include <iostream>

using namespace std;
using namespace System;

Caracter::Caracter() {
  // Configurar las coordenadas iniciales
  this->x = 0;
  this->y = 0;
  this->dx = new int;
  *(this->dx) = 1;
}

void Caracter::setX(int x) {
  this->x = x;
}

void Caracter::setY(int y) {
  this->y = y;
}

void Caracter::borrar() {
  Console::setCursorPosition(this->x, this->y);
  cout << " ";
}

void Caracter::mover() {
  //llegamos al limite derecho moviendonos de izquierda a derecha
  if (this->x + *(this->dx) > 79) {
    *(this->dx) = -1; // cambiar la direccion del movimiento
  }
  //llegamos al limite izquierdo moviendonos de derecha a izquierda
  if (this->x + *(this->dx) < 0) {
    *(this->dx) = 1; // cambiar la direccion del movimiento
  }

  this->x += *(this->dx);
}

void Caracter::mostrar() {
  Console::setCursorPosition(this->x, this->y);
  cout << (char)2;
}

Caracter::~Caracter() {
  delete this->dx;
}