int combinacionessueltas( int dado[4]){
    int n, t, y;
    int combinaciones[5];
    int puntos=0;
    bool primercomb=true;
    for(y=0; y<=5; y++)
    {
        combinaciones[y]=0;
    }
 for(t=0; t<=4; t++)
    {
        switch(dado[t])
        {
        case 1:
            combinaciones[0]=combinaciones[0]+1;
            break;
        case 2:
            combinaciones[1]=combinaciones[1]+2;
            break;
        case 3:
            combinaciones[2]=combinaciones[2]+3;
            break;
        case 4:
            combinaciones[3]=combinaciones[3]+4;
            break;
        case 5:
            combinaciones[4]=combinaciones[4]+5;
            break;
        case 6:
            combinaciones[5]=combinaciones[5]+6;
            break;
        }
    }
    for(n=0; n<=5; n++)
    {
       if(primercomb==true){
            primercomb= false;
            puntos=combinaciones[n];
        }
        else{
        if(combinaciones[n]>puntos)
        {
            puntos=combinaciones[n];
        }
        }

    }
    return puntos;
}

int escalera( int dado[4]){
int t;
int escaleracont=0;
bool escaleracomb=false;
int valorant;
bool primervalor=true;
 for(t=0; t<=4; t++){
     if(primervalor==true)
        {
            escaleracont++;
            primervalor=false;
            valorant=dado[t];
        }
        else
        {
            if(dado[t]>valorant)
            {
                escaleracont++;
                valorant= dado[t];
            }
        }


 }
 if(escaleracont==5)
    {
     escaleracomb=true;
    }

return escaleracomb;
}

int poker(int dado[4]){
    int i;
    bool pokercomb=false;
    int iguales=0;
    for (i=1;i<=4;i++){
    if(dado[0]==dado[i]){
        iguales++;
    }
        }
    if(iguales==3){
    pokercomb=true;
    }
return pokercomb;
}
///NO FUNCA
int full (int dado[4]){
int t,i,g;
bool primer=true;
int valorant =0;
bool fullcomb=false;
int iguales[2];
for(g=0; g<=2; g++)
{
iguales[g]=0;
}
for (i=1;i<=4;i++){
  if(dado[0]==dado[i]){
 iguales[0]++;
}
}
for(t=0;t<=4;t++){
if(primer== true){
    primer=false;
    valorant= dado[t];
}
else{
if(dado[t]!=valorant){
valorant=dado[t];
if((iguales[1]=0)){
iguales[1]=dado[t];
}
}
if(iguales[2]==0 && iguales[1]>0){
iguales[2]=dado[t];
}
else{
iguales[1]=0;
iguales[2]=0;
}
}
}
if(iguales[0]==3 && iguales [1]>0 && iguales[2]>0){
if(iguales[1]==iguales[2]){
fullcomb=true;
}
}

return fullcomb;
}


int generala (int dado[4]){
int i;
bool generalacomb=false;
int iguales=0;
for (i=1;i<=4;i++){
if(dado[0]==dado[i]){
iguales++;
}
}

if(iguales==4){
generalacomb=true;
}
return generalacomb;
}

int sumarpuntos (bool escaleracomb,bool pokercomb, bool fullcomb, bool generalacomb, int puntos){

if(escaleracomb==true){
    puntos=25;
}
if(fullcomb==true){
    puntos=30;
}
if(pokercomb==true){
    puntos=40;
}
if(generalacomb==true){
  puntos=50;
}
return puntos;
}
