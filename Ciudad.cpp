#include "Ciudad.h"
using std::string;

class Ciudad {
private:
    int id;
    string nombre;
    int x, y;

public:
    Ciudad(int p_id, string p_nombre, int p_x, int p_y);

    int getId();
    string getNombre();
    int getX();
    int getY();
};

Ciudad::Ciudad(int p_id, string p_nombre, int p_x, int p_y){
    id = p_id;
    nombre = p_nombre;
    x = p_x;
    y = p_y;
}

int Ciudad::getId() {
    return id;
}

string Ciudad::getNombre(){
    return nombre;
}

int Ciudad::getX(){
    return x;
}

int Ciudad::getY(){
    return y;
}