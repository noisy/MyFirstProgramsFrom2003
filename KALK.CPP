#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
void main()
{
char *s;
int z,w,l,i,j;
clrscr();
cout<<"To jest kalkulator";
cout<<"\n\nPodaj dziaˆanie";

i=5;
while(z!=27)
{
s=getchar();
//s[0]=z;
w=atoi(s);


if(i==1){l+=w;i=0;}
if(i==2){l-=w;i=0;}
if(i==3){l*=w;i=0;}
if(i==4){l/=w;i=0;}
if(i==5){l=w;i=0;}

if(z=='+'){i=1;}
if(z=='-'){i=2;}
if(z=='*'){i=3;}
if(z=='/'){i=4;}

gotoxy(39, 12);
clreol();
cout<<l;
}


}
