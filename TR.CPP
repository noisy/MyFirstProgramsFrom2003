#include<iostream.h>
#include<CONIO.H>
#include<MATH.H>>
#include<dos.h>
int a,b,c,p;
float s;
char q;



main()

{

clrscr();
cout<<"Program sprawdza czy podane d�ugo��i bok�w mog� tyworzy� tr�jk�t,\na je�eli tak to oblicza pole tego tr�jk�ta.";
do{
do{
  do {
  cout<<"\n\nPodaj d�ugo�� boku \"a\":\t";
  cin>>a;
  cout<<"\nPodaj d�ugo�� boku \"b\":\t";
  cin>>b;
  cout<<"\nPodaj d�ugo�� boku \"c\":\t";
  cin>>c;
  if(a<0||b<0||c<0){cout<<"Tr�jk�t musi mie� boki o dodatniej d�ugo�ci!!!.\n";getch();}

     }
  while(a<=0||b<=0||c<=0);
  if(a+b<=c||a+c<=b||b+c<=a){cout<<"To nie jest tr�jk�t";}

  }
while(a+b<=c||a+c<=b||b+c<=a);
p=(a+b+c)/2;
s=p*(p-a)*(p-b)*(p-c);
s=sqrt(s);
cout<<"Ten tr�jk�t ma pole r�wne "<<s<<" jednostek kwadratowych";
do {
    cout<<"\nCzy chcesz wyjsc z programu? \[T\\N\]:";cin>>q;
    if (q=='A'){cout<<"Data ostatniej aktualizacji: 17 czerwiec 2004 9:32.";}
    else {if (q=='V'){cout<<"Wersja 1.0";}
          else {if (q=='P'){cout<<"Pomys� na program wg: Noisy";}
               }
         }
   }
while (!(q=='n'||q=='N'||q=='t'||q=='T'));
}
while (q=='n'||q=='N');
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t���������������������������ͻ\n"
<<"\t\t\t� Program napisa�:          �\n"
<<"\t\t\t�  Krzysztof Szumny - Noisy �\n"
<<"\t\t\t�  noisy@autograf.pl        �\n"
<<"\t\t\t�  gg: 2288009              �\n"
<<"\t\t\t���������������������������ͼ\n";
delay(2000);

}