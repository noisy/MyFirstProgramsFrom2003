#include<iostream.h>
#include<conio.h>
void main()
{
int liczba,i;                   //deklaracja zmiennej "liczba" typu integer, oraz pomocniczej zmiennej "i"
int t[16];                      //deklaracja 16 elementowej tablicy typu integer
cout<<"Podaj liczbe: ";         //pokazuje tekst pomiedzy cudzys�owami
cin>>liczba;                    //wczytywanie zmiennej "liczba" z klawiatury
i=0;                            //nadanie zmiennej "i" wartosci 0
do {                            //rozpoczecie p�tli
    t[i]=liczba%2;              //wpisywanie do tablicy reszty z dzielenia "liczba" przez 2
    liczba=liczba/2;            //nadanie zmiannej "liczba" wartosci z dzielenia "liczba" przez 2
    i++;                        //zwiekszenie wartosci zmiennej "i" o 1 (to samo co i=i+1;)
   }
while(liczba!=0);               //warunek petli: "r�b do{..} dop�ki liczba jest r�na od zera" albo inaczej "r�b do{..} a� "liczba" osi�gnie wartosc 0"
cout<<"Oto ta liczba w systemie binarnym: ";
do {cout<<t[i-1];               //rozpocz�cie p�tli
    i--;                        //zmniejszeni wartosci zmiennej "i" o 1 (to samo co i=i-1;)
   }
while(i!=0);                    //warunek p�tli: "r�b do{..} dop�ki "i" jest r�ne od zera" czyli "r�b do{..} a� "i" bedzie r�wne zero"
getch();                        //czeka na wcisni�cie klawisza "ENTER"

}
