#include <iostream>
#include <list>
using namespace std;
#include "Aminoacido.h"

#ifndef CADENA_H
#define CADENA_H

class Cadena {
    private:
        string letra = "\0";
        string id = "\0";
		list<Aminoacido>aminoacidos;

    public:
		Cadena();
        Cadena (string letra);
        

        string get_letra();
        void set_letra(string letra);
		void add_aminoacido(Aminoacido a);
		list<Aminoacido> get_aminoacidos();
};
#endif