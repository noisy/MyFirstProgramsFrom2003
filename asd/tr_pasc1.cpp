#include<iostream.h>
#include<conio.h>
int w=0,i,tab[17][17],ile;
main()
{
cout<<"Program pokazuje wiersze tr¢jk¥ta Pascala.Ile wierszy pokaza†?: ";
do{
cin>>ile;
if (ile<1){clrscr();cout<<"To troche za maˆo :) Spr¢buj jeszcze raz: ";}
if(ile>17){clrscr();cout<<"To troche za du¾o :) Spr¢buj jeszcze raz: ";}
}
while(ile<1||ile>17);
tab[0][0]=1;
cout<<"\n1\n";
if (ile>1)
{
   do{i=0;
      do{
      tab[w+1][i]=tab[w][i-1]+tab[w][i];
         i++;
         cout<<tab[w+1][i-1]<<" ";
         }
      while(w+2!=i);
      w++;
      cout<<endl;
     }
   while(w+1!=ile);
}
getchar();getchar();
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»\n";  //tabelka podwójna
cout<<"\t\t\tº Program napisaˆ:          º\n";
cout<<"\t\t\tº  Krzysztof Szumny - Noisy º\n";
cout<<"\t\t\tº  (6.02.2004r.)            º\n";
cout<<"\t\t\tÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n";

getchar();
}
