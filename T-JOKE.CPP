#include<conio.h>
#include<dos.h>
#include<iostream.h>
main()
{
textcolor(7);
textbackground(0);
int c;
char z;
char data[13];
clrscr();
textcolor(15);
cout<<" cgs";
cprintf("                         \"HURT\" - PROGRAM GLOWNY");
cout<<"        Wersja 7.01 (net)   ";
cout<<"旼컴컴컴컴컴컴컴컴컴컴컴�";
textbackground(15);
textcolor(0);
cprintf("    2004    Data: 2004.04.01");
cout<<"컴컴컴컴컴컴컴컴컴컴컴컴컴엿같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같납같같같같같같�                  ";
textbackground(0);
textcolor(15);
cprintf("Uzytkownik: cgs                  ");
cout<<"같같같같같같같납같같같같같같�               ";
cprintf("Program nr: 0063/1378               ");
cout<<"같같같같같같같�"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같";
cprintf("�袴袴袴袴袴袴袴袴袴敲");
cout<<"같같같같같같같같같같같같같같�"
"낡같같같같같같같같같같같같같같";
cprintf("�       2004        �");
cout<<"같같같같같같같같같같같같같같�"
"낡같같같같같같같같같같같같같같";
cprintf("훤袴袴袴袴袴袴袴袴袴�");
cout<<"같같같같같같같같같같같같같같�"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같�";
cprintf(" Nazwa stanowiska: PPP        ");
cout<<"같같같같같같같같같같같같�"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같Wprowadz haslo: *****같같같같같같같같같같같같같같같�"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"쳐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴캑"
"�             ";cprintf("Wprowadz haslo i nacisnij ENTER    Esc - Rezygnacja"); cout<<"              �"
"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";
int x=45;
do{
gotoxy(x,19);
z=getch();
if(z!=13){cout<<" ";}
x++;
}
while(z!=13);
gotoxy(29,21);
cout<<"Wprowadz date :�";
textbackground(15);
textcolor(0);
cprintf("2004.04.01");
textbackground(0);
textcolor(15);
gotoxy(11,24);
cprintf("Wprowadz aktualna date i nacisnij ENTER    Esc - Rezygnacja");
x=45;
do{
if(x==49||x==52){x++;}
gotoxy(x,21);
z=getch();
c=z;
if(z!=13&&(z>47&&z<57)){cout<<z;x++;}
}
while(!(z==13||x==56));
textcolor(7);
textbackground(0);
clrscr();
cout<<" cgs";
textcolor(15);cprintf("                         \"HURT\" - PROGRAM GLOWNY");cout<<"        Wersja 7.01 (net)   ";
cout<<"旼컴컴컴컴컴컴컴컴컴컴컴�";textbackground(15);textcolor(0);cprintf("    2004    Data: 2004.04.01");textbackground(0);textcolor(7);cout<<"컴컴컴컴컴컴컴컴컴컴컴컴컴�"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같                  ";textcolor(15);cprintf("Uzytkownik: cgs                  ");textcolor(7);cout<<"같같같같같같같�"
"낡같같같같같같               ";textcolor(15);cprintf("Program nr: 0063/1378               ");textcolor(7);cout<<"같같같같같같같�"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같걸袴袴袴袴袴Trwa usuwanie baz danych袴袴袴袴袴뺐같같같같같같같개"
"낡같같같같같같같갰                                            별같같같같같같같개"
"낡같같같같같같같갰                                            별같같같같같같같개"
"낡같같같같같같같갰  c:\\                                       별같같같같같같같개"
"낡같같같같같같같걷袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴袴섟같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"낡같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같개"
"쳐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴캑"
"�             ";textcolor(15);cprintf("Trwa usuwanie - prosze czekac      Esc - Przerwij  "); cout<<"              �"
"읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�";

gotoxy(21,11);
getch();
int i,j=0,y,k=-1;

while(j!=15)
     {i=0;gotoxy(x=21,y=11);cout<<"                                         ";gotoxy(21,11);
        while(i!=42)
             {k++;
             delay(50);
             cout<<"�";i++;
             gotoxy(24,12);
             switch (k%202)
                     {
               case 0: cout<<"HURT04\\archiw.dbf   ";break;
               case 3: cout<<"HURT04\\arkpar.dbf   ";break;
               case 7: cout<<"HURT04\\brk600.dbf   ";break;
               case 11: cout<<"HURT04\\cennag.dbf  ";break;
               case 15: cout<<"HURT04\\centax.ntx  ";break;
               case 19: cout<<"HURT04\\cenpoz.dbf  ";break;
               case 23: cout<<"HURT04\\cenpoz.ntx  ";break;
               case 29: cout<<"HURT04\\DO.exe      ";break;
               case 31: cout<<"HURT04\\dekr.nag    ";break;
               case 34: cout<<"HURT04\\dekr.stp    ";break;
               case 37: cout<<"HURT04\\dostep.dbf    ";break;
               case 41: cout<<"HURT04\\dowkas.dbf    ";break;
               case 45: cout<<"HURT04\\faktury04.stp ";break;
               case 49: cout<<"HURT04\\klieci.dbf    ";break;
               case 53: cout<<"HURT04\\KOPIA\\H1.dbf ";break;
               case 57: cout<<"HURT04\\KOPIA\\H2.dbf ";break;
               case 61: cout<<"HURT04\\KOPIA\\H4.dbf ";break;
               case 65: cout<<"HURT04\\KOPIA\\H5.dbf ";break;
               case 69: cout<<"HURT04\\KOPIA\\H6.dbf ";break;
               case 71: cout<<"HURT04\\KOPIA\\H7.dbf ";break;
               case 75: cout<<"HURT04\\KOPIA\\H8.dbf ";break;
               case 79: cout<<"HURT04\\KOPIA\\H12.dbf";break;
               case 83: cout<<"HURT04\\KOPIA\\H14.dbf";break;
               case 87: cout<<"HURT04\\KOPIA\\H15.dbf";break;
               case 91: cout<<"HURT04\\KOPIA\\H16.dbf";break;
               case 93: cout<<"HURT04\\KOPIA\\H19.dbf";break;
               case 97: cout<<"HURT04\\KOPIA\\H21.dbf";break;
               case 101: cout<<"HURT04\\KOPIA\\H23.dbf";break;
               case 105: cout<<"HURT04\\KOPIA\\H34.dbf";break;
               case 109: cout<<"HURT04\\KOPIA\\H35.dbf";break;
               case 113: cout<<"HURT04\\KOPIA\\H36.dbf";break;
               case 117: cout<<"HURT04\\KOPIA\\H38.dbf";break;
               case 121: cout<<"HURT04\\KOPIA\\H40.dbf";break;
               case 124: cout<<"HURT04\\KOPIA\\H45.dbf";break;
               case 127: cout<<"HURT04\\KOPIA\\H46.dbf";break;
               case 131: cout<<"HURT04\\KOPIA\\H48.dbf";break;
               case 134: cout<<"HURT04\\KOPIA\\H48.dbf";break;
               case 137: cout<<"HURT04\\rabaty.dbf     ";break;
               case 141: cout<<"HURT04\\rap_kas.dbf    ";break;
               case 145: cout<<"HURT04\\raport.dbf     ";break;
               case 148: cout<<"HURT04\\opsa.dbf       ";break;
               case 151: cout<<"HURT04\\wz.dbf         ";break;
               case 155: cout<<"HURT04\\hurt.exe       ";break;
               case 158: cout<<"HURT04\\hurt.xex       ";break;
               case 200: cout<<"HURT04\\hurt.his       ";break;
               case 164: cout<<"HURT04\\hurt.bat       ";break;
               case 168: cout<<"HURT04\\zw1.dbf        ";break;
               case 172: cout<<"HURT04\\zw5.dbf        ";break;
               case 176: cout<<"HURT04\\klit.exe       ";break;
               case 180: cout<<"HURT04\\prog.exe       ";break;
               case 184: cout<<"HURT04\\cane.bat       ";break;
               case 188: cout<<"HURT04\\subreb.txt     ";break;
               case 192: cout<<"HURT04\\drukar.bat     ";break;
               case 196: cout<<"HURT04\\zus.dbf        ";break;
               default:;
                 }
             gotoxy(x,11);x++;
             }
      j++;
     }
clrscr();














}









