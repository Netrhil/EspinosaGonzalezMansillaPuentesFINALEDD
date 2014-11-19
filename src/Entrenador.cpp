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

Entrenador::SetNombre()
{
    
}

Pokemon Entrenador::setEquipo(){
    arch="Equipo"+str(n)+".txt";
    usuario=open(arch,"w")
    print "\n Su equipo de ", n_poke_eq, " pokemons es:\n"
    i=0
    while i!=n_poke_eq:
        if n==1:
            npoke=raw_input("Nombre Pokemon que quiere: ")
            archivo=open("lista_pokemon.txt", "r")
            a=False
            for linea in archivo:
                dato=linea.split(" ")
                if dato[1]==npoke:
                    print "Pokemon",i+1, ": ",dato[1],'\n'
                    usuario.write(linea)
                    a=True
            if a==False:
                print "Pokemon no valido, ingrese pokemon",i
                i=i-1
            i=i+1
            archivo.close()
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
