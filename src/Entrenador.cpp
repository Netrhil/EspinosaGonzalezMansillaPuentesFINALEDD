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
    int m;
    cin.clear();
    cin.sync();
    cout<<"Nombre: ";
    getline(cin,Nombre);
    int neq,idpoke;
    /* Inicializamos la semilla del random: */
    srand (time(NULL));

    /* Generamos un numero entre 1 y 6 representando la cantidad de pokemones por equipo: */
    neq = rand() % 6 + 1;
  
    /*Se generaran numeros random representando la ID por cada pokemon que se quiera guardar*/
    do
    {
        idpoke = rand() % 150 + 1;
        //Abrimos el archivo lista_pokemon.txt
        ifstream puchamon;
        puchamon.open("lista_pokemon.txt");
        puchamon>>m;
        //Definimos m como largo de puchamon
        for (int i=0;i<m;i++)
        {
            if (puchamon==idpoke)
            {
                puchamon>>
            }
        }
    
    }while()
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
