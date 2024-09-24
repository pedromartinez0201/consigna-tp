#include<iostream>
#include "paises.h"
#include "deportes.h"
#include"generarcompetencia.h"
#include"cargarmedallaspordeporte.h"
#include"mostrarmedallero.h"

using namespace std;

int main (int argc, char *argv[]) {
	
//cout<<"Lista de paises"<<endl;
//listarPaises();

//cout<<endl;
//cout<<endl;
bool validado1 = generarcompetencia();

bool validado2 = cargarmedallas();
//imprimirPais(3);
medalleroPaises();
//cout<<endl<<"Lista de deportes COLECTIVOS"<<endl;
//mostrarDeportesColectivos();
//cout<<endl<<"Lista de deportes INDIVIDUALES"<<endl;
//mostrarDeportesIndividuales();
//cout<<endl<<"Lista de deportes"<<endl;
//mostrarDeportes();
	return 0;
}

