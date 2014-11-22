#include <iostream>
#include "Pokemon.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>

float Efectividad(Tipo Atac,Tipo Defen){
    float Ef;
    if ((Atac.getNombre()=='electrico') and (Defen.getNombre()=='tierra')){
        Ef=0;
    }
    else{
        if ((Atac.getNombre()=='normal') and (Defen.getNombre()=='fantasma')){
            Ef=0;
        }
        else{
            if ((Atac.getNombre()=='fantasma') and ((Defen.getNombre()=='normal')or (Defen.getNombre()=='lucha'))){
                Ef=0;
            }
            else{
                for (int i=0;i<14;i++){
                    for (int j=0;j<14;j++){
                        if (tipo.deb[j]==tipoP.deb[i]){
                            Ef=2;
                        }
                        if (tipo.res[j]==tipoP.res[i]){
                            Ef=0.5;
                        }
                    }
                }
            }
        }
    }
}
