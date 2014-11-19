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
    int m=1;
    char welp[3];
    
    //Limpiamos el cin
    cin.clear();
    cin.sync();
    cout<<"Nombre: ";
    getline(cin,Nombre);
    
    /* Inicializamos la semilla del random: */
    srand (time(NULL));
    
    //Comenzaremos entonces a definir el equipo
    do
    {
        /*Se generaran numeros random representando la ID por cada pokemon que se quiera guardar*/
        int idpoke = rand() % 150 + 1;
        
        //Definimos el puntero puchamon
        ifstream puchamon;
        
        //Abrimos el archivo lista_pokemon.txt
        puchamon.open("lista_pokemon.txt");
        for (int i=0;i<150;i++)
        {
            puchamon.getline(puchaid,3)
            if (puchamon==idpoke)
            {
                Numero=puchaid;
                puchamon.ignore(3,' ');
                puchamon.getline(Nombre,100,' ');
                puchamon.ignore(100,' ');
                puchamon.getline(tipo,50,' ');
                puchamon.ignore(50,' ');
                puchamon.getline(welp,3,' ');
                PS=atoi(welp);
                puchamon.ignore(50,' ');
                puchamon.getline(welp,3,' ');
                ATK=atoi(welp);
                puchamon.ignore(50,' ');
                puchamon.getline(welp,3,' ');
                DEF=atoi(welp);
                puchamon.ignore(50,' ');
                puchamon.getline(welp,3,' ');
                ESP=atoi(welp);
                puchamon.ignore(50,' ');
                puchamon.getline(welp,3,' ');
                VEL=atoi(welp);
            }
        }
    m++;
    }while(neq!=m);
    /* Braulio version:
    char buffer[128];
    Pokemon all[150];
    ifstream puchamon;
    srand (time(NULL));
    puchamon.open("lista_pokemon.txt");
    int i=0;
    if (puchamon.is_open()){
        while(!puchamon.eof()){
            int num=rand()%151+1;
            puchamon.getline(buffer,3);
            =int(buffer);
            puchamon.ignore(500,'\n');
            i++;
        }
    }*/
}

Entrenador::~Entrenador()
{
    //dtor
}

void Entrenador::setNombre(string A)
{
    nombre=A;
}

Pokemon Entrenador::setEquipo(int b){
    neq=b;
}
