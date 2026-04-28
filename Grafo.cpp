#include "Grafo.h"
#include <iomanip>

Grafo::Grafo(){
    cantidadNodos = 0;
    //Inicializamos la matriz vacia
    for (int i = 0; i < MAX_NODOS; i++){
        ciudades[i] = nullptr;
        for (int j = 0; j < MAX_NODOS; j++){
            if (i == j) {
                matriz[i][j] = 0; // Distancia a sí mismo es 0
            } else {
                matriz[i][j] = INFINITO; // El resto arranca sin conexión
            }
        }
    }
}

void Grafo::agregarCiudad(Ciudad* nuevaCiudad){
    if (cantidadNodos < MAX_NODOS){
        ciudades[nuevaCiudad->getId()] = nuevaCiudad;
        cantidadNodos++;
    }
}

void Grafo::conectarRuta(int idOrigen, int idDestino, int distancia){
    matriz[idOrigen][idDestino] = distancia;
    matriz[idDestino][idOrigen] = distancia; 
}

void Grafo::cortarRuta(int idOrigen, int idDestino){
    matriz[idOrigen][idDestino] = INFINITO;
    matriz[idDestino][idOrigen] = INFINITO; 
}

void Grafo::imprimirMatriz(){
    std::cout << "\nMatriz de Adyacencia Logistica:\n";
    for (int i = 0; i < cantidadNodos; i++){
        for (int j = 0; j < cantidadNodos; j++){
            if (matriz[i][j] == INFINITO){
                std::cout << std::setw(6) << "INF";
            } else{
                std::cout << std::setw(6) << matriz[i][j];
            }
        }
        std::cout << "\n";
    }
}