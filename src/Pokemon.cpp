#include "Pokemon.h"
#include <fstream>

Pokemon::Pokemon()
{
    //ctor
}

Pokemon::~Pokemon()
{
    //dtor
}

void Pokemon::setmov(){


}

void Pokemon::setDMG(Pokemon At,Pokemon P, Ataques A)
{
    float aux=2; //El 2 base de la formula
    if (A.PoS=='Fisico'){ //para saber si tomar el ataque fisico o el especial
        aux+=(P.ATK*A.PO*(11))/25*Df.DEF; //fisico
    }
    else{
        aux+=(P.ESP*A.PO*(11))/25*Df.ESP; //especial
    }
    if (P.Tipo==A.TipoA){
        aux*=1.5; //Si el pokemon es del mismo tipo que el ataque
    }
    srand (time(NULL));
    aux=aux*Efectivo*(rand()%100+85)*0.01; //Los otros multiplicadores afuera del parentesis
    DMG+=aux;
}

void Pokemon::setNUM(int A)
{
    Numero=A;
}

void Pokemon::setNombre(char[30] A)
{
    strcpy(Nombre,A);
}

void Pokemon::setAtaques(Ataques[3] A)
{
    for (int i=0;i<4;i++){
        mov[i]=A[i];
    }
}

void Pokemon::setTipo(Tipo A)
{
    tipo=A;
}

void Pokemon::setPS(int A)
{
    PS=A;
}

void Pokemon::setATK(int A)
{
    ATK=A;
}

void Pokemon::setDEF(int A)
{
    DEF=A;
}

void Pokemon::setESP(int A)
{
    ESP=A;
}

void Pokemon::setVEL(int A)
{
    VEL=A;
}
