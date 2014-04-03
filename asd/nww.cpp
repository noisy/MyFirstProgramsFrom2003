#include <iostream.h>
main()
{
long a,b,m,n,r,x,nwd,nww;
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
nwd=n;
nww=(a*b)/nwd;
cout<<"NWD="<<nwd<<endl;
cout<<"NWW="<<nww;

getchar();
getchar();
}
