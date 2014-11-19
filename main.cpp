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

    Entrenador Usuario, Oponente;
    int bat, vs;
    Pokemon EqU[5], EqO[5];
    string usuario1, oponente;
    cout<<"Ingrese cantidad de batallas a realizar: "<<endl;
    bat=Validar();
    cout<<"Cantidad de Pokemon por equipo: ";
    vs=ValidarEquipo(); //
    cout<<"Ingrese nombre usuario: "<<endl;
    cin>>usuario1;
    Usuario.setEquipo(vs);
    Usuario.Entrenador();
    cout<<"Ingrese nombre Oponente: "<<endl;
    cin>>oponente;
    Oponente.setEquipo(vs);
    Oponente.Entrenador();
    return 0;
}
