#include <iostream>
#include "Grafo.h"
#include "menu.hpp"

int main() {
    Grafo redLogistica;

    // 1. CREAR LAS CIUDADES (Nodos)
    // Asignamos un ID único a cada una de las 9 ciudades relevadas.
    // (Las coordenadas X e Y son inventadas por ahora, se ajustarán cuando pongan el TImage).
    Ciudad* mendoza = new Ciudad(0, "Mendoza Capital", 100, 100);
    Ciudad* lasCatitas = new Ciudad(1, "Las Catitas", 200, 100);
    Ciudad* sanCarlos = new Ciudad(2, "San Carlos", 100, 200);
    Ciudad* sanRafael = new Ciudad(3, "San Rafael", 150, 300);
    Ciudad* alvear = new Ciudad(4, "Gral. Alvear", 250, 350);
    Ciudad* puntaAgua = new Ciudad(5, "Punta del Agua", 300, 400);
    Ciudad* elNihuil = new Ciudad(6, "El Nihuil", 150, 400);
    Ciudad* laJaula = new Ciudad(7, "La Jaula", 100, 350);
    Ciudad* malargue = new Ciudad(8, "Malargue", 100, 500);

    // 2. AGREGARLAS AL GRAFO
    redLogistica.agregarCiudad(mendoza);
    redLogistica.agregarCiudad(lasCatitas);
    redLogistica.agregarCiudad(sanCarlos);
    redLogistica.agregarCiudad(sanRafael);
    redLogistica.agregarCiudad(alvear);
    redLogistica.agregarCiudad(puntaAgua);
    redLogistica.agregarCiudad(elNihuil);
    redLogistica.agregarCiudad(laJaula);
    redLogistica.agregarCiudad(malargue);

    // 3. CARGAR LAS RUTAS (Aristas)
    // Usamos las distancias en KM extraídas exactamente de las tablas

    // Conexiones desde Mendoza
    redLogistica.conectarRuta(0, 1, 91);  // Mendoza - Las Catitas
    redLogistica.conectarRuta(0, 2, 106); // Mendoza - San Carlos

    // Conexiones desde Las Catitas
    redLogistica.conectarRuta(1, 4, 195); // Las Catitas - Gral. Alvear

    // Conexiones desde San Carlos
    redLogistica.conectarRuta(2, 3, 132); // San Carlos - San Rafael
    redLogistica.conectarRuta(2, 4, 216); // San Carlos - Gral. Alvear
    redLogistica.conectarRuta(2, 7, 123); // San Carlos - La Jaula
    redLogistica.conectarRuta(2, 8, 222); // San Carlos - Malargue


    // Conexiones desde San Rafael
    redLogistica.conectarRuta(3, 4, 85);  // San Rafael - Gral. Alvear
    redLogistica.conectarRuta(3, 6, 73);  // San Rafael - El Nihuil
    redLogistica.conectarRuta(3, 8, 186); // San Rafael - Malargue

    // Conexiones desde Gral. Alvear
    redLogistica.conectarRuta(4, 5, 93);  // Gral. Alvear - Punta del Agua
    redLogistica.conectarRuta(4, 6, 150); // Gral. Alvear - El Nihuil

    // Conexiones hacia Malargue desde el Sur
    redLogistica.conectarRuta(5, 8, 230); // Punta del Agua - Malargue
    redLogistica.conectarRuta(6, 8, 157); // El Nihuil - Malargue
    redLogistica.conectarRuta(7, 8, 109); // La Jaula - Malargue

    // 4. MOSTRAR LA RED
    std::cout << "--- ESTADO INICIAL DE LA RED LOGISTICA ---\n";
    redLogistica.imprimirMatriz();
    
    bool seguir = true;
    while (seguir) {
        int opcion = mostrarMenu();   // ← la función está disponible
         switch (opcion) {
            case 1: std::cout << "-> Opción 1 seleccionada.\n"; break;
            case 2: std::cout << "-> Opción 2 seleccionada.\n"; break;
            case 3: std::cout << "-> Opción 3 seleccionada.\n"; break;
            case 4: std::cout << "-> Saliendo...\n"; seguir = false; break;
         }
    }

    return 0;
}