#include<iostream>
#include"generarcompetencia.h"
#include"paises.h"
#include"deportes.h"
#include"cargarmedallaspordeporte.h"

// cantidad de deportes individuales 53

using namespace std;

// generarcompetencia.h   extern competidores competencia [87];

// generarcompetencia.cpp   competidores competencia[87];



int deporte_medallas[87][3];
void cargaPorDeporteIndividual(){
	mostrarDeportesIndividuales();
	int id;
	int idPais1,idPais2,idPais3;
	bool v = false;
	bool encon = false;
	bool var1 = false,var2 = false,var3=false;
	do{
		cout<<"Elige el ID de deporte : "<<endl;
		cin>>id;
		
		
		
		
		
		
		//id == indicesIndividuales[j]
		for(int j = 0 ; j < 53 ; j++){
			if(id == indicesIndividuales[j]) encon = true;
		}
		
		
		if(encon){
			v = true;
			cout<<"Deporte Encontrado"<<endl;
			cout<<"Listado"<<endl;
			imprimircompetencia(id);
			//PAIS 1
			
			do{
				cout<<"Ingrese ID de pais (ORO): ";
				cin>>idPais1;
				
				//Verificamos que ID pais este dentro de los paises participantes
				for(int a = 0 ; a < 16 ; a++){
					if(idPais1 == competencia[id].paises[a]) {
						var1=true; 
						//Guardo pais ID en deporte_medallas
						deporte_medallas[id][0] = idPais1;
					}
				}
				if(!var1) cout<<"ID pais Erroneo"<<endl;
			}while(!var1);
			
			
			do{
				cout<<"Ingrese ID de pais (PLATA): ";
				cin>>idPais2;
				
				//Verificamos que ID pais este dentro de los paises participantes
				for(int a = 0 ; a < 16 ; a++){
					if(idPais2 == competencia[id].paises[a]) {
						var2=true; 
						
						//Pregunto si no se repite la medalla
						if(idPais2 == deporte_medallas[id][0]) var2 =false;
						else{
							//Guardo pais ID en deporte_medallas
							deporte_medallas[id][1] = idPais2;
						}
					}
				}
				if(!var2) cout<<"ID pais Erroneo o Medallista Repetido"<<endl;
			}while(!var2);
			
			
			
			do{
				cout<<"Ingrese ID de pais (BRONCE): ";
				cin>>idPais3;
				
				//Verificamos que ID pais este dentro de los paises participantes
				for(int a = 0 ; a < 16 ; a++){
					if(idPais3 == competencia[id].paises[a]) {
						var3=true; 
						//Pregunto si no se repite la medalla
						if(idPais3 == deporte_medallas[id][0] || idPais3 == deporte_medallas[id][1]) var3 = false;
						else{
							//Guardo pais ID en deporte_medallas
							deporte_medallas[id][2] = idPais3;
						}
						
						
					}
				}
				if(!var3) cout<<"ID pais Erroneo o Medallista Repetido "<<endl;
			}while(!var3);
			
			
			
		}
		else{
			cout<<"Deporte no encontrado"<<endl;
		}
		
	}while(!v);
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
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
