#ifndef POKEMON_H
#define POKEMON_H

class Ataques
{
    private:
    char Nombre[30];
    char TipoP[30];
    char TipoA[30];
    int PO;
};
class Tipo{
    private:
        int deb[15];
        int res[15];
};

class Pokemon
{
    public:
        Pokemon();
        virtual ~Pokemon();
        Ataques setmov();
        void setDMG();
    protected:
    private:
        int Numero;
        Ataques mov[3];
        char Nombre[30];
        char Tipo[30];
        int PS;
        int ATK;
        int DEF;
        int ESP;
        int VEL;
        int DMG=0;
};

#endif // POKEMON_H
