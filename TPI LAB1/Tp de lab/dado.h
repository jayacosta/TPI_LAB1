#pragma once

#include <iostream>
#include <stdlib.h>

using namespace std;

void cargardado(int dado[4])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        dado[i] = (rand() % 6) + 1;
    }
}
void mostrardado(int dado[4]){
int i;
for (i=0; i<5; i++)
{
    switch(dado[i])
    {
    case 1:
        cout<<"+-------+"<<endl;
        cout<<"|       |"<<endl;
        cout<<"|   *   |"<<endl;
        cout<<"|       |"<<endl;
        cout<<"+-------+"<<endl;
        break;
    case 2:
        cout<<"+-------+"<<endl;
        cout<<"| *     |"<<endl;
        cout<<"|       |"<<endl;
        cout<<"|     * |"<<endl;
        cout<<"+-------+"<<endl;
        break;
    case 3:
        cout<<"+-------+"<<endl;
        cout<<"| *     |"<<endl;
        cout<<"|   *   |"<<endl;
        cout<<"|     * |"<<endl;
        cout<<"+-------+"<<endl;
        break;
    case 4:
        cout<<"+-------+"<<endl;
        cout<<"| *   * |"<<endl;
        cout<<"|       |"<<endl;
        cout<<"| *   * |"<<endl;
        cout<<"+-------+"<<endl;
        break;
    case 5:
        cout<<"+-------+"<<endl;
        cout<<"| *   * |"<<endl;
        cout<<"|   *   |"<<endl;
        cout<<"| *   * |"<<endl;
        cout<<"+-------+"<<endl;
        break;
    case 6:
        cout<<"+-------+"<<endl;
        cout<<"| *   * |"<<endl;
        cout<<"| *   * |"<<endl;
        cout<<"| *   * |"<<endl;
        cout<<"+-------+"<<endl;
        break;
    }
}
}
