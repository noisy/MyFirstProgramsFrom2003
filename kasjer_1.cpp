#include<iostream.h>
#include<conio.h>
#include<string.h>
main()
{
char q;
int i;
double kwota;
cout<<"Program napisaˆ:\n Krzysztof Szumny (klasy I A)\n (31.01.2004r.)\n\n";
cout<<"Program oblicza jak¥ najmniejsz¥ liczb¥ banknot¢w i monet wypˆaci† dan¥ kwote.\n";
do{
cout<<"Podaj kwot©:\t";
cin>>kwota;
cout<<"\nT¥ kwot© najlepiej wyda† w ten spos¢b:";
i=kwota/200;
kwota=kwota-(i*200);
if (i!=0){cout<<"\nbanknoty 200zˆ \t- "<<i<<"szt";}
i=kwota/100;
kwota=kwota-(i*100);
if (i!=0){cout<<"\nbanknoty 100zˆ \t- "<<i<<"szt";}
i=kwota/50;
kwota=kwota-(i*50);
if (i!=0){cout<<"\nbanknoty 50zˆ \t- "<<i<<"szt";}
i=kwota/20;
kwota=kwota-(i*20);
if (i!=0){cout<<"\nbanknoty 20zˆ \t- "<<i<<"szt";}
i=kwota/10;
kwota=kwota-(i*10);
if (i!=0){cout<<"\nbanknoty 10zˆ \t- "<<i<<"szt";}
i=kwota/5;
kwota=kwota-(i*5);
if (i!=0){cout<<"\nmonety 5zˆ \t- "<<i<<"szt";}
i=kwota/2;
kwota=kwota-(i*2);
if (i!=0){cout<<"\nmonety 2zˆ \t- "<<i<<"szt";}
i=kwota/1;
kwota=kwota-(i*1);
if (i!=0){cout<<"\nmonety 1zˆ \t- "<<i<<"szt";}
i=kwota/0.5;
kwota=kwota-(i*0.5);
if (i!=0){cout<<"\nmonety 0,50zˆ \t- "<<i<<"szt";}
i=kwota/0.2;
kwota=kwota-(i*0.2);
if (i!=0){cout<<"\nmonety 0,20zˆ \t- "<<i<<"szt";}
i=kwota/0.1;
kwota=kwota-(i*0.1);
if (i!=0){cout<<"\nmonety 0,10zˆ \t- "<<i<<"szt";}
i=kwota/0.05;
kwota=kwota-(i*0.05);
if (i!=0){cout<<"\nmonety 0,05zˆ \t- "<<i<<"szt";}
i=kwota/0.019;
kwota=kwota-(i*0.019);
if (i!=0){cout<<"\nmonety 0,02zˆ \t- "<<i<<"szt";}
i=kwota/0.0099;
kwota=kwota-(i*0.0099);
if (i!=0){cout<<"\nmonety 0,01zˆ \t- "<<i<<"szt";}
do {
    cout<<"\nCzy chcesz wyj˜† z programu? \[T\\N\]:";cin>>q;
    if (q=='A'){cout<<"Data ostatniej aktualizacji: 3 luty 2004 22:30.";}
    else {if (q=='V'){cout<<"Wersja 1.0";}}
   }
while (!(q=='n'||q=='N'||q=='t'||q=='T'));
clrscr();
}
while (q=='n'||q=='N');
}

