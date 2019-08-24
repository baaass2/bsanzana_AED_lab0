#include <iostream>
#include <list>
#include "Atomo.h"
using namespace std;

#ifndef AMINOACIDO_H
#define AMINOACIDO_H

class Aminoacido {
    private:
        string nombre = "\0";
        int numero = 1;
		list<Atomo>atomos;

    public:
		Aminoacido();
        Aminoacido (string nombre, int numero);
        
        string get_nombre();
        int get_numero();
        void set_nombre(string nombre);
		void set_numero(int numero);
		void add_atomo (Atomo at);
		list<Atomo> get_atomos();
};
#endif