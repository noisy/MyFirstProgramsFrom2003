#include <iostream.h>
main()
{
long a,b,m,n,r,x;
cout<<"Podaj pierwsza liczbe:\t";
cin>>a;
cout<<"Podaj druga liczbe:\t";
cin>>b;
if (a<=b){m=a;n=b;}
else {m=b;n=a;}
while (m!=0)
{r=n%m;
 n=m;
 m=r;
}

cout<<"NWD="<<n;
getchar();
getchar();
}
