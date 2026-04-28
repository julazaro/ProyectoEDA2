#include "Ciudad.h"

Ciudad::Ciudad(int p_id, std::string p_nombre, int p_x, int p_y){
    id = p_id;
    nombre = p_nombre;
    x = p_x;
    y = p_y;
}

int Ciudad::getId() {
    return id;
}

std::string Ciudad::getNombre(){
    return nombre;
}

int Ciudad::getX(){
    return x;
}

int Ciudad::getY(){
    return y;
}