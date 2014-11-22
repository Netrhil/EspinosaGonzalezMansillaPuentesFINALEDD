#ifndef POKEMON_H
#define POKEMON_H
#include <string>
#include <vector>
using namespace std;

class Tipo{
    public:
        Tipo();
        virtual ~Tipo();
        string getNombre();
        vector<string> getDeb();
        vector<string> getRes();
        void setTipo();
    private:
        string NombreT;
        string deb[14];
        string res[14];
};

class Ataques
{
    public:
        Ataques();
        virtual ~Ataques();
        string getNombre();
        Tipo getTipo();
        string getPoS();
        int getPO();
    private:
        string Nombre;
        Tipo tipoA; //Tipo Ataque
        string PoS; //fisico o especial
        int PO; //Potencia
};


class Pokemon
{
    public:
        Pokemon();
        virtual ~Pokemon();
        Tipo getTipo();
        void setDMG(Pokemon,Ataques);
        void setNUM(int);
        void setNombre(string);
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
        string Nombre;
        Tipo tipoP;
        int PS;
        int ATK;
        int DEF;
        int ESP;
        int VEL;
        int DMG=0;
};

#endif // POKEMON_H
