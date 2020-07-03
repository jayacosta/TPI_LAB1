#pragma once

#include <iostream>
#include <stdlib.h>

using namespace std;

#include "menu.h"
#include "dado.h"
#include "combinaciones.h"


void juegodeuno()
{
    int maxp=0;
    int dado[4];
    int seguir_t;
    int dado_t;
    int tiradas=0;
    int cant_rondas;
    int op_rondas;
    int maxrondas;
    int rondas=1;
    int puntos=0;
    string nombre;
    cout<<"Ingresa tu nombre para comenzar a jugar: "<<endl;
    cin>>nombre;
    system("cls");
    cout<<"¿Que cantidad de rondas desea jugar?"<<endl;
    cout<<"1 - Cantidad estandar 10 rondas"<<endl;
    cout<<"2 - Cantidad de rondas personalizadas"<<endl;
    cout<<"- ";
    cin>>op_rondas;
    if (op_rondas==1)
    {
        maxrondas==10;
    }
    else
    {
        cout<<"¿Cuantas rondas desea jugar?"<<endl;
        cout<<"- ";
        cin>>cant_rondas;
        maxrondas==cant_rondas;
    }

    while(maxp<=60 || rondas==maxrondas)
    {
        menuturno(nombre, rondas, puntos);
        cargardado(dado);
        while (tiradas<3)
        {
            mostrardado(dado);
            cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
            cout<<"¿Desea seguir tirando?"<<endl;
            cout<<"1 - Si"<<endl;
            cout<<"2 - No"<<endl;
            cout<<"- ";
            cin>>seguir_t;
            if (seguir_t==1)
            {
                cout<<"¿Que dado quiere volver a tirar?"<<endl;
                cout<<"- "<<endl;
                cin>>dado_t;
                switch (dado_t)
                {

                case 1:
                    dado[0] = (rand() % 6) + 1;
                    tiradas++;
                    break;
                case 2:
                    dado[1] = (rand() % 6) + 1;
                    tiradas++;
                    break;
                case 3:
                    dado[2] = (rand() % 6) + 1;
                    tiradas++;
                    break;
                case 4:
                    dado[3] = (rand() % 6) + 1;
                    tiradas++;
                    break;
                case 5:
                    dado[4] = (rand() % 6) + 1;
                    tiradas++;
                    break;
                default:
                    cout<<"Debe elegir un numero valido (1-5)"<<endl;
                }
            }
            else
            {
                tiradas=3;
            }
            rondas++
        }
    }
}
