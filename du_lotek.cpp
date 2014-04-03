#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int i,j,tab[6],k=0,il;
void main()
{
cout<<"To jest program na˜laduj¥cy losowania Du¿ego Lotka.\n";
cout<<"Jak¥ liczbe losowaä wykona†: ";
cin>>il;
randomize();
do{
i=0;
do{
tab[i]=random(50);j=0;
  while(j!=i||tab[i]==0)
  {if(tab[i]==tab[j]||tab[i]==0)
       {i--;j=i-1;}
       j++;
  }
  i++;
  }
while(i!=6);
i=0;
cout<<" Losowanie nr "<<k+1<<":";
do{
cout<<"\t\b\b"<<tab[i]<<",";
  i++;
  }
while (i!=6);
cout<<endl;
k++;}
while (k!=il);

}

