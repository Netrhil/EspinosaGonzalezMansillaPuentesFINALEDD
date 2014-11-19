#include "Entrenador.h"
#include "Pokemon.h"
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

Entrenador::Entrenador()
{
    //ctor
}

Entrenador::~Entrenador()
{
    //dtor
}

Pokemon Entrenador::setEquipo(){
    char buffer[128];
    char *buf;
    Pokemon all[151];
    ifstream puchamon;
    puchamon.open("lista_pokemon.txt");
    if (puchamon.is_open()){
        while(!puchamon.eof()){
            puchamon.getline(buffer,128);
            buf=strtok(buffer," ");
            buf=strtok(NULL," ");
        }
    }
}
