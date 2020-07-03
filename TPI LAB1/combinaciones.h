#pragma once

#include <iostream>
#include <stdlib.h>

using namespace std;

int combinaciones(dado){
    valorant=0;
    primervalor=true;
    escalera=0;
    for(p=0;p<=2;p++){
     iguales[p]=0;
    }

for(i=0;i<=4;i++){
for(u=0;u<=4;u++){
if(primervalor==true){
valorant=dado[i];
primervalor=false;
}
else{
if(dado[i]==dado[u]){
iguales[0]++;
}
if(dado[i]!=valorant){
 if(iguales[1]== 0){
    iguales[1]= dado[i];
 }
 else{
    if(iguales[2]){
        iguales[2]=dado[i];
    }
    else{
        iguales[1]=0;
        iguales[2]=0;
    }
 }
}
if(dado[k]>valorant){
escalera++;
}
else{
escalera = 0;
}
valorant=dado[u];
}
}
}
if(escalera == 5){
    combinacion= 1;
    return combinacion;
}
if(iguales[1]>0 && iguales[2]>0){
    if(iguales[1]==iguales[2] && iguales[0] == 3){
        combinacion =2;
       return combinacion;
    }
}
if()
  if(iguales == 4){
    combinacion =3;
    return combinacion;
  }

  if(iguales == 5){
  if(combinaciones == 4 && lanzamiento == 1){
    cout << "Generala servida!" << endl;
    cout << "Felicitaciones el jugador" << nombrej1 << "gano la partida!" << endl;
    cout << "------------------------------------------------------" << endl;
    combinacion=5;
    return combinacion;
}
}
else{
combinacion= 4;
return combinacion;
}
}
