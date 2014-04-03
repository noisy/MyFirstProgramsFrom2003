#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
char ddata[11],datau[11];
int ddz,dzu,dmc,mcu,drok,roku,l=1,d,i,dni;
main()
{cout<<"Wpisz swoj¥ date urodzenia(dd.mm.rrrr): ";
cin>>datau;
cout<<"Wpisz dziesiejsz¥ date(dd.mm.rrrr): ";
cin>>ddata;
cout<<"Wpisz kt¢ry dzieä tygodnia dzisiaj mamy(pn-1..nd-7): ";
cin>>d;
dzu=atoi(datau);
datau[0]=datau[3];
datau[1]=datau[4];
mcu=atoi(datau);
datau[0]=datau[6];
datau[1]=datau[7];
datau[2]=datau[8];
datau[3]=datau[9];
datau[4]=datau[5];
roku=atoi(datau);

ddz=atoi(ddata);
ddata[0]=ddata[3];
ddata[1]=ddata[4];
dmc=atoi(ddata);
ddata[0]=ddata[6];
ddata[1]=ddata[7];
ddata[2]=ddata[8];
ddata[3]=ddata[9];
ddata[4]=ddata[5];
drok=atoi(ddata);
if((dzu>21&&dzu<32&&mcu==12)||(dzu>0&&dzu<20&&mcu==1)){cout<<"\nTw¢j znak zodiaku to kozioro¾ec\n";}
if((dzu>19&&dzu<32&&mcu==1)||(dzu>0&&dzu<19&&mcu==2)){cout<<"\nTw¢j znak zodiaku to wodnik\n";}
if((dzu>18&&dzu<30&&mcu==2)||(dzu>0&&dzu<21&&mcu==3)){cout<<"\nTw¢j znak zodiaku to ryby\n";}
if((dzu>20&&dzu<32&&mcu==3)||(dzu>0&&dzu<21&&mcu==4)){cout<<"\nTw¢j znak zodiaku to baran\n";}
if((dzu>20&&dzu<31&&mcu==4)||(dzu>0&&dzu<21&&mcu==5)){cout<<"\nTw¢j znak zodiaku to byk\n";}
if((dzu>20&&dzu<32&&mcu==5)||(dzu>0&&dzu<22&&mcu==6)){cout<<"\nTw¢j znak zodiaku to bli«ni©ta\n";}
if((dzu>21&&dzu<31&&mcu==6)||(dzu>0&&dzu<23&&mcu==7)){cout<<"\nTw¢j znak zodiaku to rak\n";}
if((dzu>22&&dzu<32&&mcu==7)||(dzu>0&&dzu<23&&mcu==8)){cout<<"\nTw¢j znak zodiaku to lew\n";}
if((dzu>22&&dzu<32&&mcu==8)||(dzu>0&&dzu<23&&mcu==9)){cout<<"\nTw¢j znak zodiaku to panna\n";}
if((dzu>22&&dzu<31&&mcu==9)||(dzu>0&&dzu<23&&mcu==10)){cout<<"\nTw¢j znak zodiaku to waga\n";}
if((dzu>22&&dzu<32&&mcu==10)||(dzu>0&&dzu<22&&mcu==11)){cout<<"\nTw¢j znak zodiaku to skorpion\n";}
if((dzu>21&&dzu<31&&mcu==11)||(dzu>0&&dzu<22&&mcu==12)){cout<<"\nTw¢j znak zodiaku to strzelec\n";}

while(drok!=roku||dmc!=mcu||ddz!=dzu)
{if(dzu==31&&(mcu==1||mcu==3||mcu==5||mcu==7||mcu==8||mcu==10||mcu==12))
 {mcu++;dzu=1;i=1;}
 if(dzu==30&&(mcu==4||mcu==6||mcu==9||mcu==11))
 {mcu++;dzu=1;i=1;}
 if(dzu==28&&roku%4!=0&&mcu==2)
 {mcu++;dzu=1;i=1;}
 if(dzu==29&&roku%4==0&&mcu==2)
 {mcu++;dzu=1;i=1;}
 if(mcu==13&&dzu==1)
 {roku++;mcu=1;dzu=1;i=1;}
 if (i!=1)
 {dzu++;}
 l++;i=0;
 }
cout<<"Jak dot¥d prze¾yˆe˜(a˜) "<<l<<" dni.";
dni=(l-1)%7;
dni=(7+d-dni)%7;
if(dni==0){dni=7;}
cout<<"\nUrodziˆe˜(a˜) si© w "<<dni<<" dniu tygodnia.";
getchar();
getchar();
}

