#pragma once

#include <iostream>
#include <stdlib.h>

using namespace std;

int comb_test(int dado)
{
    int i;
    int p;
    int juegode1;
    int juegode2;
    int juegode3;
    int juegode4;
    int juegode5;
    int juegode6;
    int comb[9];
    int valorant=0;
    int primervalor=true;
    int escalera=0;
    for (i=0; i<=4; i++)
        if (dado[i]==1)
        {
            juegode1++;
            comb[0]==1;
        }
    if(dado[i]==2)
    {
        juegode2++;
        if(juegode2)
        comb[1]==1;
    }
    if(dado[i]==3)
    {
        juegode3++;
        if(juegode3>1){
        comb[2]==1
        }
    }
    if(dado[i]==4)
    {
        juegode4++;
        comb[3]==1;
    }
    if(dado[i]==5)
    {
        juegode5++;
        comb[4]==1;
    }
    if(dado[i]==6)
    {
        juegode6++;
        comb[5]==1;
    }
    int i;
    for(p=0; p<=2; p++)
    {
        iguales[p]=0;
    }

    for(i=0; i<=4; i++)
    {
        for(u=0; u<=4; u++)
        {
            if(primervalor==true)
            {
                valorant=dado[i];
                primervalor=false;
            }
            else
            {
                if(dado[i]==dado[u])
                {
                    iguales[0]++;
                }
                if(dado[i]!=valorant)
                {
                    if(iguales[1]== 0)
                    {
                        iguales[1]= dado[i];
                    }
                    else
                    {
                        if(iguales[2])
                        {
                            iguales[2]=dado[i];
                        }
                        else
                        {
                            iguales[1]=0;
                            iguales[2]=0;
                        }
                    }
                }
                if(dado[k]>valorant)
                {
                    escalera++;
                }
                else
                {
                    escalera = 0;
                }
                valorant=dado[u];
            }
        }
    }
    if(escalera == 5)
    {
        comb[6]=1;
    }
    if(iguales[1]>0 && iguales[2]>0)
    {
        if(iguales[1]==iguales[2] && iguales[0] == 3)
        {
            comb[7]=1;
        }
    }
    if()
        if(iguales == 4)
        {
            comb[8]=1;

        }

    if(iguales == 5)
    {
        if(combes == 4 && lanzamiento == 1)
        {
            cout << "Generala servida!" << endl;
            cout << "Felicitaciones el jugador" << nombrej1 << "gano la partida!" << endl;
            cout << "------------------------------------------------------" << endl;
            comb[9]=1;
        }
    }
    else
    {
        comb[8]=1;
    }
    for (i=0;i<10;i++){

    }
}
