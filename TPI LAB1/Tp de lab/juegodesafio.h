#ifndef JUEGODESAFIO_H_INCLUDED
#define JUEGODESAFIO_H_INCLUDED



#endif // JUEGODESAFIO_H_INCLUDED
using namespace std;

#include "menu.h"
#include "dado.h"
#include "combinaciones.h"
int juegodesafio(){
    int puntos_c
    int puntosronda;
    bool generala_s;
    bool turnode=true;
     int maxp=0;//Acumulador que me indica la puntuación maxima para ganar
    int dado[4];//Se inicializa el dado
    int seguir_t;//Variable para preguntar si quiere seguir tirando algun dado
    int dado_t;//Variable del dado que se tira
    int tiradas=0;//Las 3 veces que se pueden tirar los dados que se reinicia al final
    int cant_rondas;//Variable para cuando quieran ingresar la cantidad de rondas
    int op_rondas;//Opcion de cantidad de rondas, ya sea defaul o personalizada
    int maxrondas;//Le dice al programa la cantidad de rondas que va a realizar
    int rondas=1;//Contador de rondas
    int puntos=0, puntosj2=0;//Acumulador de puntos
    string nombre;//Nombre del jugador
    int juegode1;
    cout<<"Ingresa el nombre del jugador 1 para comenzar a jugar: "<<endl;
    cin>>nombrej1;
    cout<< "Ingresa el nombre del jugador 2 para comenzar a jugar: "<<endl;
    cin >>nombrej2;
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

    while(puntos<=60 || puntosj2<=60 || rondas==maxrondas)
    {
    puntosronda=0

        menuturno(nombrej1,nombrej2,turnode, rondas, puntos, puntosj2);
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
            combinaciones(dado,lanzamiento);
             if(generala_s==true){
           cout<< "Sacaste generala servida"<<endl;
           cout<<"Has ganado!"<<endl;
           if(turnode==true){
            puntos=60;
           }
           else{
            puntosj2=60;
           }
        }

            if(turnode==true){
            puntos = puntos_c;
            puntosronda = puntos_c;
            }
            else{
                puntosj2= puntos_c;
                puntosronda= puntos_c;
            }
             system("cls");
            if(turnode==true){
    turnode=false;
    cout <<"------------------------------------------------" << endl;
    cout << endl;
    cout << endl;
    cout << "puntaje obtenido en la ronda:" << puntosronda << "puntos" <<endl;
    cout << "Puntaje total de " << nombrej1 << ": " << puntos << "puntos" << endl;
    cout << endl;
    cout << endl;
    cout << "-----------------------------------------------" << endl;
system("pause");
cout << "Presione una tecla para continuar..." << endl;
    system("cls");
            }
            else{
    cout <<"------------------------------------------------" << endl;
    cout << endl;
    cout << endl;
    cout << "puntaje obtenido en la ronda:" << puntosronda << "puntos" <<endl;
    cout << "Puntaje total de " << nombrej2 << ": " << puntosj2 << "puntos" << endl;
    cout << endl;
    cout << endl;
    cout << "-----------------------------------------------" << endl;
system("pause");
cout << "Presione una tecla para continuar..." << endl;
    system("cls");
                turnode=true;
            }

    system("cls");
    rondas++;
    }
        }

if(puntos>=60){
   return nombrej1, puntos, rondas;}
   else{
        if(puntosj2>=60){
    return nombrej2, puntosj2,rondas;
    else{
        if(puntos>puntosj2){
            return nombrej1,puntos,rondas;
            else{
                return nombrej2,puntosj2,rondas;
    }
    }
   }
   }
   }
}
