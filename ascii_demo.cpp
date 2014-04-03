#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream.h>
main()
{
char znak,q;
int kod;
do{
clrscr();

cout<<"Wcisinj znak na klawiaturze: \n";
cin>>("%c",&znak);
printf("Kod wcisnietego znaku to : %d \n",znak);

printf("Podaj kod znaku: \n");
scanf("%d",&kod);
printf("Znak o podanym kodzie to: %c \n", kod);
do {
    cout<<"\nCzy chcesz wyjsc z programu? \[T\\N\]:";cin>>q;
    if (q=='A'){cout<<"Data ostatniej aktualizacji: 29 styczen 2004 22:30.";}
    else {if (q=='V'){cout<<"Wersja 1.0";}
          else {if (q=='P'){cout<<"Program zostal napisany wg pomyslu: nieznany";}
               }
         }
   }
while (!(q=='n'||q=='N'||q=='t'||q=='T'));
}
while (q=='n'||q=='n');
}
