#ifndef POKEMON_H
#define POKEMON_H

class Ataques
{
    public:

    private:
        char Nombre[30];
        char TipoP[30];
        char TipoA[30];
        char PoS[30];
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
        void setDMG(Pokemon,Pokemon,Ataques);
        void setNUM(int);
        void setNombre(char[30]);
        void setmov();
        void setTipo(Tipo);
        void setPS(int);
        void setATK(int);
        void setDEF(int);
        void setESP(int);
        void setVEL(int);
    protected:
    private:
        int Numero;
        Ataques mov[3];
        char Nombre[30];
        Tipo tipo;
        int PS;
        int ATK;
        int DEF;
        int ESP;
        int VEL;
        int DMG=0;
};

#endif // POKEMON_H
