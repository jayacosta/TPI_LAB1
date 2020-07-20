#pragma once

void mostrar_dado(int dado[5])
{
                        for (int i=0; i<=4; i++)
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
