#pragma once
#include "Pila.h"
#include "MiClase.h"
#include <iostream>
#include <string>
using namespace std;

void comportamiento(Pila <double>& pila, double &inicio,double incremento,int contador) {
	pila.insertar(inicio);
	cout << inicio << ' ';
	inicio += incremento;
}

void comportamiento(Pila <int>& pila, int &inicio,int incremento, int contador) {
	pila.insertar(inicio);
	cout << inicio << ' ';
	inicio += incremento;
}

void comportamiento(Pila <string>& pila, string& inicio, string incremento, int contador) {
	string stringTemp = inicio + to_string(contador);
	pila.insertar(stringTemp);
	cout << stringTemp << ' ';
}
void comportamiento(Pila<MiClase>& pila, MiClase& inicio, MiClase incremento,  int contador) {
	string mcTemp = "MC" + to_string(contador);
	MiClase mc(mcTemp);
	pila.insertar(mc);
	cout << mcTemp << " ";
}

template <typename TIPO>
void tipos(string nombre_tipo, int const tamanio_pila,  TIPO numero_inicial, TIPO incremento) {
	Pila <TIPO> pila;

	cout << "\n--> Insertar elementos en " << nombre_tipo << "\n";
	for (int i = 0; i < tamanio_pila; i++) {
		comportamiento(pila, numero_inicial, incremento,i);
	}
	cout << "\n<-- Extraer elemetos de " << nombre_tipo << "\n";
	while (!pila.estaVacia()) {
		cout << pila.arriba() << ' ';
		pila.extraer();
	}
}