#include<iostream.h>
#include<conio.h>
int w=0,i,tab[17][17],ile;
main()
{
cout<<"Program pokazuje wiersze tr�jk�ta Pascala.Ile wierszy pokaza�?: ";
do{
cin>>ile;
if (ile<1){clrscr();cout<<"To troche za ma�o :) Spr�buj jeszcze raz: ";}
if(ile>17){clrscr();cout<<"To troche za du�o :) Spr�buj jeszcze raz: ";}
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
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t���������������������������ͻ\n";  //tabelka podw�jna
cout<<"\t\t\t� Program napisa�:          �\n";
cout<<"\t\t\t�  Krzysztof Szumny - Noisy �\n";
cout<<"\t\t\t�  (6.02.2004r.)            �\n";
cout<<"\t\t\t���������������������������ͼ\n";

getchar();
}
