 #include <iostream.h>
#include <iostream.h>
#pragma hdrstop
int potega(int podstawa, int wykladnik);
int w[16], z[16];
char t[17];
main()
{
int i, j, x, p, k;
char q;
cout<<"Program napisal:\n Krzysztof Szumny (klasy I A)\n (14.01.2004r.)\n\n\n\n\n\n";
do {
cout<<"Podaj w jakim systemie z przedzialu \[2;34\] bedzie zapisana liczba: ";
i=0;
do {cin>>p;
    if (i==4 && (!(p>=2&&p<=34))){cout<<"\nDla Twojego dobra sam wybralem liczbe systemowa. Bedzie nia liczba 34. Ponadto mam nadzieje, ze tak naprawde nie jestes glupi a dzisiaj masz po prostu zly dzien :) \n"; p=34;}
    if (i!=4 &&(p<2||p>34)){cout<<"\nPodana liczba nie miesci sie w przedziale \[2;16\]. Podaj jeszcze raz w jakim systemie \[2;16\] bedzie zapisana liczba: ";}
    i++;
   }
while(p<2||p>34);
i=0;
k=1;
cout<<endl<<"Podaj liczbe w systemie "<<p<<" wciskajac na koncu kropke i nacisnij enter: ";
do {if (k==0){do {t[k]=0;k++;}
              while (k!=17);
             }
cin>>t[i];
    if (t[i]=='0'){w[i]=0;}
    else {if (t[i]=='1'){w[i]=1;}
          else {if (t[i]=='2'){w[i]=2;}
                else {if (t[i]=='3'){w[i]=3;}
                      else {if (t[i]=='4'){w[i]=4;}
                            else {if (t[i]=='5'){w[i]=5;}
                                  else {if (t[i]=='6'){w[i]=6;}
                                        else {if (t[i]=='7'){w[i]=7;}
                                              else {if (t[i]=='8'){w[i]=8;}
                                                    else{if (t[i]=='9'){w[i]=9;}
                                                         else {if (t[i]=='a'){w[i]=10;}
                                                               else {if (t[i]=='b'){w[i]=11;}
                                                                     else {if (t[i]=='c'){w[i]=12;}
                                                                           else {if (t[i]=='d'){w[i]=13;}
                                                                                 else {if (t[i]=='e'){w[i]=14;}
                                                                                       else {if (t[i]=='f'){w[i]=15;}
                                                                                             else {if (t[i]=='g'){w[i]=16;}
                                                                                                   else {if (t[i]=='h'){w[i]=17;}
                                                                                                         else {if (t[i]=='i'){w[i]=18;}
                                                                                                               else {if (t[i]=='j'){w[i]=19;}
                                                                                                                     else {if (t[i]=='k'){w[i]=20;}
                                                                                                                           else {if (t[i]=='l'){w[i]=21;}
                                                                                                                                 else {if (t[i]=='m'){w[i]=22;}
                                                                                                                                       else {if (t[i]=='n'){w[i]=23;}
                                                                                                                                             else {if (t[i]=='o'){w[i]=24;}
                                                                                                                                                   else {if (t[i]=='p'){w[i]=25;}
                                                                                                                                                         else {if (t[i]=='r'){w[i]=26;}
                                                                                                                                                               else {if (t[i]=='s'){w[i]=27;}
                                                                                                                                                                     else {if (t[i]=='t'){w[i]=28;}
                                                                                                                                                                           else {if (t[i]=='u'){w[i]=29;}
                                                                                                                                                                                 else {if (t[i]=='w'){w[i]=30;}
                                                                                                                                                                                       else {if (t[i]=='x'){w[i]=31;}
                                                                                                                                                                                             else {if (t[i]=='y'){w[i]=32;}
                                                                                                                                                                                                   else {if (t[i]=='z'){w[i]=33;}
                                                                                                                                                                                                        }
                                                                                                                                                                                                  }
                                                                                                                                                                                            }
                                                                                                                                                                                      }
                                                                                                                                                                                }
                                                                                                                                                                          }
                                                                                                                                                                    }
                                                                                                                                                              }
                                                                                                                                                        }
                                                                                                                                                  }
                                                                                                                                            }
                                                                                                                                      }
                                                                                                                                }
                                                                                                                          }
                                                                                                                    }
                                                                                                              }
                                                                                                        }
                                                                                                  }
                                                                                            }
                                                                                      }
                                                                                }
                                                                          }
                                                                    }
                                                              }
                                                        }
                                                   }
                                             }
                                       }
                                 }
                           }
                     }
               }
         }
     i++;
     if (t[0]=='.'){i=0;k=0;}
     if (t[i-1]!='.'&&(w[i-1]>=p||w[i-1]<0)) {cout<<endl<<"Liczba \""<<t[i-1]<<"\" jest nielegalna dla systemu "<<p<<". \nPodaj jeszcze raz liczbe w systemie "<<p<<" wciskajac na koncu kropke i nacisnij enter: ";k=0;t[i]=0;i=0;}
    }
while (t[i-1]!='.'|| i==0);
j=2;
{do {if(j==2)
       {z[j-2]=w[i-j];}
     else {z[j-2]=w[i-j]*potega(p,j-2);}
     j++;
    }
 while (j!=i+2);
}
j=0;
x=0;
do {x=x+z[j];j++;}
while (j!=i-1);
cout<<endl<<"Tej liczbie w systemie dziesietnym odpowiada liczba: "<<x<<"."<<endl;
do {cout<<"\nCzy chcesz wyjsc z programu? \[T\\N\]:";cin>>q;cout<<endl;}
while (!(q=='n'||q=='N'||q=='t'||q=='T'));
}
while (q=='n'||q=='n');
}
int potega(int podstawa, int wykladnik)
{int i;
int pot;
for((pot=1,i=0); i!=wykladnik; i++)
    {pot=pot*podstawa;
        }
 return pot;
}

