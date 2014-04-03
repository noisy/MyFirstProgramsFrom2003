#include<conio.h>
#include<iostream.h>
int a[20],i,k,m,l;
long bin;
main()
{
do{
      l=1;
      a[i]+=1;

      do{
         if(a[i]==2){a[i]-=2;a[i+1]+=1;}
        }
      while(l==0);

   do{bin+=a[k];}
   while(k!=i);
  m++;
  }
while(m!=15);

}