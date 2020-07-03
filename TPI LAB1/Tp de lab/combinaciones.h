#pragma once

#include <iostream>
#include <stdlib.h>

using namespace std;

int combinaciones(int dado[4], int tiradas)
{
    int i;
int u;
    int k;
    int iguales[3];
    int p;
    int juegodeunoo;
    int juegodedos;
    int juegodetres;
    int juegodecuatro;
    int juegodecinco;
    int juegodeseis;
    int comb[10];
    int valorant=0;
    bool primervalor=true;
    int escalera=0;
    int puntos_c=0;
    int may_p=0;
    bool generala_s=false;
    for (i=0; i<=4; i++){
        if (dado[i]==1)
        {
            juegodeunoo++;
            if(juegodeunoo>1&&juegodeunoo<5)
            {
                comb[0]=1;
            }

        }
    if(dado[i]==2)
    {
        juegodedos++;
        if(juegodedos >1&&juegodedos<5){
            comb[1]=1;
        }
    }
    if(dado[i]==3)
    {
        juegodetres++;
        if(juegodetres >1&&juegodetres<5)
        {
            comb[2]=1;
        }
    }
    if(dado[i]==4)
    {
        juegodecuatro++;
        if(juegodecuatro >1&&juegodecuatro<5){
        comb[3]=1;
        }
    }
    if(dado[i]==5)
    {
        juegodecinco++;
        if(juegodecinco >1&&juegodecinco<5){
        comb[4]=1;
        }
    }
    if(dado[i]==6)
    {
        juegodeseis++;
        if(juegodeseis > 1&&juegodeseis<5){
        comb[5]=1;
        }
    }
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
        if(iguales[0] == 4)
        {
            comb[8]=1;

        }

    if(iguales[0] == 5)
    {
        if(comb [9]==1 && tiradas == 1)
        {
            comb[10]=1;
            generala_s=true;
        }
    }
    else
    {
        comb[9]=1;
    }
    }

    if(comb[0]==1)
    {
        puntos_c=juegodeunoo;
        may_p=puntos_c;
    }
    if(comb[1]==1){
        if(juegodedos *2>may_p)
        {
            puntos_c=juegodedos*2;
            may_p=puntos_c;
        }
    }
    if(comb[2]==1){
        if(juegodedos *3>may_p){
            puntos_c=juegodetres*3;
            may_p=puntos_c;
        }
    }
        if(comb[3]==1){
            if(juegodecuatro *4>may_p){
                puntos_c=juegodecuatro*4;
                may_p=puntos_c;
            }
        }
        if(comb[4]==1){
            if(juegodecinco *5>may_p){
                puntos_c=juegodecinco*5;
                may_p=puntos_c;
            }
        }
        if(comb[5]==1){
            if(juegodeseis *6>may_p){
                puntos_c=juegodeseis*6;
                may_p=puntos_c;
            }
        }
        if(comb[6]==1){
            if(25>may_p){
                puntos_c=25;
                may_p=puntos_c;
            }
        }
                if(comb[7]==1){
                    if(30>may_p){
                        puntos_c=30;
                        may_p=puntos_c;
                    }
                }
                if(comb[8]==1){
                puntos_c=40;
                may_p=puntos_c;
                }
                if(comb[9]==1){
                    puntos_c=50;
                }
                if(comb[10]==1){
                generala_s=true;
                }
                return puntos_c, generala_s;
        }
