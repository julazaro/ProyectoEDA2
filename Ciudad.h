#ifndef CIUDAD_H
#define CIUDAD_H
#include <string>

class Ciudad {
    private:
        int id;
        std::string nombre;
        int x;
        int y;

    public:
        Ciudad(int p_id, std::string p_nombre, int p_x, int p_y);
        int getId();
        std::string getNombre();
        int getX();
        int getY();
};

#endif