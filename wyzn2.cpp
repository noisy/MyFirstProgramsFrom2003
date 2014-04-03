#include <iostream.h>
float a1,a2,b1,b2,c1,c2,x,y,w,wx,wy;
main()
{
char q;
cout<<"Program napisal:\n Krzysztof Szumny (klasy I A)\n (21.01.2004r.)\n\n\n\n\n\n";
cout<<"Program ten oblicza niewiadome \"a\" i \"b\" w ukladzie rownan 2 stopnia.";
cout<<"\nRownanie takie powinno miec postac \" ax + by = c \".";
do{
cout<<"\nDla pierwszego rownania wprowadz\n";
cout<<"wspolczynnik \"a\" : \t";
cin>>a1;
cout<<"wspolczynnik \"b\" : \t";
cin>>b1;
cout<<"wspolczynnik \"c\" : \t";
cin>>c1;
cout<<"Rownanie ma postac \" "<<a1<<"x + "<<b1<<"y = "<<c1<<" \".";
cout<<"\nDla drugiego rownania wprowadz\n";
cout<<"wspolczynnik \"a\" : \t";
cin>>a2;
cout<<"wspolczynnik \"b\" : \t";
cin>>b2;
cout<<"wspolczynnik \"c\" : \t";
cin>>c2;
cout<<"Rownanie ma postac \" "<<a2<<"x + "<<b2<<"y = "<<c2<<" \".";
w=(a1*b2)-(b1*a2);
wx=(c1*b2)-(b1*c2);
wy=(a1*c2)-(c1*a2);

if(w!=0)
     {x=wx/w;
      y=wy/w;
     }
if (w!=0){cout<<"\nUklad ten jest oznaczony.";}
if (w==0&&wx==0&&wy==0){cout<<"\nUklad ten jest nieoznaczony.";}
if (w==0&&(wx!=0||wy!=0)){cout<<"\nUklad ten jest sprzeczny.";}
if(w!=0)
     {cout<<"\nRozwiazanie:\n\tx="<<x<<"\n\ty="<<y<<"\n";}
do {
    cout<<"\nCzy chcesz wyjsc z programu? \[T\\N\]:";cin>>q;
    if (q=='A'){cout<<"Data ostatniej aktualizacji: 21 styczen 2004 17:32.";}
    else {if (q=='V'){cout<<"Wersja 1.0";}}
   }
while (!(q=='n'||q=='N'||q=='t'||q=='T'));
}
while (q=='n'||q=='n');

}
