#ifndef GRAFO_H
#define GRAFO_H
#include "Ciudad.h"
#include <iostream>

#define MAX_NODOS 50
#define INFINITO 99999

class Grafo {
    private:
        Ciudad* ciudades[MAX_NODOS];
        int matriz[MAX_NODOS][MAX_NODOS];
        int cantidadNodos;

    public:
        Grafo();

        void agregarCiudad(Ciudad* nuevaCiudad);
        void conectarRuta(int idOrigen, int idDestino, int distancia);
        void cortarRuta(int idOrigen, int idDestino);
        void imprimirMatriz();
};

#endif