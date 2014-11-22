#include <iostream>
#include "Pokemon.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
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
    char buffer[128];
    Ataques A[3];
    ifstream moves;
    moves.open("lista ataques.txt");
    srand(time(NULL));
    if (moves.is_open()){
        for (int i=0;i<3;i++){

        }
    }
    else{
        cout<<"Error al abrir el archivo"<<endl;
    }
}

void Pokemon::setDMG(Pokemon P, Ataques A)
{
    float aux=2; //El 2 base de la formula
    string PoS,Nombre;
    Tipo tipo;
    int Potencia;
    float Efectividad;
    PoS=A.getPoS();
    tipo=A.getTipo();
    Nombre=A.getNombre();
    Potencia=A.getPO();
    if (PoS=="Fisico"){ //para saber si tomar el ataque fisico o el especial
        aux+=(P.ATK*Potencia*(11))/25*DEF; //fisico
    }
    else{
        aux+=(P.ESP*Potencia*(11))/25*ESP; //especial
    }
    if (P.tipoP==tipoP){
        aux*=1.5; //Si el pokemon es del mismo tipo que el ataque
    }
    srand (time(NULL));
    aux=aux*Efectividad*(rand()%100+85)*0.01; //Los otros multiplicadores afuera del parentesis
    DMG+=aux;
}

void Pokemon::setNUM(int A)
{
    Numero=A;
}

void Pokemon::setNombre(string A)
{
    Nombre=A;
}

void Pokemon::setTipo(Tipo A)
{
    tipoP=A;
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

string Ataques::getNombre()
{
    return Nombre;
}

Tipo Ataques::getTipo()
{
    return tipoA;
}

string Ataques::getPoS()
{
    return PoS;
}

int Ataques::getPO()
{
    return PO;
}

Ataques::Ataques()
{
    //ctor
}

Ataques::~Ataques()
{
    //dtor
}

Tipo Pokemon::getTipo()
{
    return tipoP;
}

Tipo::Tipo()
{

}

Tipo::~Tipo()
{

}

string Tipo::getNombre()
{
    return NombreT;
}

string[14] Tipo::getDeb()
{
    string aux[14];
    for (int i=0;i<14;i++){
        aux[i]=deb[i];
    }
    return aux;
}

string[14] Tipo::getRes()
{
    string aux[14];
    for (int i=0;i<14;i++){
        aux[i]=res[i];
    }
    return aux;
}

void Tipo::setTipo()
{

}

