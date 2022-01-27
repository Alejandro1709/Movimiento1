#include "pch.h"
#include "Caracter.h"
#include "time.h"
#include "windows.h">
#include <iostream>

using namespace std;
using namespace System;

int main() {

  srand(time_t(NULL));

  Caracter *obj;
  obj = new Caracter();

  int posX = 2 + rand() % 70;
  int posY = 2 + rand() % 20;

  obj->setX(posX);
  obj->setY(posY);

  while (true) {
    obj->borrar();
    obj->mover();
    obj->mostrar();

    _sleep(100);
  }

  delete obj;

  return 0;
}