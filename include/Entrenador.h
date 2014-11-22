#ifndef POKEMON:ENTRENADOR_H
#define POKEMON:ENTRENADOR_H
#include <iostream>
#include "Pokemon.h"
#include <string>

using namespace std;
class Entrenador
{
    public:
        Entrenador();
        virtual ~Entrenador();
        Pokemon setEquipo(int);
        void setNombre(string);
        void setEntrenador();
    protected:
    private:
        Pokemon Equipo[5];
        string Nombre;
        int neq;
};

#endif // POKEMON:ENTRENADOR_H
