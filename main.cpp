#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include "Entrenador.h"
#include "Pokemon.h"

using namespace std;

int Validar()
{
    char str[256];
    fflush(stdin);
    fgets(str,256,stdin);
    if (isdigit(str[0]))
    {
        int i=atoi(str);
        return i;
    }
    cout<<"Ingrese digitos";
    Validar();
}

int ValidarEquipo()
{
    int e=Validar();
    if (e>0 and e<=6)
        return e;
    cout<<"Ingrese un numero entre el 1 y 6.";
    ValidarEquipo();
}

int main()
{
    int bat, vs;
    Pokemon EqU, EqO;
    string usuario1, oponente;
    cout<<"Ingrese cantidad de batallas a realizar: "<<endl;
    bat=Validar();
    cout<<"Cantidad de Pokemon por equipo: ";
    vs=ValidarEquipo();
    Entrenador Usuario, Oponente;
<<<<<<< HEAD
    cout<<"Ingrese nombre usuario: "<<endl;
    fflush(stdin);
    gets(usuario1);
    Usuario.setNombre(usuario1);
    cout<<"Ingrese nombre Oponente: "<<endl;
    fflush(stdin);
    gets(oponente);
    Oponente.setNombre(oponente);
=======
    cout<<"U   S   U   A   R   I   O "<<endl;
    Usuario.Entrenador();
    cout<<"Ingrese nombre Oponente: "<<endl;
    Oponente.Entrenador();
>>>>>>> origin/master
    return 0;
}
