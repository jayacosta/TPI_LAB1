#pragma once

#include <iostream>
#include <stdlib.h>
using namespace std;

#include "juego.h"

void menuturno (string nombre, int ronda, int puntos)
{
    system("cls");
    cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Jugador: "<<nombre<<endl;
    cout<<"Ronda numero: "<<ronda<<endl;
    cout<<"Puntaje: "<<puntos<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
}
