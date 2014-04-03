#include <iostream.h>
main()
{
int a,b,c,n;
a=b=c=1;
cout<<"podaj n:";
cin>>n;
do{
//(a*a)+(b*b)=(c*c);
if ((a*a)+(b*b)==(c*c)&&a<=b)
{cout<<endl<<a<<"^2+"<<b<<"^2="<<c<<"^2";
}
a++;
if (a>n){a=1,b++;}
if (b>n){b=1,c++;}
}
while (c!=n);
getchar();
getchar();
}
