#include <iostream.h>
#include <conio.h>
main()
{long liczba;
int l,k;
cout<<"Podaj liczbe:\t";
cin>>liczba;
k=l=liczba;
while (l!=1)
    {liczba=liczba*(l-1);
    l--;
    }
cout<<k<<"!="<<liczba;
getch();
}
