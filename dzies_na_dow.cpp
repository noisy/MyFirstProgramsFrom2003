#include <iostream.h>
int t[16];
char w[16],q;
int potega(int podstawa, int wykladnik);
main()
{
cout<<"Program napisal:\n Krzysztof Szumny (klasy I A)\n (18.01.2004r.)\n\n\n\n\n\n";
do {
int p, x, i=0,k,j=0, liczba;
cout<<"Podaj liczbe w systemie dziesietnym : ";
cin>>liczba;
cout<<"Podaj na jaki system zamienic te liczbe : ";
cin>>p;
do {
    t[i]=liczba%p;
    liczba/=p;
    i++;j++;
   }
while (liczba!=0);
k=1;
do {if (t[i-k]==0){w[k-1]='0';}
    else {if (t[i-k]==1){w[k-1]='1';}
          else {if (t[i-k]==2){w[k-1]='2';}
                else {if (t[i-k]==3){w[k-1]='3';}
                      else {if (t[i-k]==4){w[k-1]='4';}
                            else {if (t[i-k]==5){w[k-1]='5';}
                                  else {if (t[i-k]==6){w[k-1]='6';}
                                        else {if (t[i-k]==7){w[k-1]='7';}
                                              else {if (t[i-k]==8){w[k-1]='8';}
                                                    else {if (t[i-k]==9){w[k-1]='9';}
                                                          else {if (t[i-k]==10){w[k-1]='a';}
                                                                else {if (t[i-k]==11){w[k-1]='b';}
                                                                      else {if (t[i-k]==12){w[k-1]='c';}
                                                                            else {if (t[i-k]==13){w[k-1]='d';}
                                                                                  else {if (t[i-k]==14){w[k-1]='e';}
                                                                                        else {if (t[i-k]==15){w[k-1]='f';}
                                                                                              else {if (t[i-k]==16){w[k-1]='g';}
                                                                                                    else {if (t[i-k]==17){w[k-1]='h';}
                                                                                                          else{if (t[i-k]==18){w[k-1]='i';}
                                                                                                               else{if (t[i-k]==19){w[k-1]='j';}
                                                                                                                    else{if (t[i-k]==20){w[k-1]='k';}
                                                                                                                         else{if (t[i-k]==21){w[k-1]='l';}
                                                                                                                              else{if (t[i-k]==22){w[k-1]='m';}
                                                                                                                                   else{if (t[i-k]==23){w[k-1]='n';}
                                                                                                                                        else{if (t[i-k]==24){w[k-1]='o';}
                                                                                                                                             else{if (t[i-k]==25){w[k-1]='p';}
                                                                                                                                                  else{if (t[i-k]==26){w[k-1]='r';}
                                                                                                                                                       else{if (t[i-k]==27){w[k-1]='s';}
                                                                                                                                                            else{if (t[i-k]==28){w[k-1]='t';}
                                                                                                                                                                 else{if (t[i-k]==29){w[k-1]='u';}
                                                                                                                                                                      else{if (t[i-k]==30){w[k-1]='w';}
                                                                                                                                                                           else{if (t[i-k]==31){w[k-1]='x';}
                                                                                                                                                                                else{if (t[i-k]==32){w[k-1]='y';}
                                                                                                                                                                                     else{if (t[i-k]==33){w[k-1]='z';}
                                                                                                                                                                                          else{if (t[i-k]==34){w[k-1]=' ';}
                                                                                                                                                                                               else{if (t[i-k]<34||t[i-k]<0){w[k-1]='.';}
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
               }
         }

w[k]=t[i-k];k++;
}
while ((i-k)!=-1);
cout<<"Ta liczba w systemie "<<p<<" to : ";
i=0;
do {cout<<w[i];i++;}
while (i+1!=k);

do {cout<<"\nCzy chcesz wyjsc z programu? \[T\\N\]:";cin>>q;cout<<endl;}
while (!(q=='n'||q=='N'||q=='t'||q=='T'));
}
while (q=='n'||q=='n');




}
/*******************************************************************/
int potega(int podstawa, int wykladnik)
{int i;
int pot;
for((pot=1,i=0); i!=wykladnik; i++)
    {pot=pot*podstawa;
        }
 return pot;
}
/*******************************************************************/
