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
cout<<"Program sprawdza czy podane dˆugo˜†i bok¢w mog¥ tyworzy† tr¢jk¥t,\na je¾eli tak to oblicza pole tego tr¢jk¥ta.";
do{
do{
  do {
  cout<<"\n\nPodaj dˆugo˜† boku \"a\":\t";
  cin>>a;
  cout<<"\nPodaj dˆugo˜† boku \"b\":\t";
  cin>>b;
  cout<<"\nPodaj dˆugo˜† boku \"c\":\t";
  cin>>c;
  if(a<0||b<0||c<0){cout<<"Tr¢jk¥t musi mie† boki o dodatniej dˆugo˜ci!!!.\n";getch();}

     }
  while(a<=0||b<=0||c<=0);
  if(a+b<=c||a+c<=b||b+c<=a){cout<<"To nie jest tr¢jk¥t";}

  }
while(a+b<=c||a+c<=b||b+c<=a);
p=(a+b+c)/2;
s=p*(p-a)*(p-b)*(p-c);
s=sqrt(s);
cout<<"Ten tr¢jk¥t ma pole r¢wne "<<s<<" jednostek kwadratowych";
do {
    cout<<"\nCzy chcesz wyjsc z programu? \[T\\N\]:";cin>>q;
    if (q=='A'){cout<<"Data ostatniej aktualizacji: 17 czerwiec 2004 9:32.";}
    else {if (q=='V'){cout<<"Wersja 1.0";}
          else {if (q=='P'){cout<<"Pomysˆ na program wg: Noisy";}
               }
         }
   }
while (!(q=='n'||q=='N'||q=='t'||q=='T'));
}
while (q=='n'||q=='N');
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»\n"
<<"\t\t\tº Program napisaˆ:          º\n"
<<"\t\t\tº  Krzysztof Szumny - Noisy º\n"
<<"\t\t\tº  noisy@autograf.pl        º\n"
<<"\t\t\tº  gg: 2288009              º\n"
<<"\t\t\tÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n";
delay(2000);

}