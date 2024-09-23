#include "paises.h"
#include "deportes.h"
#include "cargarmedallaspordeporte.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

competidores competencia[87];

// Función para mezclar los elementos de un array usando Fisher-Yates
void mezclarPaises(int paises[], int size) {
	for (int i = size - 1; i > 0; i--) {
		// Generar un índice aleatorio desde 0 hasta i
		int j = rand() % (i + 1);
		// Intercambiar paises[i] con paises[j]
		int temp = paises[i];
		paises[i] = paises[j];
		paises[j] = temp;
	}
}

void imprimircompetencias(){
	for(int i = 0; i < 87; i++){
		cout << "Disciplina --> ";
		imprimirDeporte(i);
		for(int j = 0; j < 16; j++){
			cout << competencia[i].paises[j] << " ";
		}
		cout << endl;
		cout << "--------------------------" << endl;
	}
}
void cargaAleatoria(){
	srand(time(NULL));  // Inicializar la semilla del generador de números aleatorios
	cout << "BIENVENIDO A LA CARGA ALEATORIA DE COMPETENCIAS" << endl;
	
	// Crear un array de países del 1 al 196
	int paisesDisponibles[196];
	for (int i = 0; i < 196; i++) {
		paisesDisponibles[i] = i + 1;  // Llenar el array con los países 1 a 196
	}
	
	// Para cada disciplina, tomar 16 países aleatorios sin repetir
	for (int i = 0; i < totalDeportes; i++) {
		// Mezclar el array de países
		mezclarPaises(paisesDisponibles, 196);
		competencia[i].tl = rand() % 16 + 4;
		// Asignar los primeros 16 países mezclados a la competencia[i]
		for (int j = 0; j < competencia[i].tl; j++) {
			competencia[i].paises[j] = paisesDisponibles[j];
		}
	}
}

	
	bool generarcompetencia(){
		char carga;
		bool cargado = false;
		do{
			cout<<"CARGAR COMPETENCIA (Y / N)"<<endl;
			cin>>carga;
			if(carga == 'Y') {
				cargaAleatoria();
				cargado = true;
			}
		}while(carga == 'N' || cargado == false);
		
		
		
		
		
		cout<<"CARGA ALEATORIA CON EXITO"<<endl;
		
		// Imprimir las competencias con los países asignados
		imprimircompetencias();
		return cargado;
	}
		void imprimircompetencia(int indice){
			cout<<"Disciplina --> ";
			imprimirDeporte(indice);
			for(int j = 0; j < 16; j++){
				cout << competencia[indice].paises[j] << " ";
			}
			cout << endl;
			cout << "--------------------------" << endl;
			
		}

	


