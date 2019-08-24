#include <iostream>
#include "Coordenada.h"
#include <list>
using namespace std;

#ifndef ATOMO_H
#define ATOMO_H

class Atomo {
    private:
        string nombre = "\0";
        int numero = 1;
		Coordenada coordenada;

    public:
		Atomo();
        Atomo (string nombre, int numero);
        
        string get_nombre();
        Coordenada get_coordenada();
        int get_numero();
        void set_nombre(string nombre);
		void set_numero(int numero);
		void set_coordenada(Coordenada coordenada);

};
#endif