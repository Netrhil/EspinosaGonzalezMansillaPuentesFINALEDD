#ifndef POKEMON:ENTRENADOR_H
#define POKEMON:ENTRENADOR_H
#include "Pokemon.h"
#include <string>


class Entrenador
{
    public:
        Entrenador();
        virtual ~Entrenador();
        Pokemon setEquipo();
    protected:
    private:
        Pokemon Equipo[5];
        string Nombre;

};

#endif // POKEMON:ENTRENADOR_H
