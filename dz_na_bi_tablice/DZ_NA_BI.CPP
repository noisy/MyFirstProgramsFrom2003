#include<iostream.h>
#include<conio.h>
void main()
{
int liczba,i;                   //deklaracja zmiennej "liczba" typu integer, oraz pomocniczej zmiennej "i"
int t[16];                      //deklaracja 16 elementowej tablicy typu integer
cout<<"Podaj liczbe: ";         //pokazuje tekst pomiedzy cudzys³owami
cin>>liczba;                    //wczytywanie zmiennej "liczba" z klawiatury
i=0;                            //nadanie zmiennej "i" wartosci 0
do {                            //rozpoczecie pêtli
    t[i]=liczba%2;              //wpisywanie do tablicy reszty z dzielenia "liczba" przez 2
    liczba=liczba/2;            //nadanie zmiannej "liczba" wartosci z dzielenia "liczba" przez 2
    i++;                        //zwiekszenie wartosci zmiennej "i" o 1 (to samo co i=i+1;)
   }
while(liczba!=0);               //warunek petli: "rób do{..} dopóki liczba jest ró¿na od zera" albo inaczej "rób do{..} a¿ "liczba" osi¹gnie wartosc 0"
cout<<"Oto ta liczba w systemie binarnym: ";
do {cout<<t[i-1];               //rozpoczêcie pêtli
    i--;                        //zmniejszeni wartosci zmiennej "i" o 1 (to samo co i=i-1;)
   }
while(i!=0);                    //warunek pêtli: "rób do{..} dopóki "i" jest ró¿ne od zera" czyli "rób do{..} a¿ "i" bedzie równe zero"
getch();                        //czeka na wcisniêcie klawisza "ENTER"

}
