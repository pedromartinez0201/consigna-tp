#ifndef DEPORTES_H
struct competidores{
	int paises[16];
	int tl;
};
#define totalDeportes 87
#define deportesIndividuales 53
#define deportesColectivos 34
void imprimirDeporte(int indice);
void mostrarDeportes();
void mostrarDeportesIndividuales();
void listarDeportesPorCategoria(const char* categoria, const int* indices, int numIndices);
void mostrarDeportesColectivos();
#endif
