#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
char tekst[250];
main()
{
int w,i=0;
cout<<"Program sˆ¢¾y do szyfrowania tekstu. ";
cout<<"Podaj tekst: ";
gets(tekst);
cout<<"Wybierz jaki szyfr zastosowa†"
<<"\n  1) GA-DE-RY-PO-LU-KI"
<<"\n  2) PO-LI-TY-KA-RE-NU"
<<"\n  3) KA-CE-MI-NU-TO-WY"
<<"\n  4) KO-NI-EC-MA-TU-RY\n";
do{cout<<"Zastosuj szyfr nr: ";cin>>w;}
while(!(w<5&&w>0));


cout<<"Zaszyfrowany tekst: ";
switch (w)
{
case 1 :while(tekst[i]!='\0')
        {switch (tekst[i])
                {
                case 'g' : cout<<"a"; break;
                case 'a' : cout<<"g"; break;
                case 'd' : cout<<"e"; break;
                case 'e' : cout<<"d"; break;
                case 'r' : cout<<"y"; break;
                case 'y' : cout<<"r"; break;
                case 'p' : cout<<"o"; break;
                case 'o' : cout<<"p"; break;
                case 'l' : cout<<"u"; break;
                case 'u' : cout<<"l"; break;
                case 'k' : cout<<"i"; break;
                case 'i' : cout<<"k"; break;
                default : cout<<tekst[i];
                }
         i++;
        }
        ; break;
case 2 :while(tekst[i]!='\0')
        {switch (tekst[i])
                {
                case 'p' : cout<<"o"; break;
                case 'o' : cout<<"p"; break;
                case 'l' : cout<<"i"; break;
                case 'i' : cout<<"l"; break;
                case 't' : cout<<"y"; break;
                case 'y' : cout<<"t"; break;
                case 'k' : cout<<"a"; break;
                case 'a' : cout<<"k"; break;
                case 'r' : cout<<"e"; break;
                case 'e' : cout<<"r"; break;
                case 'n' : cout<<"u"; break;
                case 'u' : cout<<"n"; break;
                default : cout<<tekst[i];
                }
         i++;
        } ; break;
case 3 : while(tekst[i]!='\0')
        {switch (tekst[i])
                {
                case 'k' : cout<<"a"; break;
                case 'a' : cout<<"k"; break;
                case 'c' : cout<<"e"; break;
                case 'e' : cout<<"c"; break;
                case 'm' : cout<<"i"; break;
                case 'i' : cout<<"m"; break;
                case 'n' : cout<<"u"; break;
                case 'u' : cout<<"n"; break;
                case 't' : cout<<"o"; break;
                case 'o' : cout<<"t"; break;
                case 'w' : cout<<"y"; break;
                case 'y' : cout<<"w"; break;
                default : cout<<tekst[i];
                }
         i++;
        }; break;
case 4 : while(tekst[i]!='\0')
        {switch (tekst[i])
                {
                case 'k' : cout<<"o"; break;
                case 'o' : cout<<"k"; break;
                case 'n' : cout<<"i"; break;
                case 'i' : cout<<"n"; break;
                case 'e' : cout<<"c"; break;
                case 'c' : cout<<"e"; break;
                case 'm' : cout<<"a"; break;
                case 'a' : cout<<"m"; break;
                case 't' : cout<<"u"; break;
                case 'u' : cout<<"t"; break;
                case 'r' : cout<<"y"; break;
                case 'y' : cout<<"r"; break;
                default : cout<<tekst[i];
                }
         i++;
        }; break;
}

getchar();
getchar();
//delay(2000);
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»\n";  //tabelka podwójna
cout<<"\t\t\tº Program napisaˆ:          º\n";
cout<<"\t\t\tº  Krzysztof Szumny - Noisy º\n";
cout<<"\t\t\tº  (8.02.2004r.)            º\n";
cout<<"\t\t\tÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n";
getchar();

}
