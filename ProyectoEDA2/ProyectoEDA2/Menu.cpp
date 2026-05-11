// menu.cpp
#include "menu.hpp"     // Necesario para que el compilador vea la declaración
#include <limits>
#include <ios>
#include <iostream>

int mostrarMenu()
{
    int opcion = 0;
    while (true) {
        std::cout << "\n--- MENU ---\n";
        std::cout << "1. Iniciar viaje\n";
        std::cout << "2. Indicar ruta interrumpida\n";
        std::cout << "3. Mostrar matriz\n";
        std::cout << "4. Salir\n";
        std::cout << "Elija una opcion: ";

        if (std::cin >> opcion) {
            if (opcion >= 1 && opcion <= 4) break;   // opción válida
        }

        std::cout << "\n*** Entrada no válida. Elija un número del 1 al 4. ***\n";
        std::cin.clear();   // elimina el estado de error
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Limpiar el salto de línea que quedó en el buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return opcion;
}
