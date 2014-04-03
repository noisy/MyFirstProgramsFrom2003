#include <iostream.h>
#include <iostream.h>
#pragma hdrstop
int potega(int podstawa, int wykladnik);
main()
{
int i, j, x, p, w[16], z[16];
const int a=10, b=11, c=12, d=13, e=14, f=15;
char q, t[17];
poczatek:
cout<<"Podaj w jakim systemie z przedzialu \[2;16\] bedzie zapisana liczba: ";
i=0;
do {cin>>p;
    if (i==4 && !(p>=2||p<=16)){cout<<"\nDla Twojego dobra sam wybralem liczbe systemowa. Bedzie nia liczba 16 (szesnascie). Ponadto mam nadzieje, ze tak naprawde jestes madry tylko, a dzisiaj masz po prostu zly dzien. \n"; p=16;}
    if (i!=4 &&(p<2||p>16)){cout<<"\nPodana liczba nie miesci sie w przedziale \[2;16\]. Podaj jeszcze raz w jakim systemie \[2;16\] bedzie zapisana liczba: ";}
    i++;
   }
while(p<2||p>16);

i=0;
do {w[i]=0;z[i]=0;i++;}
while (i!=16);
i=0;
cout<<endl<<"Podaj liczbe w systemie "<<p<<" wciskajac na koncu \"k\" i nacisnij enter: ";
do {cin>>t[i];
    if (t[i]=='1'){w[i]=1;}
    else {if (t[i]=='2'){w[i]=2;}
          else {if (t[i]=='3'){w[i]=3;}
                else {if (t[i]=='4'){w[i]=4;}
                      else {if (t[i]=='5'){w[i]=5;}
                            else {if (t[i]=='6'){w[i]=6;}
                                  else {if (t[i]=='7'){w[i]=7;}
                                        else {if (t[i]=='8'){w[i]=8;}
                                              else {if (t[i]=='9'){w[i]=9;}
                                                    else{if (t[i]=='a'){w[i]=10;}
                                                         else {if (t[i]=='b'){w[i]=11;}
                                                               else {if (t[i]=='c'){w[i]=12;}
                                                                     else {if (t[i]=='d'){w[i]=13;}
                                                                           else {if (t[i]=='e'){w[i]=14;}
                                                                                 else {if (t[i]=='f'){w[i]=15;}
                                                                                       else {if (t[i]=='0'){w[i]=0;}
                                                                                             else {if (t[i]=='k'){}
                                                                                                    else {cout<<endl<<"Ta liczba jest nielegalna dla systemu "<<p<<". Podaj jeszcze raz liczbe w systemie "<<p<<" wciskajac na koncu \"k\" i nacisnij enter: ";
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
    }
while (t[i-1]!='k');
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
cout<<"\nTej liczbie w systemie dziesietnym odpowiada liczba: "<<x<<".";
cout<<endl<<endl<<"Nacisnij enter aby wyjsc z programu.";
getchar();
getchar();

}
int potega(int podstawa, int wykladnik)
{int i;
int pot;
for((pot=1,i=0); i!=wykladnik; i++)
    {pot=pot*podstawa;
        }
 return pot;
}





