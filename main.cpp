#include <iostream>
#include "Grafo.h"

int main(){
    Grafo redLogistica;

    // 1. Crear las ciudades (Nodos)
    // Las coordenadas (X, Y) las inventamos por ahora hasta que pongan el mapa de fondo
    Ciudad* mendoza = new Ciudad(0, "Mendoza Capital", 100, 100);
    Ciudad* alvear = new Ciudad(1, "General Alvear", 200, 300);
    Ciudad* malargue = new Ciudad(2, "Malargue", 150, 400);

    // 2. Agregarlas al grafo
    redLogistica.agregarCiudad(mendoza);
    redLogistica.agregarCiudad(alvear);
    redLogistica.agregarCiudad(malargue);

    // 3. Conectar las rutas (Aristas) según la tabla armada
    redLogistica.conectarRuta(0, 1, 288); // Mendoza (0) - Gral Alvear (1)
    redLogistica.conectarRuta(0, 2, 324); // Mendoza (0) - Malargüe (2)
    redLogistica.conectarRuta(1, 2, 264); // Gral Alvear (1) - Malargüe (2)

    // 4. Mostrar la matriz original
    std::cout << "--- ESTADO INICIAL DE LA RED ---" << std::endl;
    redLogistica.imprimirMatriz();

    // 5. Simular una contingencia (Ruta cortada)
    std::cout << "\n--- ALERTA: RUTA MENDOZA - ALVEAR CORTADA ---" << std::endl;
    redLogistica.cortarRuta(0, 1);

    // 6. Mostrar la matriz actualizada
    redLogistica.imprimirMatriz();

    // Liberar la memoria dinámica (Buena práctica heredada de C)
    delete mendoza;
    delete alvear;
    delete malargue;

    std::cout << "\nPresiona Enter para salir...";
    std::cin.get();

    return 0;
}