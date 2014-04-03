#include <iostream.h>]
int a[100];
char zml=136,zdl=157,zms=152,zds=151,zmx=171,zdx=141,zmc=134,zdc=143,zmo=162,zdo=224,zma=165,zda=164,zme=169,zde=168,zmz=190,zdz=189,zmn=228,zdn=227;
main()
{
cout<<"Program napisa"<<zml<<":\n Krzysztof Szumny (klasy I A)\n (21.01.2004r.)\n\n\n\n\n\n";
char q;
int i=0, y=0, n ,x ;
do{
   cout<<"Podaj jakiego stopnia b"<<zme<<"dzie obliczany wielomian : \t";
   cin>>n;
   cout<<"Podaj \"x\" dla kt"<<zmo<<"rego b"<<zme<<"dzie liczony wielomian : \t";
   cin>>x;
   cout<<"Podawaj kolejne warto"<<zms<<"ci wsp"<<zmo<<zml<<"czynnik"<<zmo<<"w.\n";
   do {cout<<"Podaj warto"<<zms<<zmc<<" wsp"<<zmo<<zml<<"czynnika a("<<i<<") : \t";cin>>a[i];i++;}
   while (i!=n+1);
   i=-1;
   do {
       i++;
       y=y*x + a[i];
      }
   while (i!=n);
   cout<<"Wielomian ten ma warto"<<zms<<zmc<<" "<<y<<".";
do {cout<<"\nCzy chcesz wyj"<<zms<<zmc<<" z programu? \[T\\N\]:";cin>>q;cout<<endl;
    if (q=='A'){cout<<"Data ostatniej aktualizacji: 30 styczen 2004 02:04.";}
    else {if(q=='V'){cout<<"Wersja 1.1";}}
   }
while (!(q=='n'||q=='N'||q=='t'||q=='T'));
}
while (q=='n'||q=='n');
}

