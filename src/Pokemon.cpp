#include "Pokemon.h"
#include <fstream.h>

Pokemon::Pokemon()
{
    //ctor
}

Pokemon::~Pokemon()
{
    //dtor
}

Ataques Pokemon::setmov(){


}

void Pokemon::setDMG()
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
