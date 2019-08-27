#include <iostream>
#include <list>
using namespace std;
#include "Aminoacido.h"
#include "Atomo.h"

Aminoacido::Aminoacido() {
    string nombre = "\0";
	int numero = 1;
	list<Atomo>atomos;
}

Aminoacido::Aminoacido (string nombre, int numero) {
    this->nombre = nombre;
	this->numero = numero;
}

string Aminoacido::get_nombre() {
    return this->nombre;
}

int Aminoacido::get_numero() {
    return this->numero;
}

void Aminoacido::add_atomo(Atomo at) {
	this->atomos.push_back(at);

}

list<Atomo> Aminoacido::get_atomos() {
    return this->atomos;
}

void Aminoacido::set_nombre(string nombre) {
    this->nombre = nombre;
}


void Aminoacido::set_numero(int numero) {
    this->numero = numero;
}