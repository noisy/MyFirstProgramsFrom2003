#include <iostream.h>
char imie[15],q;
int i=1;
main()
{
 cout<<"\t\t\t**   Program Wro¾ka   **";
cout<<"\n\t   napisaˆ: Noisy (Krzys Sz.) dnia: 25 styczeä 2004r.\n\n\n";

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
    if (q=='A'){cout<<"Data ostatniej aktualizacji: 2 luty 2004 23:31.";}
    else {if (q=='V'){cout<<"Wersja 2.1";}}
   }
while (!(q=='n'||q=='N'||q=='t'||q=='T'));
}
while (q=='n'||q=='n');
}
