#include <iostream>
#include <list>
#include "Cadena.h"
using namespace std;

#ifndef PROTEINA_H
#define PROTEINA_H

class Proteina {
    private:
        string nombre = "\0";
        string id = "\0";
		list<Cadena>cadenas;

    public:
        /* constructores */
        Proteina ();
        Proteina (string nombre, string id);
        
        /* métodos get and set */
        string get_nombre();
        string get_id();
        void set_nombre(string nombre);
        void set_id(string id);
		void add_cadena(Cadena c);
		list<Cadena> get_cadenas();
};
#endif
