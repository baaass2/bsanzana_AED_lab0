#include <iostream>
#include <list>
using namespace std;
#include "Coordenada.h"

Coordenada::Coordenada() {
    float x = 0;
	float y = 1;
	float z = 0;
}

Coordenada::Coordenada (float x, float y, float z) {
    this->x = x;
	this->y = y;
	this->z = z;
}

float Coordenada::get_x() {
    return this-> x;
}

float Coordenada::get_y() {
    return this-> y;
}

float Coordenada::get_z() {
    return this-> z;
}

void Coordenada::set_x(float x) {
    this->x = x;
}

void Coordenada::set_y(float y) {
    this->x = y;
}

void Coordenada::set_z(float z) {
    this->z = z;
}