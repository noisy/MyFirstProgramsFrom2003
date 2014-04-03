#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int i,j,tab[20],k=0,il;
main()
{
cout<<"To jest program na˜laduj¥cy losowania Multi Lotka.\n";
cout<<"Jak¥ liczbe losowaä wykona†: ";
cin>>il;
randomize();
do{
i=0;
do{
tab[i]=random(81);j=0;
  while(j!=i||tab[i]==0)
  {if(tab[i]==tab[j]||tab[i]==0)
       {i--;j=i-1;}
       j++;
  }
  i++;
  }
while(i!=20);
i=0;
cout<<" Losowanie nr "<<k+1<<":   ";
do{
cout<<tab[i]<<",";
  i++;
  }
while (i!=20);
cout<<"\b"<<endl;
k++;}
while (k!=il);
getchar();
getchar();
}

