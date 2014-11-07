#ifndef POKEMON_H
#define POKEMON_H

class Ataques
{
    private:
    char Nombre[30];
    char TipoP[30];
    char TipoA[30];
    int PO;
}

class Pokemon
{
    public:
        Pokemon();
        virtual ~Pokemon();
    protected:
    private:
    int Numero;
    char Nombre[30];
    char Tipo[30];
    int PS;
    int ATK;
    int DEF;
    int ESP;
    int VEL;
};

#endif // POKEMON_H
