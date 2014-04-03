#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream.h>
main()
{
char q, linia=26;
int kod,i;
do{
clrscr();
i=0;
do {
    printf("Podaj kod znaku: \t");
    scanf("%d",&kod);
    printf("\t\tkod = \t%c ", kod);
    cout<<endl;
    i++;
    }
while (i!=10);
do {
    cout<<"\nCzy chcesz wyjsc z programu? \[T\\N\]:";cin>>q;
    if (q=='A'){cout<<"Data ostatniej aktualizacji: 29 styczen 2004 23:11.";}
    else {if (q=='V'){cout<<"Wersja 1.0";}
          else {if (q=='P'){cout<<"Program zostal napisany wg pomyslu: Noisy";}
               }
         }
   }
while (!(q=='n'||q=='N'||q=='t'||q=='T'));
}
while (q=='n'||q=='n');

}
