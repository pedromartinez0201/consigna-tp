#include<iostream>
#include"generarcompetencia.h"
#include"paises.h"
#include"deportes.h"
#include"cargarmedallaspordeporte.h"
using namespace std;

int deporte_medallas[87][3];
void cargaPorDeporteIndividual(){
	mostrarDeportesIndividuales();
	int id;
	int idPais1,idPais2,idPais3;
	cout<<"Elige el ID de deporte : "<<endl;
	cin>>id;
	
	cout<<"Listado"<<endl;
	imprimircompetencia(id);
	
	
	
	//PAIS 1 
	cout<<"Ingrese ID de pais (ORO): ";
	cin>>idPais1;
	
	deporte_medallas[id][0] = idPais1;
	
	//PAIS 2
	cout<<"Ingrese ID de pais  (PLATA): ";
	cin>>idPais2;
	
	deporte_medallas[id][1] = idPais2;
	
	//PAIS 3
	
	cout<<"Ingrese ID de pais  (BRONCE): ";
	cin>>idPais3;
	
	deporte_medallas[id][2] = idPais3;
	
	for(int i = 0; i < 3 ; i++){
		cout<<deporte_medallas[id][i]<<" ";
	}
	cout<<endl;
	
	
}

bool cargarmedallas(){
	
	bool ret = false;
	/*
	cout<<"MENU CARGA MEDALLAS POR DEPORTE "<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"1. Carga por Deporte Individual"<<endl;
	cout<<"2. Carga por Deporte Colectivo"<<endl;
	cout<<"Volver al menu Principal"<<endl;
	bool terminado = false;
	char opcion ;
	do{
		
		cin>> opcion;
		switch(opcion){
		case '1' :{
			cout<<"1. Carga por Deporte Individual"<<endl;
		}
		break;
		
		case '2':{
			cout<<"2. Carga por Deporte Colectivo"<<endl;
			
		}
		break;
		
		case 'X'
			
			cout<<"Volver al menu Principal"<<endl;
			
		}
		break;
		
	}while(!terminado)
	
	
	*/
	
	cargaPorDeporteIndividual();
	
	return ret;
}
