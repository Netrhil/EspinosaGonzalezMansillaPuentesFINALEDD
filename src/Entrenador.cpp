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

Entrenador::SetNombre()
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
    arch="Equipo"+str(n)+".txt";
    usuario=open(arch,"w")
    print "\n Su equipo de ", n_poke_eq, " pokemons es:\n"
    i=0
    while i!=n_poke_eq:

        if n==2:
            num_p=random.randint(1, 151)
            archivo=open("lista_pokemon.txt", "r")
            for linea in archivo:
                dato=linea.split(" ")
                if int(dato[0])==num_p:
                    print "Pokemon",i+1, ": ",dato[1] ##Borar Linea al entregar
                    usuario.write(linea)
            archivo.close()
            i=i+1
}
