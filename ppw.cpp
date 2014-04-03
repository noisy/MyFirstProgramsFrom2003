#include <iostream.h>

int n[16];
main()
{
int  p, i, j, l=0;
cout<<"Wprowadz ilosc liczb : ";
cin>>p;
do {cout<<endl<<l+1<<" : ";
    cin>>n[l];l++; }
while (l!=p);
do{i=0;j=0;
   do {
       if (n[i]>=n[i+1])
          {n[j]=n[i];i+=2;j++;}
       else {n[j]=n[i+1];i+=2;j++;}
      }
   while ((p/2!=j)&&(p%2!=1));
  }
while {j!=1};
}
