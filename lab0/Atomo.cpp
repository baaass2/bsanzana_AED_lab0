#include <iostream>
#include <list>
using namespace std;
#include "Atomo.h"
#include "Coordenada.h"

Atomo::Atomo() {
    string nombre = "\0";
	int numero = 1;
	Coordenada coordenada;
}

Atomo::Atomo (string nombre, int numero) {
    this->nombre = nombre;
	this->numero = numero;
}

string Atomo::get_nombre() {
    return this->nombre;
}

int Atomo::get_numero() {
    return this->numero;
}

Coordenada Atomo::get_coordenada() {
	return this->coordenada;

}

void Atomo::set_nombre(string nombre) {
    this->nombre = nombre;
}

void Atomo::set_numero(int numero) {
    this->numero = numero;
}

void Atomo::set_coordenada(Coordenada coordenada){
	this->coordenada = coordenada;
}