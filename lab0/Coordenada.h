#include <iostream>
#include <list>
using namespace std;

#ifndef COORDENADA_H
#define COORDENADA_H

class Coordenada {
    private:
        float x = 0;
        float y = 0;
		float z = 0;

    public:
		Coordenada();
        Coordenada(float x, float y, float z);
        
        float get_x();
        float get_y();
		float get_z();
        void set_x(float x);
		void set_y(float y);
		void set_z(float z);
};
#endif