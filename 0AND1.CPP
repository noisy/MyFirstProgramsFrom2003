#include<math.h>
#include<conio.h>
#include<iostream.h>
int i,j,k,liczba,tab[50];
long bin;
main()
{
clrscr();
i=49;
cout<<"podaj liczbe: \t";
cin>>liczba;


do
{i=0;
 tab[i]=tab[i]+1;



   while(tab[i]>1)
   {
    tab[i]=0;
    i++;
    tab[i]++;

   }
   k++;
   bin=j=0;
   do
   {

    bin+=tab[j]*pow(10,j);
    j++;

   }
   while(j!=50);



}
while(bin%liczba!=0);
cout<<endl<<bin;
getch();



}
