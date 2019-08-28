#include <iostream>
#include <list>
#include <string>
using namespace std;
#include "Proteina.h"
#include "Cadena.h"
#include "Aminoacido.h"
#include "Atomo.h"
#include "Coordenada.h"

void imprimir_datos_proteina(list<Proteina> proteina) {

    cout << "---------------------" << endl;
	cout << "PROTEINAS INGRESADAS" << endl;
	cout << "---------------------" << endl;


	for (Proteina p1 : proteina){
        cout << "Nombre de proteina: " << p1.get_nombre() << endl;
		cout << "ID de proteina: " << p1.get_id() << endl;

		for(Cadena c: p1.get_cadenas() ){
			cout << "Letra de Cadena: " << c.get_letra() << endl;

			for(Aminoacido a: c.get_aminoacidos() ){
				cout << "Siglas de AA: " << a.get_nombre() << endl;
				cout << "Numero de AA: " << a.get_numero() << endl;
				
				for(Atomo at: a.get_atomos() ){
					cout <<"Nombre de Atomo: " << at.get_nombre() << endl;
					cout <<"Numero de Atomo: " << at.get_numero() << endl;
					Coordenada co = at.get_coordenada();
					cout << "Coordenada X: " << co.get_x() << endl;
					cout << "Coordenada Y: " << co.get_y() << endl;
					cout << "Coordenada Z: " << co.get_z() << endl;
				}
			}
		}
		cout << "---------------------" << endl;
	}
}



int main () {
	list<Proteina> proteina;

	int num_prote;
	string id_prote;
	string nom_prote;

	string let_cad;
	int num_cad;

	string nom_aa;
	int num_aa;
	int num_aas;
	
	string nom_atomo;
	int num_atomo;
	int num_atomos;

	float x;
	float y;
	float z;
	
	cout <<"¿Cuantas proteinas ingresará?: "; cin>>num_prote;

	for(int i=0; i<num_prote; i++){
		cout <<"¿Id de proteina? : "; cin>>id_prote;
		cout <<"¿Nombre de proteina? : "; cin>>nom_prote;				
		Proteina p = Proteina(nom_prote, id_prote);

		cout <<"¿Cuantas cadenas tiene su proteina? : "; cin>>num_cad;
		for(int j=0; j<num_cad; j++){
			cout <<"¿Letra de Cadena? : "; cin>>let_cad;
			Cadena c = Cadena(let_cad);
			cout <<"¿Cuantos AA tiene su cadena? : "; cin>>num_aas;
			for(int k=0; k<num_aas; k++){
				cout <<"¿Siglas de su AA? : "; cin>>nom_aa;
				cout <<"¿Numero de su AA? : "; cin>>num_aa;
				Aminoacido aa = Aminoacido(nom_aa, num_aa);
				
				cout <<"¿Cuantos Atomos tiene su AA? : "; cin>>num_atomos;
				for(int l=0; l<num_atomos; l++){
					cout <<"¿Nombre de su Atomo del AA? : "; cin>>nom_atomo;
					cout <<"¿Numero de su Atomo del AA? : "; cin>>num_atomo;
					Atomo atomo = Atomo(nom_atomo, num_atomo);
					cout <<"¿Coordenada x del Atomo? : "; cin>>x;
					cout <<"¿Coordenada y del Atomo? : "; cin>>y;
					cout <<"¿Coordenada z del Atomo? : "; cin>>z;
					Coordenada coo = Coordenada(x, y, z);
                    atomo.set_coordenada(coo);
                    aa.add_atomo(atomo);
				}
                c.add_aminoacido(aa);

			}
            p.add_cadena(c);
		}
        proteina.push_back(p);
    }
        //Coordenada coo = Coordenada (0,0,4);
        //Atomo atomo = Atomo ("nom_atom", 123);
        //Aminoacido aa = Aminoacido("nom_aa", 12323);
        //Cadena cadena = Cadena("letra_cad");
        //Proteina p = Proteina("nom_proteina", "id_proteina");
        //atomo.set_coordenada(coo);    
        //aa.add_atomo(atomo);
        //cadena.add_aminoacido(aa);
        //p.add_cadena(cadena);
		
     
    
	    imprimir_datos_proteina(proteina);


    return 0;
}


