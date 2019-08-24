 
#include <iostream>
#include <list>
using namespace std;
#include "Proteina.h"
#include "Cadena.h"

/* constructores */
Proteina::Proteina() {
    string nombre = "\0";
    string id = "\0";
	list<Cadena>cadenas;
}

Proteina::Proteina (string nombre, string id) {
    this->nombre = nombre;
    this->id = id;
	this->cadenas = cadenas;
}

/* métodos get and set */
string Proteina::get_nombre() {
    return this->nombre;
}

string Proteina::get_id() {
    return this->id;
}

void Proteina::add_cadena(Cadena c) {
	cadenas.push_back(c);

}

list<Cadena> Proteina::get_cadenas() {
    return this->cadenas;
}
void Proteina::set_nombre(string nombre) {
    this->nombre = nombre;
}
        
void Proteina::set_id(string id) {
    this->id = id;
}