#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
short int i,j,tab[20],k,il, los,skrl,skrlrecz,skrlchyb;
short int zak[5];
short int duzy[5][6],expres[5][5],multi[5][10];
short int kuponduzy, kuponexpres,kuponmulti;
void main()
{
randomize();
do{
clrscr();
cout<<"\n\n\n\n\t\tTOTALIZATOR - versja 1.0";
cout<<"\n\n\n\t";
textcolor(14);
cprintf("1");
textcolor(15);
cprintf(". Losowanie \"Du�ego Lotka\"");
cout<<"\n\t";
textcolor(14);
cprintf("2");
textcolor(15);
cprintf(". Losowanie \"Expres Lotka\"");
cout<<"\n\t";
textcolor(14);
cprintf("3");
textcolor(15);
cprintf(". Losowanie \"Multi Lotka\"");
cout<<"\n\t";
textcolor(14);
cprintf("4");
textcolor(15);
cprintf(". Skre�lanie kuponu");
cout<<"\n\t";
textcolor(14);
cprintf("5");
textcolor(15);
cprintf(". Wyj�cie");

do{los=getch();}
while(los<49||los>53);
switch(los)
 {
 case '1':
 clrscr();
 if(kuponduzy)
 {textcolor(15);
  cprintf("Tw�j kupon: ");
 j=0;
 do{cout<<"\n\t"<<j+1<<". ";
    i=0;
    do{cout<<duzy[j][i];i++;
       if(i!=6){cout<<", ";}
      }
    while(i!=6);
    j++;
   }
 while(j!=5);
 i=0;

  do{
     tab[i]=random(49)+1;j=0;
     while(j!=i)
          {if(tab[i]==tab[j])
             {i--;j=i-1;}
              j++;
          }
     i++;
    }
  while(i!=6);
 cout<<"\n\nOto wylosowane liczby: ";
 i=0;
 do{cout<<tab[i];if(i!=5){cout<<", ";}i++;}
 while(i!=6);
 i=j=k=0;
 do{zak[i]=0;i++;}
 while(i!=5);
 i=0;
 do{
    if(duzy[j][i]==tab[k])
    {zak[j]++;i++;k=-1;}
    k++;
    if(k==6){i++;k=0;}
    if(i==6){j++;i=0;}
   }
 while(j!=6);
 i=0;
 cout<<"\n\n";
 do{cout<<"\t"<<i+1<<". "<<zak[i]<<" trafionych\n";i++;}
 while(i!=5);
 }
 else{cout<<"Nie masz skre�lonego kuponu do Du�ego Lotka.\nWybierz \"skre�lanie kuponu\" z menu g��wnego";}
 getch();
 break;

 case '2':
 clrscr();
 if(kuponexpres)
 {
 textcolor(15);
 cprintf("Tw�j kupon: ");
 j=0;
 do{cout<<"\n\t"<<j+1<<". ";
    i=0;
    do{cout<<expres[j][i];i++;
       if(i!=5){cout<<", ";}
      }
    while(i!=5);
    j++;
   }
 while(j!=5);
 i=0;

  do{
     tab[i]=random(45)+1;j=0;
     while(j!=i)
          {if(tab[i]==tab[j])
             {i--;j=i-1;}
              j++;
          }
     i++;
    }
  while(i!=5);
 cout<<"\n\nOto wylosowane liczby: ";
 i=0;
 do{cout<<tab[i];if(i!=5){cout<<", ";}i++;}
 while(i!=5);
 i=j=k=0;
 do{zak[i]=0;i++;}
 while(i!=5);
 i=0;
 do{
    if(expres[j][i]==tab[k])
    {zak[j]++;i++;k=-1;}
    k++;
    if(k==5){i++;k=0;}
    if(i==5){j++;i=0;}
   }
 while(j!=5);
 i=0;
 cout<<"\n\n";
 do{cout<<"\t"<<i+1<<". "<<zak[i]<<" trafionych\n";i++;}
 while(i!=5);
 }
 else{cout<<"Nie masz skre�lonego kuponu do Expres Lotka.\nWybierz \"skre�lanie kuponu\" z menu g��wnego";}
 getch();
 break;

 case '3':
 clrscr();
 if(kuponmulti)
 {
 textcolor(15);
 cprintf("Tw�j kupon: ");
 j=0;
 do{cout<<"\n\t"<<j+1<<". ";
    i=0;
    do{cout<<multi[j][i];i++;
       if(i!=10){cout<<", ";}
      }
    while(i!=10);
    j++;
   }
 while(j!=5);
 i=0;

  do{
     tab[i]=random(80)+1;j=0;
     while(j!=i)
          {if(tab[i]==tab[j])
             {i--;j=i-1;}
              j++;
          }
     i++;
    }
  while(i!=20);
 cout<<"\n\nOto wylosowane liczby:\t";
 i=0;
 do{cout<<tab[i];if(i!=19){cout<<", ";}i++;if(i==10){cout<<"\n\t\t\t";}}
 while(i!=20);
 i=j=k=0;
 do{zak[i]=0;i++;}
 while(i!=5);
 i=0;
 do{
    if(multi[j][i]==tab[k])
    {zak[j]++;i++;k=-1;}
    k++;
    if(k==20){i++;k=0;}
    if(i==10){j++;i=0;}
   }
 while(j!=20);
 i=0;
 cout<<"\n\n";
 do{cout<<"\t"<<i+1<<". "<<zak[i]<<" trafionych\n";i++;}
 while(i!=5);

 }
 else{cout<<"Nie masz skre�lonego kuponu do Multi Lotka.\nWybierz \"skre�lanie kuponu\" z menu g��wnego";}
 getch();
 break;

 case '4':
 clrscr();
 textcolor(14);
 cout<<"\n\t";
 cprintf("1");
 textcolor(15);
 cprintf(". Skre�lanie r�czne\r");
 textcolor(14);
 cout<<"\n\t";
 cprintf("2");
 textcolor(15);
 cprintf(". Chybi� - trafi�\n");
 do{skrl=getch();}
 while(skrl<'1'||skrl>'2');
       switch (skrl)
       {
        case '1':
        clrscr();
        cout<<"Jaki kupon skre�lamy?\n\t";
        textcolor(14);
        cprintf("1");
        textcolor(15);
        cprintf(". Du�ego Lotka");
        cout<<"\n\t";
        textcolor(14);
        cprintf("2");
        textcolor(15);
        cprintf(". Expres Lotka");
        cout<<"\n\t";
        textcolor(14);
        cprintf("3");
        textcolor(15);
        cprintf(". Multi Lotka");
        do{skrlrecz=getch();}
        while(skrlrecz<49||skrlrecz>51);
        switch(skrlrecz)
              {
               case '1':
               j=0;
               do{clrscr();i=0;
                  cout<<"Dla "<<j+1<<" zak�adu\n";
                  do{ cout<<"podaj "<<i+1<<" liczb�:\t";
                      cin>>duzy[j][i];i++;
                    }
                  while(i!=6);j++;
                 }
               while(j!=5);
               kuponduzy=1;
               break;

               case '2':
               j=0;
               do{clrscr();i=0;
                  cout<<"Dla "<<j+1<<" zak�adu\n";
                  do{ cout<<"podaj "<<i+1<<" liczb�:\t";
                      cin>>expres[j][i];i++;
                    }
                  while(i!=5);j++;
                 }
               while(j!=5);
               kuponexpres=1;
               break;

               case '3':
               j=0;
               do{clrscr();i=0;
                  cout<<"Dla "<<j+1<<" zak�adu\n";
                  do{ cout<<"podaj "<<i+1<<" liczb�:\t";
                      cin>>multi[j][i];i++;
                    }
                  while(i!=10);j++;
                 }
               while(j!=5);
               kuponmulti=1;
               break;
               default : ;
              }
        break;

        case '2':
        clrscr();
        cout<<"W co b�dziesz gra�?\n\t";
        textcolor(14);
        cprintf("1");
        textcolor(15);
        cprintf(". Du�y Lotek");
        cout<<"\n\t";
        textcolor(14);
        cprintf("2");
        textcolor(15);
        cprintf(". Expres Lotek");
        cout<<"\n\t";
        textcolor(14);
        cprintf("3");
        textcolor(15);
        cprintf(". Multi Lotek");
        do{skrlchyb=getch();}
        while(skrlchyb<49||skrlchyb>51);
              switch(skrlchyb)
                    {
                     case'1':
                     clrscr();
                     k=0;
                     do{i=0;
                        do{
                           duzy[k][i]=random(49)+1;j=0;
                           while(j!=i)
                                {if(duzy[k][i]==duzy[k][j])
                                    {i--;j=i-1;}
                                 j++;
                                }
                           i++;
                          }
                        while(i!=6);k++;
                       }
                     while(k!=5);
                     cout<<"Tw�j kupon: ";
                     j=0;
                     do{cout<<"\n\t"<<j+1<<". ";
                        i=0;
                        do{cout<<duzy[j][i];i++;
                        if(i!=6){cout<<", ";}
                          }
                        while(i!=6);
                        j++;
                       }
                     while(j!=5);
                     cout<<"\n\nMasz ju� wype�niony kupon, wi�c mo�esz bra� udzia� w losowaniu.";
                     cout<<"\nW tym celu wybierz odpowiedni� funkcje z menu g�uwnego";
                     kuponduzy=1;
                     getch();
                     break;

                     case'2':
                     clrscr();
                     k=0;
                     do{i=0;
                        do{
                           expres[k][i]=random(45)+1;j=0;
                           while(j!=i)
                                {if(expres[k][i]==expres[k][j])
                                    {i--;j=i-1;}
                                 j++;
                                }
                           i++;
                          }
                        while(i!=5);k++;
                       }
                     while(k!=5);
                     cout<<"Tw�j kupon: ";
                     j=0;
                     do{cout<<"\n\t"<<j+1<<". ";
                        i=0;
                        do{cout<<expres[j][i];i++;
                        if(i!=5){cout<<", ";}
                          }
                        while(i!=5);
                        j++;
                       }
                     while(j!=5);
                     cout<<"\n\nMasz ju� wype�niony kupon, wi�c mo�esz bra� udzia� w losowaniu.";
                     cout<<"\nW tym celu wybierz odpowiedni� funkcje z menu g�uwnego";
                     kuponexpres=1;
                     getch();
                     break;

                     case'3':
                     clrscr();
                     k=0;
                     do{i=0;
                        do{
                           multi[k][i]=random(80)+1;j=0;
                           while(j!=i)
                                {if(multi[k][i]==multi[k][j])
                                    {i--;j=i-1;}
                                 j++;
                                }
                           i++;
                          }
                        while(i!=10);k++;
                       }
                     while(k!=5);
                     cout<<"Tw�j kupon: ";
                     j=0;
                     do{cout<<"\n\t"<<j+1<<". ";
                        i=0;
                        do{cout<<multi[j][i];i++;
                        if(i!=10){cout<<", ";}
                          }
                        while(i!=10);
                        j++;
                       }
                     while(j!=5);
                     cout<<"\n\nMasz ju� wype�niony kupon, wi�c mo�esz bra� udzia� w losowaniu.";
                     cout<<"\nW tym celu wybierz odpowiedni� funkcje z menu g�uwnego";
                     kuponmulti=1;
                     getch();
                     break;
                     default: ;
                    }
        break;
        default : ;
       }
 break;

 }
}
while(los!='5');
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
<<"\t\t\t���������������������������ͻ\n"
<<"\t\t\t� Program napisa�:          �\n"
<<"\t\t\t�  Krzysztof Szumny - Noisy �\n"
<<"\t\t\t�  noisy@autograf.pl        �\n"
<<"\t\t\t�  gg: 1391200              �\n"
<<"\t\t\t���������������������������ͼ\n";
delay(2500);

}

