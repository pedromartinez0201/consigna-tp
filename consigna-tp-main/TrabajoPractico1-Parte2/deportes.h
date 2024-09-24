#ifndef DEPORTES_H
#define totalDeportes 87
#define deportesIndividuales 53
#define deportesColectivos 34

struct competidores{
	int paises[16];
	int tl;
};

void imprimirDeporte(int indice);
void mostrarDeportes();
void mostrarDeportesIndividuales();
void listarDeportesPorCategoria(const char* categoria, const int* indices, int numIndices);
void mostrarDeportesColectivos();

extern competidores competencia[87];
extern int indicesIndividuales[deportesIndividuales];
extern int indicesColectivos[deportesColectivos];
#endif
