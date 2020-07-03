#ifndef TABLADEPUNTUACIONES_H_INCLUDED
#define TABLADEPUNTUACIONES_H_INCLUDED



#endif // TABLADEPUNTUACIONES_H_INCLUDED
#include "menu.h"
#include "dado.h"
#include "combinaciones.h"
using namespace std;
void tablapuntos(string nombrej1, string nombrej2, int puntos, int puntosj2, int rondas){
    bool primerp=true;
    int puntosmax=0;
    int minronda=0;
    string nombregan;

    if(primerp== true){
    if(puntos>0){
        puntosmax=puntos;
        minronda=rondas;
        nombregan=nombrej1;
    }
    else{
        if(puntosj2>0){
           puntosmax=puntosj2;
           minronda=rondas;
           nombregan=nombrej2;
        }
    }
    }
    else{
       if(puntosj1>puntosmax){
        puntosmax=puntosj1;
        minronda=rondas;
        nombregan=nombrej1;
       }
       else{
        if(puntosj2>puntosmax){
            puntosmax= puntosj2;
            minronda=rondas;
            nombregan=nombrej2;
        }
       }
    }
cout<< "El jugador con mas puntuacion fue " << nombregan << "con" << puntosmax << "puntos, en un total de " << minronda << "rondas." << endl;

}



