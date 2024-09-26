#include<iostream>
#include "paises.h"
#include "deportes.h"
#include"generarcompetencia.h"
#include"cargarmedallaspordeporte.h"

using namespace std;

int medallasPorPaises[196][3];
void medalleroPaises(){
	for(int a=0;a<196;a++){
		for(int j=0;j<3;j++){
			medallasPorPaises[a][j]=0;
		}
	}
	
	for(int j=0;j<3;j++){
		for(int i=0;i<87;i++){
			if(deporte_medallas[i][j]!=0){
				medallasPorPaises[deporte_medallas[i][j]][j]++;
			}
		}
	}
	
	cout<<"--------------------"<<endl;
	cout<<" Medallero por Pais"<<endl;
	cout<<"--------------------"<<endl;
	cout<<endl;
	for(int i=0; i<196;i++){
		for(int j=0;j<3;j++){
			if(medallasPorPaises[i][j]!=0){
				cout<<"Pais: ";
				imprimirPais(i);
				cout<<endl;
				
				cout<<"ORO: "<<medallasPorPaises[i][0]<<endl;
				cout<<"PLATA: "<<medallasPorPaises[i][1]<<endl;
				cout<<"BRONCE: "<<medallasPorPaises[i][2]<<endl;
				cout<<endl;
			}
		}
	}
	
	cout<<"FINALIZADO"<<endl;
}

void medalleroDeportes(){
	cout<<"-----------------------"<<endl;
	cout<<" Medallero por Deporte"<<endl;
	cout<<"-----------------------"<<endl;
	cout<<endl;
	for(int i=0; i<87;i++){
		if(deporte_medallas[i][0]!=0){
			cout<<"Deporte: ";
			imprimirDeporte(i);
			cout<<endl;
			
			cout<<"ORO: ";
			imprimirPais(deporte_medallas[i][0]);
			
			cout<<"PLATA: ";
			imprimirPais(deporte_medallas[i][1]);
			
			cout<<"BRONCE: ";
			imprimirPais(deporte_medallas[i][2]);
			cout<<endl;
		}
	}
}
void intercambio(int& a, int& b){
	int aux=a;
	a=b;
	b=aux;
}
void medalleroTop(){
	int top=0,medallasTotales[196],indicesPaises[196];//numero de medallas totales por pais
	int pasada=1, k, intercambios=1;
	for(int a=0;a<196;a++){
		medallasTotales[a]=0;
		indicesPaises[a]=a;
	}
	for(int j=0;j<3;j++){
		for(int i=0;i<196;i++){
			if(medallasPorPaises[i][j]!=0){
				medallasTotales[i]++;
			}
		}
	}
	while(pasada<196 and intercambios){
		intercambios=0;
		for(k=0;k<196-pasada;k++){
			if(medallasTotales[k]<medallasTotales[k+1]){
				intercambio(medallasTotales[k], medallasTotales[k+1]);
				intercambio(indicesPaises[k], indicesPaises[k+1]);
				intercambios=1;
			}
		}
		pasada=pasada+1;
	}
	cout<<"Ingrese la cantidad de posiciones que desea ver: ";
	cin>>top;
	cout<<endl;
	
	for(int i=0;i<top;i++){
		cout<<i+1<<". ";
		imprimirPais(indicesPaises[i]);
		cout<<" "<<medallasTotales[i]<<" medallas."<<endl;
	}
}


