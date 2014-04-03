#include <iostream.h>
char imie[15],q;
int i=1;
main()
{
 cout<<"\t\t\t**   Program Wrozka   **";
cout<<"\n\t   napisal: Noisy (Krzys Sz.) dnia: 25 styczen 2004r.\n\n\n";

do{
cout<<"Podaj swoje imie: ";
cin>>imie;
do {if(imie[15-i]=='\0'){i++;}
    else {if(imie[15-i]=='a'||imie[15-i]=='A')
             {cout<<"\nJestes kobieta. Hahaha!!! \nwspolczuje... Hahaha!!!";}
          else{cout<<"\nJestes facetem. To dobrze bo faceci rzadza!";}
                i=0;

          }
   }
while (i);
do {
    cout<<"\nCzy chcesz wyjsc z programu? \[T\\N\]:";cin>>q;
    if (q=='A'){cout<<"Data ostatniej aktualizacji: 25 styczen 2004 00:16.";}
    else {if (q=='V'){cout<<"Wersja 2.0";}}
   }
while (!(q=='n'||q=='N'||q=='t'||q=='T'));
}
while (q=='n'||q=='n');
}
