#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int i,j,tab[5],k=0,il;
main()
{
cout<<"To jest program na˜laduj¥cy losowania Expres Lotka.\n";
cout<<"Jak¥ liczbe losowaä wykona†: ";
cin>>il;
randomize();
do{
i=0;
do{
tab[i]=random(46);j=0;
  while(j!=i||tab[i]==0)
  {if(tab[i]==tab[j]||tab[i]==0)
       {i--;j=i-1;}
       j++;
  }
  i++;
  }
while(i!=5);
i=0;
cout<<" Losowanie nr "<<k+1<<":";
do{
cout<<"\t\b\b"<<tab[i]<<",";
  i++;
  }
while (i!=5);
cout<<endl;
k++;}
while (k!=il);
getchar();
getchar();
}

