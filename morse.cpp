#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
char tekst[250];
int i;
main()
{
cout<<"Program ten szyfruje tekst za pomoc¥ alfabety Morse'a.\n"
<<"Wpowad« tekst: ";
gets(tekst);
i=0;
while(tekst[i]!='\0')
{ switch (tekst[i])
  {
   case 'a' : cout<<".-\\"; break;
   case 'b' : cout<<"-...\\"; break;
   case 'c' : cout<<"-.-.\\";break;
   case 'd' : cout<<"-..\\"; break;
   case 'e' : cout<<".\\"; break;
   case 'f' : cout<<"..-.\\"; break;
   case 'g' : cout<<"--.\\"; break;
   case 'h' : cout<<"....\\"; break;
   case 'i' : cout<<"..\\"; break;
   case 'j' : cout<<".---\\"; break;
   case 'k' : cout<<"-.-\\"; break;
   case 'l' : cout<<".-..\\"; break;
   case 'm' : cout<<"--\\"; break;
   case 'n' : cout<<"-.\\"; break;
   case 'o' : cout<<"---\\"; break;
   case 'p' : cout<<".--.\\"; break;
   case 'r' : cout<<".-.\\"; break;
   case 's' : cout<<"...\\"; break;
   case 't' : cout<<"-\\"; break;
   case 'u' : cout<<"..-\\"; break;
   case 'v' : cout<<"...-\\"; break;
   case 'w' : cout<<".--\\"; break;
   case 'x' : cout<<"-..-\\"; break;
   case 'y' : cout<<"-.--\\"; break;
   case 'z' : cout<<"--..\\"; break;
   case 'A' : cout<<".-\\"; break;
   case 'B' : cout<<"-...\\"; break;
   case 'C' : cout<<"-.-.\\";break;
   case 'D' : cout<<"-..\\"; break;
   case 'E' : cout<<".\\"; break;
   case 'F' : cout<<"..-.\\"; break;
   case 'G' : cout<<"--.\\"; break;
   case 'H' : cout<<"....\\"; break;
   case 'I' : cout<<"..\\"; break;
   case 'J' : cout<<".---\\"; break;
   case 'K' : cout<<"-.-\\"; break;
   case 'L' : cout<<".-..\\"; break;
   case 'M' : cout<<"--\\"; break;
   case 'N' : cout<<"-.\\"; break;
   case 'O' : cout<<"---\\"; break;
   case 'P' : cout<<".--.\\"; break;
   case 'R' : cout<<".-.\\"; break;
   case 'S' : cout<<"...\\"; break;
   case 'T' : cout<<"-\\"; break;
   case 'U' : cout<<"..-\\"; break;
   case 'V' : cout<<"...-\\"; break;
   case 'W' : cout<<".--\\"; break;
   case 'X' : cout<<"-..-\\"; break;
   case 'Y' : cout<<"-.--\\"; break;
   case 'Z' : cout<<"--..\\"; break;
   case '1' : cout<<".----\\"; break;
   case '2' : cout<<"..---\\"; break;
   case '3' : cout<<"...--\\"; break;
   case '4' : cout<<"....-\\"; break;
   case '5' : cout<<".....\\"; break;
   case '6' : cout<<"-....\\"; break;
   case '7' : cout<<"--...\\"; break;
   case '8' : cout<<"---..\\"; break;
   case '9' : cout<<"----.\\"; break;
   case '0' : cout<<"-----\\"; break;
   case ' ' : cout<<"\\"; break;
   default : cout<<tekst[i];
  }
 i++;
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
