#pragma once

#include <iostream>
#include <stdlib.h>
using namespace std;

#include "juego.h"

void menuturno (string nombrej1, string nombrej2,bool turnode, int ronda, int puntos, int puntosj2)
{
    if (turnode = true) {
    system("cls");
    cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Jugador: "<<nombrej1<<endl;
    cout<<"Ronda numero: "<<ronda<<endl;
    cout<<"Puntaje: "<<puntos<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
    }
    else{
    system("cls");
    cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Jugador: "<<nombrej2<<endl;
    cout<<"Ronda numero: "<<ronda<<endl;
    cout<<"Puntaje: "<<puntosj2<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
    }
}
