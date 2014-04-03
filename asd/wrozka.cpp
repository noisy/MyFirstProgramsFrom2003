#include <iostream.h>
char imie[10];
char zml=136,zdl=157,zms=152,zds=151,zmx=171,zdx=141,zmc=134,zdc=143,zmo=162,zdo=224,zma=165,zda=164,zme=169,zde=168,zmz=190,zdz=189,zmn=228,zdn=227;
main()
{
int i, j;
i=0;
j=0;
cout<<"***Program Wr"<<zmo<<"zka***\n\nWpisz swoje imie konczac je kropk"<<zma<<", a powiem Ci TWOJ"<<zda<<" ZYCIOW"<<zda<<" PRAWD"<<zde<<"!!!\n";
do {cin>>imie[i];i++;}
while (imie[i-1]!='.');
do {if (imie[10-j]=='.')
       {if (imie[10-(j+1)]=='a')
           {cout<<"\nJeste"<<zms<<" kobiet"<<zma<<". Hahaha!!! \nwspolczuj"<<zme<<"... Hahaha!!!";j=9;}
        else {cout<<"\nJeste"<<zms<<" facetem. To dobrze bo faceci rz"<<zma<<"dz"<<zma<<"!";j=9;}
       }
   j++;
   }
while (j!=10);

cout<<"\n\nNaci"<<zms<<"nij enter aby wyj"<<zms<<zmc<<" z programu.\n\n\n\n\n\n\n\nProgram napisa"<<zml<<":\n Krzysztof Szumny (klasy I A)\n (14.01.2004r.)";
getchar();
getchar();
}
