#include<iostream.h>
#include<conio.h>
#include<string.h>
main()
{
char q;
int i;
double kwota;
cout<<"Program napisa�:\n Krzysztof Szumny (klasy I A)\n (31.01.2004r.)\n\n";
cout<<"Program oblicza jak� najmniejsz� liczb� banknot�w i monet wyp�aci� dan� kwote.\n";
do{
cout<<"Podaj kwot�:\t";
cin>>kwota;
cout<<"\nT� kwot� najlepiej wyda� w ten spos�b:";
i=kwota/200;
kwota=kwota-(i*200);
if (i!=0){cout<<"\nbanknoty 200z� \t- "<<i<<"szt";}
i=kwota/100;
kwota=kwota-(i*100);
if (i!=0){cout<<"\nbanknoty 100z� \t- "<<i<<"szt";}
i=kwota/50;
kwota=kwota-(i*50);
if (i!=0){cout<<"\nbanknoty 50z� \t- "<<i<<"szt";}
i=kwota/20;
kwota=kwota-(i*20);
if (i!=0){cout<<"\nbanknoty 20z� \t- "<<i<<"szt";}
i=kwota/10;
kwota=kwota-(i*10);
if (i!=0){cout<<"\nbanknoty 10z� \t- "<<i<<"szt";}
i=kwota/5;
kwota=kwota-(i*5);
if (i!=0){cout<<"\nmonety 5z� \t- "<<i<<"szt";}
i=kwota/2;
kwota=kwota-(i*2);
if (i!=0){cout<<"\nmonety 2z� \t- "<<i<<"szt";}
i=kwota/1;
kwota=kwota-(i*1);
if (i!=0){cout<<"\nmonety 1z� \t- "<<i<<"szt";}
i=kwota/0.5;
kwota=kwota-(i*0.5);
if (i!=0){cout<<"\nmonety 0,50z� \t- "<<i<<"szt";}
i=kwota/0.2;
kwota=kwota-(i*0.2);
if (i!=0){cout<<"\nmonety 0,20z� \t- "<<i<<"szt";}
i=kwota/0.1;
kwota=kwota-(i*0.1);
if (i!=0){cout<<"\nmonety 0,10z� \t- "<<i<<"szt";}
i=kwota/0.05;
kwota=kwota-(i*0.05);
if (i!=0){cout<<"\nmonety 0,05z� \t- "<<i<<"szt";}
i=kwota/0.019;
kwota=kwota-(i*0.019);
if (i!=0){cout<<"\nmonety 0,02z� \t- "<<i<<"szt";}
i=kwota/0.0099;
kwota=kwota-(i*0.0099);
if (i!=0){cout<<"\nmonety 0,01z� \t- "<<i<<"szt";}
do {
    cout<<"\nCzy chcesz wyj�� z programu? \[T\\N\]:";cin>>q;
    if (q=='A'){cout<<"Data ostatniej aktualizacji: 3 luty 2004 22:30.";}
    else {if (q=='V'){cout<<"Wersja 1.0";}}
   }
while (!(q=='n'||q=='N'||q=='t'||q=='T'));
clrscr();
}
while (q=='n'||q=='N');
}

