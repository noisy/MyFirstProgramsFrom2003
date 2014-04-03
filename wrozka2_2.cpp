#include <iostream.h>
#include <conio.h>
#include <dos.h>
char imie[15],q,haslo[50];
int i=1;
main()
{
gotoxy(27,1);
cout<<"**   Program Wro¾ka   **";
cout<<"\n\t   napisaˆ: Noisy (Krzys Sz.) dnia: 25 styczeä 2004r.\n\n\n";
cout<<"\t   Je¾eli jeste˜ osob¥ nieuprawnion¥ to zamknij program, \n\t        w przeciwnym razie podaj ˜ci˜le tajne hasˆo:\n\n\n\n\n\t\t\t\t   ";
cin>>haslo;
clrscr();
gotoxy(40, 12);
cout<<"Mo¾e by†.";
//delay(500);
clrscr();
do{
cout<<"Podaj swoje imi©: ";
cin>>imie;
do {if(imie[15-i]=='\0'){i++;}
    else {if(imie[15-i]=='a'||imie[15-i]=='A')
             {cout<<"\nJeste˜ kobiet¥. Hahaha!!! \nwspolczuje... Hahaha!!!";}
          else{cout<<"\nJeste˜ facetem. To dobrze bo faceci rz¥dz¥!";}
                i=0;

          }
   }
while (i);
do {
    cout<<"\nCzy chcesz wyj˜† z programu? \[T\\N\]:";cin>>q;
    if (q=='A'){cout<<"Data ostatniej aktualizacji: 2 luty 2004 23:53.";}
    else {if (q=='V'){cout<<"Wersja 2.2";}}
   }
while (!(q=='n'||q=='N'||q=='t'||q=='T'));
}
while (q=='n'||q=='N');
}
