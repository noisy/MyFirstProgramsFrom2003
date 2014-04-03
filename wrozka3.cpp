#include<conio.h>
#include<iostream.h>
#include<dos.h>
char ddata[11],datau[11],imie[15],q,haslo[50];
int ddz,dzu,dmc,mcu,drok,roku,l=1,d,i,dni,legal,p;
main()
{
gotoxy(27,1);
cout<<"**   Program Wro¾ka   **";
cout<<"\n\n\n\n\n\t   Je¾eli jeste˜ osob¥ nieuprawnion¥ to zamknij program, \n\t        w przeciwnym razie podaj ˜ci˜le tajne hasˆo:\n\n\n\n\n\t\t\t\t   ";
cin>>haslo;
clrscr();
gotoxy(36, 12);
cout<<"Mo¾e by†.";
//delay(750);
clrscr();
do{
strset(imie,'\0');i=1;
cout<<"Podaj swoje imi©: ";
cin>>imie;
do {if(imie[15-i]=='\0'){i++;}
    else {if(imie[15-i]=='a'||imie[15-i]=='A')
             {p=0;}
          else{p=1;}
                i=0;

          }
   }
while (i);
do{
   do{ cout<<"Wpisz ";
       if(legal){cout<<"ponownie ";}
       cout<<"swoj¥ date urodzenia (dd.mm.rrrr): ";
       legal=0;
       cin>>datau;          //zmienna "datau" oznacza date urodzenia
       if((datau[2]=='.'||datau[2]==',')&&(datau[5]=='.'||datau[5]==',')){legal=0;}
       else{legal=1;}
       dzu=atoi(datau);     //odczytywanie dnia urodzin i zapisywanie go w postaci liczby
       datau[0]=datau[3];
       datau[1]=datau[4];
       mcu=atoi(datau);     //odczytywanie miesi¹ca urodzin i zapisywanie go w postaci liczby
       datau[0]=datau[6];
       datau[1]=datau[7];
       datau[2]=datau[8];
       datau[3]=datau[9];
       datau[4]=datau[5];
       roku=atoi(datau);     //odczytywanie roku urodzin i zapisywanie go w postaci liczby
       if((dzu>31||dzu<1)&&(mcu==1||mcu==3||mcu==5||mcu==7||mcu==8||mcu==10||mcu==12)){legal=1;}
       if((dzu>30||dzu<1)&&(mcu==4||mcu==6||mcu==9||mcu==11)){legal=1;}
       if((dzu>28||dzu<1)&&roku%4!=0&&mcu==2){legal=1;}
       if((dzu>29||dzu<1)&&roku%4==0&&mcu==2){legal=1;}
       if(mcu>12||mcu<1){legal=1;}
       if(legal){clrscr();cout<<"le wprowadziˆ";if(p){cout<<"e˜";}else{cout<<"a˜";}
       cout<<" swoj¥ dat© urodzenia.\nOto przykˆad prawidˆowego wprowadzenia daty:\nnp. dat© 5 luty 1994 zapisujemy jako \"05.02.1994\" a nie jako \"5.2.94\"\n";}
     }
   while(legal);
   do{
      cout<<"Wpisz ";
      if(legal){cout<<"ponownie ";}
      cout<<"dziesiejsz¥ date (dd.mm.rrrr): ";
      legal=0;
      cin>>ddata;                                     //zmienna "ddata" oznacza dzisiejsz¹ datê
      if((ddata[2]=='.'||ddata[2]==',')&&(ddata[5]=='.'||ddata[5]==',')){legal=0;}
      else{legal=1;}
      ddz=atoi(ddata);                                //odczytywanie dzisiejszego dnia i zapisywanie go w postaci liczby
      ddata[0]=ddata[3];
      ddata[1]=ddata[4];
      dmc=atoi(ddata);                                //odczytywanie dzisiejszego miesi¹ca  i zapisywanie go w postaci liczby
      ddata[0]=ddata[6];
      ddata[1]=ddata[7];
      ddata[2]=ddata[8];
      ddata[3]=ddata[9];
      ddata[4]=ddata[5];
      drok=atoi(ddata);                               //odczytywanie dzisiejszego roku i zapisywanie go w postaci liczby
      if((ddz>31||ddz<1)&&(dmc==1||dmc==3||dmc==5||dmc==7||dmc==8||dmc==10||dmc==12)){legal=1;}
      if((ddz>30||ddz<1)&&(dmc==4||dmc==6||dmc==9||dmc==11)){legal=1;}
      if((ddz>28||ddz<1)&&drok%4!=0&&dmc==2){legal=1;}
      if((ddz>29||ddz<1)&&drok%4==0&&dmc==2){legal=1;}
      if(dmc>12||dmc<1){legal=1;}
      if(legal){clrscr();cout<<"Dziesiejsza data zostaˆa wprowadzona nieprawidˆowo.\nOto przykˆad prawidˆowego wprowadzenia daty:\nnp. dat© 7 sierpieä 2002 zapisujemy jako \"07.08.2002\" a nie jako \"7.8.02\"\n";}
     }
   while(legal);
   legal=0;
   if(roku>drok){legal=1;}
   else{if(roku==drok)
          {if(mcu>dmc){legal=1;}
           else{if(mcu==dmc)
                  {if(dzu>ddz){legal=1;}
                  }
               }
          }
       }
   if(legal){clrscr();cout<<"Z tych dat, kt¢re wprowadziˆ";if(p){cout<<"e˜";}else{cout<<"a˜";}cout<<" wynika, ¾e jeszcze si© nie urodziˆ";if(p){cout<<"e˜";}else{cout<<"a˜";}cout<<" :)";}
   }
while(legal);
legal=0;
do{if(legal){cout<<"w";}else{cout<<"W";}
   cout<<"pisz kt¢ry dzieä tygodnia dzisiaj mamy(pn-1..nd-7): ";
   cin>>d;
   if(d>7||d<1){legal=1;}
   if (legal){cout<<"Nie wiem jak u was, ale u nas tj. w Polsce tydzieä ma dokˆadnie siedem dni,\nod pierwszego pocz¥wszy na siudmym skoäczywszy, wi©c...\n";}
  }
while(d>7||d<1);
if(p){cout<<"\nJeste˜ m©¾czyzn¥\n";}else{cout<<"\nJeste˜ kobiet¥\n";}
if((dzu>21&&dzu<32&&mcu==12)||(dzu>0&&dzu<20&&mcu==1)){cout<<"Tw¢j znak zodiaku to kozioro¾ec\n";}
if((dzu>19&&dzu<32&&mcu==1)||(dzu>0&&dzu<19&&mcu==2)){cout<<"Tw¢j znak zodiaku to wodnik\n";}
if((dzu>18&&dzu<30&&mcu==2)||(dzu>0&&dzu<21&&mcu==3)){cout<<"Tw¢j znak zodiaku to ryby\n";}
if((dzu>20&&dzu<32&&mcu==3)||(dzu>0&&dzu<21&&mcu==4)){cout<<"Tw¢j znak zodiaku to baran\n";}
if((dzu>20&&dzu<31&&mcu==4)||(dzu>0&&dzu<21&&mcu==5)){cout<<"Tw¢j znak zodiaku to byk\n";}
if((dzu>20&&dzu<32&&mcu==5)||(dzu>0&&dzu<22&&mcu==6)){cout<<"Tw¢j znak zodiaku to bli«ni©ta\n";}
if((dzu>21&&dzu<31&&mcu==6)||(dzu>0&&dzu<23&&mcu==7)){cout<<"Tw¢j znak zodiaku to rak\n";}
if((dzu>22&&dzu<32&&mcu==7)||(dzu>0&&dzu<23&&mcu==8)){cout<<"Tw¢j znak zodiaku to lew\n";}
if((dzu>22&&dzu<32&&mcu==8)||(dzu>0&&dzu<23&&mcu==9)){cout<<"Tw¢j znak zodiaku to panna\n";}
if((dzu>22&&dzu<31&&mcu==9)||(dzu>0&&dzu<23&&mcu==10)){cout<<"Tw¢j znak zodiaku to waga\n";}
if((dzu>22&&dzu<32&&mcu==10)||(dzu>0&&dzu<22&&mcu==11)){cout<<"Tw¢j znak zodiaku to skorpion\n";}
if((dzu>21&&dzu<31&&mcu==11)||(dzu>0&&dzu<22&&mcu==12)){cout<<"Tw¢j znak zodiaku to strzelec\n";}

while(drok!=roku||dmc!=mcu||ddz!=dzu)
{if(dzu==31&&(mcu==1||mcu==3||mcu==5||mcu==7||mcu==8||mcu==10||mcu==12))
 {mcu++;dzu=1;i=1;}
 if(dzu==30&&(mcu==4||mcu==6||mcu==9||mcu==11))
 {mcu++;dzu=1;i=1;}
 if(dzu==28&&roku%4!=0&&mcu==2)
 {mcu++;dzu=1;i=1;}
 if(dzu==29&&roku%4==0&&mcu==2)
 {mcu++;dzu=1;i=1;}
 if(mcu==13&&dzu==1)
 {roku++;mcu=1;dzu=1;i=1;}
 if (i!=1)
 {dzu++;}
 l++;i=0;
 }
cout<<"Jest to tw¢j "<<l<<" dzieä ¾ycia.";
dni=(l-1)%7;
dni=(7+d-dni)%7;
cout<<"\nUrodziˆ";if(p){cout<<"e˜";}else{cout<<"a˜";}cout<<" si© ";

switch (dni)
{
case 1 : cout<<"w poniedziaˆek"; break;
case 2 : cout<<"we wtorek"; break;
case 3 : cout<<"w ˜rod©"; break;
case 4 : cout<<"w czwartek"; break;
case 5 : cout<<"w pi¥tek"; break;
case 6 : cout<<"w sobot©"; break;
case 0 : cout<<"w niedziel©"; break;
}
do {
    cout<<"\nCzy chcesz wyj˜† z programu? \[T\\N\]:";cin>>q;
    if (q=='A'){cout<<"Data ostatniej aktualizacji: 1 marzec 2004 22:46.";}
    else {if (q=='V'){cout<<"Wersja 3.0";}
          else {if (q=='P'){cout<<"Pomysˆ na program wg: Noisy";}
               }
         }
   }
while (!(q=='n'||q=='N'||q=='t'||q=='T'));
 clrscr(); }
while (q=='n'||q=='N');
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»\n"
<<"\t\t\tº Program napisaˆ:          º\n"
<<"\t\t\tº  Krzysztof Szumny - Noisy º\n"
<<"\t\t\tº  noisy@autograf.pl        º\n"
<<"\t\t\tº  gg: 1391200              º\n"
<<"\t\t\tÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n";
//delay(1000);


}

