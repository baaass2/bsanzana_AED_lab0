 
#include <iostream>
#include <list>
using namespace std;
#include "Cadena.h"
#include "Aminoacido.h"

Cadena::Cadena() {
    string letra = "\0";
	list<Aminoacido>aminoacidos;
}

Cadena::Cadena (string letra) {
    this->letra = letra;
	this-> aminoacidos = aminoacidos;
}

string Cadena::get_letra() {
    return this->letra;
}

void Cadena::add_aminoacido(Aminoacido a) {
	aminoacidos.push_back(a);

}

list<Aminoacido> Cadena::get_aminoacidos() {
    return this->aminoacidos;
}
void Cadena::set_letra(string letra) {
    this->letra = letra;
}