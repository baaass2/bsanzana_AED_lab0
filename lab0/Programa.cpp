#include <iostream>
#include <list>
using namespace std;
#include "Proteina.h"
#include "Cadena.h"
#include "Aminoacido.h"
#include "Atomo.h"
#include "Coordenada.h"

void imprimir_datos_proteina() {

    //cout << p.get_nombre() << endl;
	//cout << p.get_id << endl;
}



int main () {
	list<Proteina> proteina;

	//int num_prote;
	//string id_prote;
	//string nom_prote;

	//string let_cad;
	//int num_cad;

	//string nom_aa;
	//int num_aa;
	//int num_aas;
	
	//string nom_atomo;
	//int num_atomo;
	//int num_atomos;

	//float x;
	//float y;
	//float z;
	
	//cout <<"¿Cuantas proteinas ingresará?: "; cin>>num_prote;

	//for(int i=0; i<num_prote; i++){
		//cout <<"¿Id de proteina? : "; cin>>id_prote;
		//cout <<"¿Nombre de proteina? : "; cin>>nom_prote;				
		//Proteina p = Proteina(nom_prote, id_prote);

		//cout <<"¿Cuantas cadenas tiene su proteina? : "; cin>>num_cad;
		//for(int j=0; j<num_cad; j++){
			//cout <<"¿Letra de Cadena? : "; cin>>let_cad;
			//Cadena c = Cadena(let_cad);
			//p.add_cadena(c);
			//cout <<"¿Cuantos AA tiene su cadena? : "; cin>>num_aas;
			//for(int k=0; k<num_aas; k++){
				////cout <<"¿Siglas de su AA? : "; cin>>nom_aa;
				////cout <<"¿Numero de su AA? : "; cin>>num_aa;
				//Aminoacido a = Aminoacido(nom_aa, num_aa);
				//c.add_aminoacido(a);
				
				//cout <<"¿Cuantos Atomos tiene su AA? : "; cin>>num_atomos;
				//for(int l=0; l<num_atomos; l++){
					//cout <<"¿Nombre de su Atomo del AA? : "; cin>>nom_atomo;
					//cout <<"¿Numero de su Atomo del AA? : "; cin>>num_atomo;
					//Atomo at = Atomo(nom_atomo, num_atomo);
					//a.add_atomo(at);
					//cout <<"¿Coordenada x del Atomo? : "; cin>>x;
					//cout <<"¿Coordenada y del Atomo? : "; cin>>y;
					//cout <<"¿Coordenada z del Atomo? : "; cin>>z;
					//Coordenada co = Coordenada(x, y, z);
					//at.set_coordenada(co);
				//}
			//}
		//}
		

        Proteina p = Proteina("WENA", "123");
        Cadena c = Cadena("A");
        p.add_cadena(c);
        Aminoacido a = Aminoacido("ALA", 12323);
        c.add_aminoacido(a);
        Atomo at = Atomo ("NITRO", 123);
        a.add_atomo(at);
        Coordenada co = Coordenada (1, 2, 3);
        at.set_coordenada(co);

		proteina.push_back(p);

        for (Proteina p1 : proteina){
		    list<Cadena>cadenas = p1.get_cadenas();
		    for(Cadena c1: cadenas){
			    list<Aminoacido> aa = c1.get_aminoacidos();
			    cout << aa.size() << endl;
            }
        }

	cout << "PROTEINAS INGRESADAS" << endl;
	for (Proteina p1 : proteina){
        cout << p1.get_nombre() << endl;
		cout << p1.get_id() << endl;
		list<Cadena>cadenas = p1.get_cadenas();

		for(Cadena c1: cadenas){
			cout << c1.get_letra() << endl;
			list<Aminoacido> aa = c1.get_aminoacidos();
			cout << aa.size() << endl;

			for(Aminoacido a1: aa){
				cout << a1.get_nombre() << endl;
				cout << a1.get_numero() << endl;
		    	list<Atomo> at = a1.get_atomos();
				
				for(Atomo at1: at){
					cout << at1.get_nombre() << endl;
					cout << at1.get_numero() << endl;
					Coordenada co = at1.get_coordenada();
					cout << co.get_x() << endl;
					cout << co.get_y() << endl;
					cout << co.get_z() << endl;	
				}
			}
		}
		cout << "---------------------" << endl;
	}
	imprimir_datos_proteina();


    return 0;
}


