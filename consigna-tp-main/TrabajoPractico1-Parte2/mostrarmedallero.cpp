#include<iostream>
#include "paises.h"
#include "deportes.h"
#include"generarcompetencia.h"
#include"cargarmedallaspordeporte.h"

using namespace std;

void medalleroPaises(){
	cout<<"ORO: "<<endl;
	for(int i=0;i<87;i++){
		if(deporte_medallas[i][0]!=0){
			imprimirPais(deporte_medallas[i][0]);
			cout<<endl;
		}
	}
	cout<<"PLATA: "<<endl;
	for(int i=0;i<87;i++){
		if(deporte_medallas[i][1]!=0){
			imprimirPais(deporte_medallas[i][1]);
			cout<<endl;
		}
	}
	cout<<"BRONCE: "<<endl;
	for(int i=0;i<87;i++){
		if(deporte_medallas[i][2]!=0){
			imprimirPais(deporte_medallas[i][2]);
			cout<<endl;
		}
	}
	cout<<"FINALIZADO"<<endl;
}
/*
void medalleroDeportes(){
	for(int i=0; i<87;i++){
		for(int j=0;j<3;j++){
			if(deporte_medallas[i][j]!=0){
				cout<<"Deporte: "<<imprimircompetencia(i)<<endl;
				
				switch(j){
					case 1:
				}
				
			}
		}
	}
}

void medalleroTop(){
	
}
*/
