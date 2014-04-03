#include<iostream.h>
#include<string.h>
#include<stdio.h>
void main()
{
int liczba;
char *bin;
bin="";
cout<<"Podaj liczbe w systemie dziesietnym:\t";
cin>>liczba;
while(liczba!=0)
{if(liczba%2==1){strcat(bin,"1");}
 else{strcat(bin,"0");}
 liczba=liczba/2;
}
strrev(bin);
cout<<"Oto ta liczba w systemie binarnym:\t"<<bin;
getchar();
}

