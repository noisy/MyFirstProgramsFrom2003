#include<iostream.h>
#include<conio.h>
long double F,C,r,R,K,temp;
int sys;
main()
{
cout<<"Program przelicza temperature podan¥ w danym systemie na inne systemy :\n"
<<"  1) Fahrenheita(øF)\n"
<<"  2) Celsjusza(øC)\n"
<<"  3) Reaumura(ør)\n"
<<"  4) Rankine'a(øR)\n"
<<"  5) Kelvina(K)\n";
do {cout<<"Wrowad« nr systemu w jakim wprowadzisz temperature: ";
cin>>sys;}
while (sys<1||sys>5);
cout<<"Podaj temperature w wybraym przez ciebie systemie:\t";
cin>>temp;
switch (sys)
{
case 1 :F=temp;
        C=(temp-32)/1.8;
        K=(temp+459.67)/1.8;
        r=(K-273.16)/1.25;
        R=K*1.8;
break;
case 2 :C=temp;
        F=(temp*1.8)+32;
        K=temp+273.16;
        r=(K-273.16)/1.25;
        R=K*1.8;
break;

case 3 :r=temp;
        K=(temp*1.25)+273.16;
        F=(K*1.8)-459.67;
        C=K-273.16;
        R=K*1.8;
break;

case 4 :R=temp;
        K=R/1.8;
        F=(K*1.8)-459.67;
        C=K-273.16;
        r=(K-273.16)/1.25;
break;

case 5 :K=temp;
        F=(K*1.8)-459.67;
        C=K-273.16;
        r=(K-273.16)/1.25;
        R=K*1.8;
break;
}
cout<<"Wprowadzona temperatura jest r¢wna :\n";
cout<<"W skali Fahrenheita\t"<<F<<"øF\n"
<<"W skali Celsjusza\t"<<C<<"øC\n"
<<"W skali Reaumura\t"<<r<<"ør\n"
<<"W skali Rankine'a\t"<<R<<"øR\n"
<<"W skali Kelvina\t\t"<<K<<"K\n";
if (K<0){cout<<"Niemniej jednak tekiej temperatury nie ma. Najnizsza mo¾liwa temperatura wynosi -273.16øC i jest to tzw. Zero Absolutne.";}
getchar();
getchar();
}
