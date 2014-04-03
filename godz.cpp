#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<stdlib.h>
double minuty=0;
short int zad,stpa,mina,seca,stpb,minb,secb,stp,minn,sec;
long sekundy, sekundy2, czg, czm, czs;
char dira, dirb, kier, czasa[8];
void main()
{
clrscr();
cout<<"Podaj dˆugo˜† geograficzn¥, godzine i dat© pierwszego punktu\n";
cout<<"Ile stopni:\t";
cin>>stpa;
cout<<"Ile minut:\t";
cin>>mina;
cout<<"Ile sekund:\t";
cin>>seca;
cout<<"Wsch¢d(E) czy zach¢d(W):\t";
cin>>dira;
cout<<"Jaka tam jest godzina (gg:mm:ss):\t";
strset(czasa,'\0');
cin>>czasa;
/*cin>>czasa[1];
cin>>czasa[2];
cin>>czasa[3];
cin>>czasa[4];
cin>>czasa[5];
cin>>czasa[6];
cin>>czasa[7];
*/
czg=atoi(czasa);
czasa[0]=czasa[3];
czasa[1]=czasa[4];
czm=atoi(czasa);
czasa[0]=czasa[6];
czasa[1]=czasa[7];
czs=atoi(czasa);

cout<<"\nPodaj dˆugo˜† geograficzn¥, godzine i dat© drugiego punktu\n";
cout<<"Ile stopni:\t";
cin>>stpb;
cout<<"Ile minut:\t";
cin>>minb;
cout<<"Ile sekund:\t";
cin>>secb;
cout<<"Wsch¢d(E) czy zach¢d(W):\t";
cin>>dirb;


if((dira=='w'||dira=='W')&&(dirb=='w'||dirb=='W'))
  {if(stpa>stpb||(stpa==stpb&&mina>minb)||(stpa==stpb&&mina==minb&&seca>secb)){zad=0;}
   else{zad=1;}
  }
if((dira=='w'||dira=='W')&&(dirb=='e'||dirb=='E'))
  {zad=2;}
if((dira=='e'||dira=='E')&&(dirb=='w'||dirb=='W'))
  {zad=3;}
if((dira=='e'||dira=='E')&&(dirb=='e'||dirb=='E'))
  {if(stpb>stpa||(stpb==stpa&&minb>mina)||(stpb==stpa&&minb==mina&&secb>seca)){zad=4;}
  else{zad=5;}
  }

switch (zad)
  {
   case 0 :
           if(seca>=secb){sec=seca-secb;}
           else{if(mina>minb){mina--;seca=seca+60;sec=seca-secb;}
                else {stpa--;mina=mina+59;seca=seca+60;sec=seca-secb;}
               }
           if(mina>=minb){minn=mina-minb;}
           else{stpa--;mina=mina+60;minn=mina-minb;}
           stp=stpa-stpb;
   break;
   case 1 :
           if(secb>=seca){sec=secb-seca;}
           else{if(minb>mina){minb--;secb=secb+60;sec=secb-seca;}
                else {stpb--;minb=minb+59;secb=secb+60;sec=secb-seca;}
               }
           if(minb>=mina){minn=minb-mina;}
           else{stpb--;minb=minb+60;minn=minb-mina;}
           stp=stpb-stpa;

   break;
   case 2 :
           if(59<(seca+secb)){mina++;seca=seca-60;}
           if(59<(mina+minb)){stpa++;mina=mina-60;}
           sec=seca+secb;
           minn=mina+minb;
           stp=stpa+stpb;
   break;
   case 3 :
           if(59<(seca+secb)){mina++;seca=seca-60;}
           if(59<(mina+minb)){stpa++;mina=mina-60;}
           sec=seca+secb;
           minn=mina+minb;
           stp=stpa+stpb;
   break;
   case 4 :
           if(secb>=seca){sec=secb-seca;}
           else{if(minb>mina){minb--;secb=secb+60;sec=secb-seca;}
                else {stpb--;minb=minb+59;secb=secb+60;sec=secb-seca;}
               }
           if(minb>=mina){minn=minb-mina;}
           else{stpb--;minb=minb+60;minn=minb-mina;}
           stp=stpb-stpa;
   break;
   case 5 :
           if(seca>=secb){sec=seca-secb;}
           else{if(mina>minb){mina--;seca=seca+60;sec=seca-secb;}
                else {stpa--;mina=mina+59;seca=seca+60;sec=seca-secb;}
               }
           if(mina>=minb){minn=mina-minb;}
           else{stpa--;mina=mina+60;minn=mina-minb;}
           stp=stpa-stpb;
   break;
  }

sekundy=czs;
sekundy=czm*60+sekundy;
sekundy=czg*3600+sekundy;
//cout<<"\n "<<stp<<"ø"<<minn<<"\'"<<sec<<"\'\'";
minuty=4*stp;
minuty=0.07*minn+minuty;
sekundy2=minuty*60;

switch (zad)
{
 case 0 : sekundy=sekundy+sekundy2;
 break;
 case 1 : sekundy=sekundy-sekundy2;
 break;
 case 2 : sekundy=sekundy+sekundy2;
 break;
 case 3 : sekundy=sekundy-sekundy2;
 break;
 case 4 : sekundy=sekundy+sekundy2;
 break;
 case 5 : sekundy=sekundy-sekundy2;
 break;

}
if(0>sekundy){sekundy=sekundy*-1;}
czg=sekundy/3600;
czg=czg%24;
sekundy=sekundy%3600;
czm=sekundy/60;
czs=sekundy%60;
cout<<"\nW punkcie drugim jest teraz godzina "<<czg<<":";if(czm<10){cout<<"0";}cout<<czm<<":";if(czs<10){cout<<"0";} cout<<czs<<".";

getch();

}

