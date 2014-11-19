#include "Entrenador.h"
#include "Pokemon.h"
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

Entrenador::Entrenador()
{
    cin.clear();
    cin.sync();
    cout<<"Nombre: ";
    getline(cin,Nombre);
}

Entrenador::~Entrenador()
{
    //dtor
}

void Entrenador::setNombre(string A)
{

}

Pokemon Entrenador::setEquipo(){
    char buffer[128];
    char *buf;
    Pokemon all[150];
    ifstream puchamon;
    srand (time(NULL));
    puchamon.open("lista_pokemon.txt");
    int i=0;
    if (puchamon.is_open()){
        while(!puchamon.eof()){
            int num=rand()%151+1;
            puchamon.getline(buffer,3);
            puchamon.ignore(500,'\n');
            i++;
        }
    }
}
