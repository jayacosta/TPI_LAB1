#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#include "juego.h"
#include "menu.h"
int main()
{
    srand(time(NULL));
    int op=0;
    int mayP=0;
    string mayPN;
    int turnosMP=0;
    bool seguir=true;

//Menu //
    while(seguir)
    {
        cout << " Proyecto GENERALA Giuliano DiPietro & Jairo Acosta " << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "1 - Jugar en solitario" << endl;
        cout << "2 - Modo Desafio" << endl;
        cout << "3 - Tabla de puntuaciones" << endl;
        cout << "4 - Salir" << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "- ";
        cin >> op;
        system("cls");
//Se verifica la opcion que se eligió//
        switch (op)
        {
        case 1:
            juegodeuno();
            system("pause");
            system("cls");
            break;
        case 2:
            cout << "2" << endl;
            system("pause");
            system("cls");
            break;
        case 3:
            cout<<"3"<<endl;
            system("pause");
            system("cls");
            break;
        case 4:
            cout << "Hasta luego!" << endl;
            seguir = false;
        default:
            cout << "Opcion no valida, por favor ingrese una opción existente" << endl;
            break;
        }
    }
    return 0;
}

