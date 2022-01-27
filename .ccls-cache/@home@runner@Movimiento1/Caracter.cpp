#include "Caracter.h"
#include <iostream>

using namespace std;
using namespace System;

Caracter::Caracter() {
  // Configurar las coordenadas iniciales
  this->x = 0;
  this->y = 0;
  this->dx = new int;
  this->dy = new int;
  this->sentido = true; // true: horario false: anti horario
  *(this->dx) = 1;
  *(this->dy) = 1;
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

  //para el desplazamiento en y
  if ((this->y + *(this->dy)> 30) || (this->y + *(this->dy) < 0)) {
        *(this->dx) *= -1; // cambiar la direccion del movimiento
  }
  this->x += *(this->dx);
  this->y += *(this->dy);
}

void Caracter::mostrar() {
  Console::setCursorPosition(this->x, this->y);
  cout << (char)2;
}

void Caracter::setSentido(bool sentido) {
  if (this->sentido == true) {
    this->sentido = false;
  } else {
    this->sentido = true;
  }
}

Caracter::~Caracter() {
  delete this->dx;
  delete this->dy;
}