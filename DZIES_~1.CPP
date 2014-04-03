#include <conio.h>
#include <string.h>
#include <iostream.h>
#pragma hdrstop
int potega(int podstawa, int wykladnik);
int nwd(int a, int b);
char dzies[30], lc[10], lu[10], lo[10],q;
int i,j,k,s, llc[10],llu[10],llo[10],dlc,dlu,dlo,ulamek,okres,mianownik,licznik,pmianownik,plicznik,skracanie,p;
main()
{
clrscr();
cout<<"Program napisaˆ:\n Krzysztof Szumny (klasy I A)\n (31.01.2004r.)\n\n\n\n";
cout<<"Program ten zamienia uˆamki dziesi©tnetne na uˆamki zwykˆe."<<endl;
do{
cout<<"Podaj uˆamek dziesi©tny zapisuj¥c ewentualny okres w nawiasie:\t";
do{
if(s){cout<<"To nie jest liczba. Podaj uˆamek dziesi©tny:\t";}
s=0;i=0;strset(dzies,'\0'),strset(lu,'\0'),strset(lc,'\0'),strset(lo,'\0'),ulamek=0,okres=0,mianownik=0,licznik=0,skracanie=1;
cin>>dzies;

while ((dzies[i]!=','&&dzies[i]!='.'&&dzies[i]!='\0')&&(dzies[i]=='0'||dzies[i]=='1'||dzies[i]=='2'||dzies[i]=='3'||dzies[i]=='4'||dzies[i]=='5'||dzies[i]=='6'||dzies[i]=='7'||dzies[i]=='8'||dzies[i]=='9'))
{
lc[i]=dzies[i];
i++;
}
if (dzies[i]!='.'&&dzies[i]!=','&&dzies[i]!='\0')
{s=1;}
j=i;
i++;
while ((dzies[i]!='('&&dzies[i]!='\0')&&(dzies[i]=='0'||dzies[i]=='1'||dzies[i]=='2'||dzies[i]=='3'||dzies[i]=='4'||dzies[i]=='5'||dzies[i]=='6'||dzies[i]=='7'||dzies[i]=='8'||dzies[i]=='9'))
{
lu[i-j-1]=dzies[i];
i++;
}
if (dzies[i]!='('&&dzies[i]!='\0')
{s=1;}
k=i;
i++;
while ((dzies[i]!=')'&&dzies[i]!='\0')&&(dzies[i]=='0'||dzies[i]=='1'||dzies[i]=='2'||dzies[i]=='3'||dzies[i]=='4'||dzies[i]=='5'||dzies[i]=='6'||dzies[i]=='7'||dzies[i]=='8'||dzies[i]=='9'))
{
lo[i-k-1]=dzies[i];
i++;
}
if (dzies[i]!=')'&&dzies[i]!='\0')
{s=1;}
}
while(s);

if(s)
{cout<<"To nie jest liczba.";}
i=0;
dlu=strlen(lu);
while(i!=dlu)
{
if (lu[i]=='0'){llu[i]=0;}
else{if (lu[i]=='1'){llu[i]=1;}
     else{if (lu[i]=='2'){llu[i]=2;}
          else{if (lu[i]=='3'){llu[i]=3;}
               else{if (lu[i]=='4'){llu[i]=4;}
                    else{if (lu[i]=='5'){llu[i]=5;}
                         else{if (lu[i]=='6'){llu[i]=6;}
                              else{if (lu[i]=='7'){llu[i]=7;}
                                   else{if (lu[i]=='8'){llu[i]=8;}
                                        else{if (lu[i]=='9'){llu[i]=9;}
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
i=0;j=1;
while(dlu!=i)
{
ulamek=ulamek+(llu[i]*potega(10,dlu-j));
i++;j++;
}

i=0;
dlo=strlen(lo);
while(i!=dlo)
{
if (lo[i]=='0'){llo[i]=0;}
else{if (lo[i]=='1'){llo[i]=1;}
     else{if (lo[i]=='2'){llo[i]=2;}
          else{if (lo[i]=='3'){llo[i]=3;}
               else{if (lo[i]=='4'){llo[i]=4;}
                    else{if (lo[i]=='5'){llo[i]=5;}
                         else{if (lo[i]=='6'){llo[i]=6;}
                              else{if (lo[i]=='7'){llo[i]=7;}
                                   else{if (lo[i]=='8'){llo[i]=8;}
                                        else{if (lo[i]=='9'){llo[i]=9;}
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
i=0;j=1;
while(dlo!=i)
{
okres=okres+(llo[i]*potega(10,dlo-j));
i++;j++;
}
i=0;j=1;
if (okres!=0)
{while(dlo!=i)
 {
  mianownik=mianownik+9*potega(10,dlo-j);
  i++;j++;
 }
}
else{mianownik=potega(10,dlu);}
if (okres!=0)
    {skracanie=nwd(okres,mianownik);
    licznik=okres/skracanie;
    }
else {skracanie=nwd(ulamek,mianownik);}
mianownik=mianownik/skracanie;
if (okres!=0){plicznik=ulamek*mianownik+licznik;}
else{plicznik=ulamek/skracanie;}
if (okres!=0){p=potega(10,dlu);
pmianownik=p*mianownik;}
else{pmianownik=mianownik;}
skracanie=nwd(plicznik,pmianownik);
plicznik=plicznik/skracanie;
pmianownik=pmianownik/skracanie;
cout<<"\nW postaci zwykˆej ten uˆamek ma posta† :\t"<<lc<<"  caˆo˜ci i "<<plicznik<<"/"<<pmianownik;
do {
    cout<<"\nCzy chcesz wyj˜† z programu? \[T\\N\]:";cin>>q;
    if (q=='A'){cout<<"Data ostatniej aktualizacji: 2 luty 2004 23:19.";}
    else {if (q=='V'){cout<<"Wersja 1.1";}
          else {if (q=='P'){cout<<"Pomysˆ na program wg: Noisy";}
               }
         }
   }
while (!(q=='n'||q=='N'||q=='t'||q=='T'));
}
while (q=='N'||q=='n');
}
/*******************************************************************************************/
int potega(int podstawa, int wykladnik)
{int i,pot;
 for((pot=1,i=0); i!=wykladnik; i++)
     {pot=pot*podstawa;}
 if(wykladnik=0){pot=1;}
 return pot;
}
/*******************************************************************************************/
/*******************************************************************************************/
int nwd(int a,int b)
{
int m,n,r;
if (a<=b){m=a;n=b;}
else {m=b;n=a;}
while (m!=0)
     {r=n%m;
      n=m;
      m=r;
     }
 return n;
     }
/*******************************************************************************************/
