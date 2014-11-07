#ifndef POKEMON:ENTRENADOR_H
#define POKEMON:ENTRENADOR_H

namespace Pokemon {

class Entrenador
{
    public:
        Entrenador();
        virtual ~Entrenador();
    protected:
    private:
    Pokemon Equipo[5];
    char Nombre[30];

};

} // namespace Pokemon

#endif // POKEMON:ENTRENADOR_H
