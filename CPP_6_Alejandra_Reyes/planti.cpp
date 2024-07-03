#include <iostream>
#include "MiClase.h"
#include "Pila.h"
#include "tipos.h"

int main() {
   MiClase mc("");
   tipos<double>("doublePila", 5, 1.1, 1.1);
   tipos<int>("intPila",10, 1, 1);
   tipos<string>("stringPila",10, "C++", "");
   tipos<MiClase>("mcPila",10,mc, mc);
}