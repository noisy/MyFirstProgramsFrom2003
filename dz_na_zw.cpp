/*
W porwnaniu z wersj¥ 1.1 zostaˆ zmieniony sytsem zamiany znakw liczbowych na liczby.
Ponadto zosta³a znacznie zmniejszona liczba zmiennych.
*/
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
int potega(int podstawa, int wykladnik);
int nwd(int a, int b);
char dzies[30], lc[15], lu[15], lo[15],q;
int i,j,k,s=0,dlu,cal,dlo,ulamek,okres,mianownik,licznik,pmianownik,plicznik,skracanie=1,p;
void main()
{
clrscr();
cout<<"Program napisaˆ:\n Krzysztof Szumny -Noisy\n (6.02.2004r.)\n\n\n\n";
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
ulamek=atoi(lu);
okres=atoi(lo);
cal=atoi(lc);
i=0;j=1;
dlo=strlen(lo);
dlu=strlen(lu);
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
cout<<"\nW postaci zwykˆej ten uˆamek ma posta† :\t"<<cal<<"  caˆo˜ci i "<<plicznik<<"/"<<pmianownik;
do {
    cout<<"\nCzy chcesz wyj˜† z programu? \[T\\N\]: ";cin>>q;
    if (q=='A'){cout<<"Data ostatniej aktualizacji: 7 luty 2004 00:21.";}
    else {if (q=='V'){cout<<"Wersja 2.0";}
          else {if (q=='P'){cout<<"Pomysˆ na program wg: Noisy";}
               }
         }
   }
while (!(q=='n'||q=='N'||q=='t'||q=='T'));
clrscr();
}
while (q=='N'||q=='n');
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»\n"  
<<"\t\t\tº Program napisaˆ:          º\n"
<<"\t\t\tº  Krzysztof Szumny - Noisy º\n"
<<"\t\t\tº  noisy@autograf.pl        º\n"
<<"\t\t\tº  gg: 1391200              º\n"
<<"\t\t\tÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n";
delay(1000);
}

/*******************************************************************************************/
int potega(int podstawa, int wykladnik)
{int i,pot;
 for((pot=1,i=0); i!=wykladnik; i++)
     {pot=pot*podstawa;}
 if(wykladnik==0){pot=1;}
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

