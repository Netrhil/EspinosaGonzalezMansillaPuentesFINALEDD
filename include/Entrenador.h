#ifndef POKEMON:ENTRENADOR_H
#define POKEMON:ENTRENADOR_H
#include "Pokemon.h"


class Entrenador
{
    public:
        Entrenador();
        virtual ~Entrenador();
        Pokemon setEquipo();
    protected:
    private:
        Pokemon Equipo[5];
        char Nombre[30];

};

#endif // POKEMON:ENTRENADOR_H
