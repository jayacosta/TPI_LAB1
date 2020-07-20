#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
#include "testcombinaciones.h"
#include "mostrar_dado.h"



int main()
{
    srand(time(NULL));
    int op=0;
    bool seguir=true;
    int maxp;
    int maxr;
    string maxn;
    string ant_maxn;
    int ant_maxp;
    int ant_maxr;
    int primero=0;

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
        case 1://Modo de un jugador
        {
            primero=primero+1;
            bool primertiro=true;
            bool escaleracomb;
            bool pokercomb;
            bool fullcomb;
            bool generalacomb;
            int posicion;
            int tirar;
            int cant_dados;
            char t;
            int puntos;
            int puntosj=0;
            int ronda=1;
            int i;
            int dado[5];
            string nombrej;
            int cant_rondas=10;
            cout<<"Ingrese su nombre: ";
            cin>>nombrej;
            system("cls");
            while(cant_rondas>0)
            {
                tirar=3;
                system("cls");
                cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
                cout<<"Jugador: "<<nombrej<<endl;
                cout<<"Ronda numero: "<<ronda<<endl;
                cout<<"Puntaje: "<<puntosj<<endl;
                cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
                for (i = 0; i <= 4; i++)
                {
                    dado[i] = (rand() % 6) + 1;
                }
                while(tirar>0)
                {
                    tirar--;
                    mostrar_dado(dado);
                    cout<<"Desea seguir tirando?"<<endl;
                    cout<<"S - Si"<<endl;
                    cout<<"N - No"<<endl;
                    cout<<"- ";
                    cin>>t;
                    switch(t)
                    {
                    case 's':
                    {
                        primertiro=false;
                        cout<<"Cuantos dados?"<<endl;
                        cout<<"- ";
                        cin>>cant_dados;
                        while (cant_dados>0)
                        {
                            cant_dados--;
                            cout<<"¿En que posicion?: "<<endl;
                            cin>> posicion;
                            dado[posicion-1]=(rand()%6)+1;
                            system("cls");
                            cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
                            mostrar_dado(dado);
                        }

                    }
                    break;
                    case 'n':
                        tirar=0;
                        break;

                    }
                    puntos= combinacionessueltas(dado);
                    escaleracomb= escalera(dado);
                    fullcomb= full(dado);
                    pokercomb=poker(dado);
                    generalacomb=generala(dado);
                    puntos= sumarpuntos (escaleracomb, pokercomb, fullcomb, generalacomb,puntos);

                    if((puntos==50)&&(primertiro==true))
                    {
                        cout<<"Sacaste generala servida!"<<endl;
                        cout<<"G   A   N   A   S    T    E"<<endl;
                        cant_rondas=0;
                    }
                    cout<<"Su puntuacion fue de "<<puntos<<" puntos"<<endl;
                    cant_rondas--;
                    ronda++;
                    system("pause");
                    system("cls");
                    puntosj=puntosj+puntos;
                }
            }
            if(cant_rondas==0)
            {
                cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
                cout<<nombrej<<" tu partida ha terminado"<<endl;
                cout<<"Tu puntuacion fue de: "<<puntosj<<endl;
                cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
                system("pause");
            }
        }
        break;

        //Fin de juego de uno

        case 2://Modo de 2 Jugadores
        {
            primero=primero+1;
            bool primertiroj1=true;
            bool primertiroj2=true;
            bool escaleracomb;
            bool pokercomb;
            bool fullcomb;
            bool generalacomb;
            int turnode=1;
            int posicion;
            int tirar;
            int cant_dados;
            char  t;
            int puntos;
            int puntosj1=0;
            int puntosj2=0;
            int rondaj1=0;
            int rondaj2=0;
            int dado[5];
            string nombrej1;
            string nombrej2;
            int cant_rondasj1=10;
            int cant_rondasj2=10;
            cout<<"Ingrese el nombre del primer jugador: ";
            cin>>nombrej1;
            system("cls");
            cout<<"Ingrese el nombre del segundo jugador: ";
            cin>>nombrej2;
            system("cls");
            while(cant_rondasj1>0 && cant_rondasj2>0)
            {
                while(turnode!=0)
                {
                    tirar=3;
                    rondaj1++;
                    system("cls");
                    cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
                    cout<<"Jugador: "<<nombrej1<<endl;
                    cout<<"Ronda numero: "<<rondaj1<<endl;
                    cout<<"Puntaje: "<<puntosj1<<endl;
                    cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
                    for (int i = 0; i < 5; i++)
                    {
                        dado[i] = (rand() % 6) + 1;
                    }
                    while(tirar>0)
                    {
                        tirar--;
                        mostrar_dado(dado);
                        cout<<"Desea seguir tirando?"<<endl;
                        cout<<"S - Si"<<endl;
                        cout<<"N - No"<<endl;
                        cout<<"- ";
                        cin>>t;
                        switch(t)
                        {
                        case 's':
                        {
                            primertiroj1=false;
                            cout<<"Cuantos dados?"<<endl;
                            cout<<"- ";
                            cin>>cant_dados;
                            while (cant_dados>0)
                            {
                                cant_dados--;
                                cout<<"¿En que posicion?: "<<endl;
                                cin>> posicion;
                                dado[posicion-1]=(rand()%6)+1;
                            }
                        }
                        break;
                        case 'n':
                        {
                            tirar=0;
                            break;
                        }
                        }
                        system("cls");
                    }
                    cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
                    mostrar_dado(dado);
                    puntos= combinacionessueltas(dado);
                    escaleracomb= escalera(dado);
                    fullcomb= full(dado);
                    pokercomb=poker(dado);
                    generalacomb=generala(dado);
                    puntos= sumarpuntos (escaleracomb, pokercomb, fullcomb, generalacomb,puntos);

                    if((puntos==50)&&(primertiroj1==true))
                    {
                        cout<<nombrej1<<" Sacaste generala servida!"<<endl;
                        cout<<"G   A   N   A   S    T    E"<<endl;
                        cant_rondasj1=0;
                        cant_rondasj2=0;
                    }
                    else
                    {
                        cout<<"Su puntuacion fue de "<<puntos<<" puntos"<<endl;
                        cant_rondasj1--;
                        puntosj1=puntosj1+puntos;
                        turnode--;
                        system("pause");
                        system("cls");
                        cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
                        cout<<"Ronda N: "<<rondaj1<<endl;
                        cout<<"Proximo turno: "<<nombrej2<<endl;
                        cout<<"Puntos de "<<nombrej1<<": "<<puntosj1<<endl;
                        cout<<"Puntos de "<<nombrej2<<": "<<puntosj2<<endl;
                        cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
                        system("pause");
                        system("cls");
                    }
                }
                while (turnode!=1)
                {
                    tirar=3;
                    rondaj2++;
                    cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
                    cout<<"Jugador: "<<nombrej2<<endl;
                    cout<<"Ronda numero: "<<rondaj2<<endl;
                    cout<<"Puntaje: "<<puntosj2<<endl;
                    cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
                    for (int i = 0; i < 5; i++)
                    {
                        dado[i] = (rand() % 6) + 1;
                    }
                    while(tirar>0)
                    {
                        tirar--;
                        mostrar_dado(dado);
                        cout<<"Desea seguir tirando?"<<endl;
                        cout<<"S - Si"<<endl;
                        cout<<"N - No"<<endl;
                        cout<<"- ";
                        cin>>t;
                        switch(t)
                        {
                        case 's':
                        {
                            primertiroj2=false;
                            cout<<"Cuantos dados?"<<endl;
                            cout<<"- ";
                            cin>>cant_dados;
                            while (cant_dados>0)
                            {
                                cant_dados--;
                                cout<<"¿En que posicion?: "<<endl;
                                cin>> posicion;
                                dado[posicion-1]=(rand()%6)+1;
                                system("cls");
                            }
                        }
                        break;
                        case 'n':
                        {
                            tirar=0;
                            break;
                        }
                        }
                        system("cls");
                    }
                    cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
                    mostrar_dado(dado);
                    puntos= combinacionessueltas(dado);
                    escaleracomb= escalera(dado);
                    fullcomb= full(dado);
                    pokercomb=poker(dado);
                    generalacomb=generala(dado);
                    puntos= sumarpuntos (escaleracomb, pokercomb, fullcomb, generalacomb,puntos);

                    if((puntos==50)&&(primertiroj2==true))
                    {
                        cout<<nombrej1<<" Sacaste generala servida!"<<endl;
                        cout<<"G   A   N   A   S    T    E"<<endl;
                        cant_rondasj1=0;
                        cant_rondasj2=0;
                    }
                    else
                    {
                        cout<<"Su puntuacion fue de "<<puntos<<" puntos"<<endl;
                        cant_rondasj2--;
                        puntosj2=puntosj2+puntos;
                        turnode++;
                        system("pause");
                        system("cls");
                        cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
                        cout<<"Ronda N: "<<rondaj2<<endl;
                        cout<<"Proximo turno: "<<nombrej1<<endl;
                        cout<<"Puntos de "<<nombrej1<<": "<<puntosj1<<endl;
                        cout<<"Puntos de "<<nombrej2<<": "<<puntosj2<<endl;
                        cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
                        system("pause");
                        system("cls");
                    }
                }
            }
            //Guardar los puntajes
            if(puntosj1>puntosj2)
            {
                maxn=nombrej1;
                maxp=puntosj1;
                maxr=rondaj1;
                cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
                cout<<"Ganaste "<<nombrej1<<"!"<<endl;
                cout<<"Puntos: "<<puntosj1<<endl;
                cout<<"Rondas: "<<rondaj1<<endl;
                cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
                system("pause");
                system("cls");
            }
            if(puntosj2>puntosj1)
            {
                maxn=nombrej2;
                maxp=puntosj2;
                maxr=rondaj2;
                cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
                cout<<"Ganaste "<<nombrej2<<"!"<<endl;
                cout<<"Puntos: "<<puntosj2<<endl;
                cout<<"Rondas: "<<rondaj2<<endl;
                cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
                system("pause");
                system("cls");
            }
        }
        break;

        //Fin de juego de 2


        case 3://Tabla de puntuaciónes
        {
            switch(primero)
            {
            case 0:
            {
                cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
                cout<<"Aun no hay puntuaciones registradas"<<endl;
                cout<<"Pero vos podrias ser el primero!"<<endl;
                cout<<"Prueba tu suerte jugando solo o con un amigo"<<endl;
                cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
            }
            break;
            case 1:
            {
                ant_maxn=maxn;
                ant_maxp=maxp;
                ant_maxr=maxr;
                cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
                cout<<"Tabla de puntuacion"<<endl;
                cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
                cout<<"Nombre: "<<ant_maxn<<endl;
                cout<<"Puntos: "<<ant_maxp<<endl;
                cout<<"Rondas: "<<ant_maxr<<endl;
                cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
            }
            break;
            default:
            {
                if((maxr<ant_maxr)&&(maxp>ant_maxp))
                {
                    ant_maxn=maxn;
                    ant_maxp=maxp;
                    ant_maxr=maxr;
                    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
                    cout<<"Tabla de puntuacion"<<endl;
                    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
                    cout<<"Nombre: "<<ant_maxn<<endl;
                    cout<<"Puntos: "<<ant_maxp<<endl;
                    cout<<"Rondas: "<<ant_maxr<<endl;
                    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
                }
                else
                {
                    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
                    cout<<"Tabla de puntuacion"<<endl;
                    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
                    cout<<"Nombre: "<<ant_maxn<<endl;
                    cout<<"Puntos: "<<ant_maxp<<endl;
                    cout<<"Rondas: "<<ant_maxr<<endl;
                    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
                }
            }
            break;
            }

            system("pause");
            system("cls");
        }
        break;

        case 4://Salida
        {
            cout << "Hasta luego!" << endl;
            seguir = false;
        }
        break;
        default:
        {
            cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
            cout << "Opcion no valida, por favor ingrese una opcion existente" << endl;
            cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
        }
        break;
        }
    }
}


