#include <iostream.h>
/********************************************************************/
const int
uH[2][2]={{1},{-1}},    //Zaczynamy deklarowac stopnie utlenienia
uHe[2][1]={{0},{'\0'}},
uLi[2][1]={{1},{'\0'}},                      //poszczegulnych pierwiastkach
uBe[2][1]={{2},{'\0'}},                     // w [0][0]- wpisujemy elektroujemnosc
uB[2][1]={{3},{'\0'}},                      // w [0][!0]-stopnie dodatnie
uC[2][2]={{2,4},{-4}},          // w [1][]- stopnie ujemne
uN[2][5]={{1,2,3,4,5},{-3}},
uO[2][2]={{'\0'},{-2,-1}},
uF[2][2]={{'\0'},{-1}},
uNe[2][1]={{0},{'\0'}},
uNa[2][1]={{1},{'\0'}},
uMg[2][1]={{2},{'\0'}},
uAl[2][1]={{3},{'\0'}},
uSi[2][2]={{2,4},{-4}},
uP[2][2]={{3,5},{-3}},
uS[2][2]={{4,6},{-2}},
uCl[2][5]={{1,3,5,6,7},{-1}},
uAr[2][1]={{0},{'\0'}},
uK[2][1]={{1},{'\0'}},
uCa[2][1]={{2},{'\0'}},
uSc[2][1]={{3},{'\0'}},
uTi[2][3]={{2,3,4}},
uV[2][5]={{1,2,3,4,5}},
uCr[2][3]={{2,3,6}},
uMn[2][5]={{2,3,4,6,7}},
uFe[2][4]={{2,3,4,6}},
uCo[2][2]={{2,3},{'\0'}},
uNi[2][3]={{1,2,3},{'\0'}},
uCu[2][2]={{1,2},{'\0'}},
uZn[2][1]={{2},{'\0'}},
uGa[2][1]={{3},{'\0'}},
uGe[2][2]={{2,4},{'\0'}},
uAs[2][2]={{3,5},{-3}},
uSe[2][2]={{4,6},{-2}},
uBr[2][4]={{1,4,5,7},{-1}},
uKr[2][3]={{0,2,4},{'\0'}},
uRb[2][1]={{1},{'\0'}};

float H=2.1, He=0, Li=1, Be=1.5, B=2, C=2.5, N=3, O=3.5, F=4, Ne=0, Na=0.9, Mg=1.2, Al=1.5, Si=1.8,
P=2.1, S=2.5, Cl=3, Ar=0, K=0.9, Ca=1, Sc=1.3, Ti=1.5, V=1.7, Cr=1.9, Mn=1.7, Fe=1.9, Co=2,
Ni=2, Cu=1.9, Zn= 1.6, Ga=1.6, Ge=1.8, As=2, Se=2.4, Br=2.8, Kr=0, Rb=0.8, Sr=1, Y=1.3, Zr=1.4,
Nb=1.6, Mo=2, Tc=1.9, Ru=2.2, Pd=2.2, Ag=1.9, Cd=1.7, In=1.7, Sn=1.8, Sb=1.9, Te=2.1, I=2.5,
Xe=0, Cs=0.7, Ba=0.9, La=1.1, Ce=1.1, Pr=1.1, Nd=1.2, Pm=1.2, Sm=1.2, Eu=1, Gd=1.1, Tb=1.2,
Dy=1.2, Ho=1.2, Er=1.2, Tm=1.2, Yb=1.1, Lu=1.2, Hf=1.3, Ta=1.5, W=2, Re=1.9, Os=2.2, Ir=2.2,
Pt=2.2, Au=2.4, Hg=1.9, Tl=1.8, Pb=1.8, Bi=1.9, Po=2, At=2.2, Rn=0, Fr=0.7, Ra=0.9, Ac=1.1,
Th=1.1, Pa=1.5, U=1.7;


               //wkoñcu koniec wpisywania tych stopni
/********************************************************************/
char rea[10], substrat[4][5][5],produkt[5][8];
int i=0, j=-1, k=0, l=0, m=0, n, o=-1, min1, min2, min3, min4, min5,
u1,u2,u3,u4,u5,pierw[5][5];
float elektr[5][5];

main()
{



cout<<"Program ten oblicza reakcje redox. Wprowadz reakcje: \n";
cin>>rea;
do{if (rea[i]=='+')
      {m++;j=0;k=0;i++;}
   if ((rea[i]=='A')||(rea[i]=='B')||(rea[i]=='C')||(rea[i]=='D')||(rea[i]=='E')||(rea[i]=='F')||(rea[i]=='G')||(rea[i]=='H')||(rea[i]=='I')||(rea[i]=='J')||(rea[i]=='K')||(rea[i]=='L')||(rea[i]=='M')||(rea[i]=='N')||(rea[i]=='O')||(rea[i]=='P')||(rea[i]=='R')||(rea[i]=='S')||(rea[i]=='T')||(rea[i]=='U')||(rea[i]=='W')||(rea[i]=='X')||(rea[i]=='Y')||(rea[i]=='Z'))
      {j++;k=0;}
   substrat[m][j][k]=rea[i];
   i++;k++;
  }
while (rea[i]!='\0');
/*****************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************/
if (rea=="wodor"){cout<<"\nPIERD!!";}
do{
o++;
if (substrat[n][o]=="H\0H"){elektr[n][o]=H;H=o;}
else {if (substrat[n][o]=="He"){elektr[n][o]=He;He=o;}
      else {if (substrat[n][o]=="Li"){elektr[n][o]=Li;Li=o;}
            else {if (substrat[n][o]=="Be"){elektr[n][o]=Be;Be=o;}
                  else {if (substrat[n][o]=="B"){elektr[n][o]=B;B=o;}
                        else {if (substrat[n][o]=="C"){elektr[n][o]=C;C=o;}
                              else {if (substrat[n][o]=="N"){elektr[n][o]=N;N=o;}
                                    else {if (substrat[n][o]=="O"){elektr[n][o]=O;O=o;}
                                          else {if (substrat[n][o]=="F"){elektr[n][o]=F;F=o;}
                                                else {if (substrat[n][o]=="Ne"){elektr[n][o]=Ne;Ne=o;}
						      else {if (substrat[n][o]=="Na"){elektr[n][o]=Na;Na=o;}
                                                            else {if (substrat[n][o]=="Mg"){elektr[n][o]=Mg;Mg=o;}
                                                                  else {if (substrat[n][o]=="Al"){elektr[n][o]=Al;Al=o;}
                                                                        else {if (substrat[n][o]=="Si"){elektr[n][o]=Si;Si=o;}
                                                                              else {if (substrat[n][o]=="P"){elektr[n][o]=P;P=o;}
										    else {if (substrat[n][o]=="S"){elektr[n][o]=S;S=o;}
											  else {if (substrat[n][o]=="Cl"){elektr[n][o]=Cl;Cl=o;}
												else {if (substrat[n][o]=="Ar"){elektr[n][o]=Ar;Ar=o;}
												      else {if (substrat[n][o]=="K"){elektr[n][o]=K;K=o;}
													    else {if (substrat[n][o]=="Ca"){elektr[n][o]=Ca;Ca=o;}
														  else {if (substrat[n][o]=="Sc"){elektr[n][o]=Sc;Sc=o;}
															else {if (substrat[n][o]=="Ti"){elektr[n][o]=Ti;Ti=o;}
															      else {if (substrat[n][o]=="V"){elektr[n][o]=V;V=o;}
                                                                                                                                   }
															     }
                                                                                                                       }
														 }
													   }
												     }
                                                                                               }
											 }
                                                                                   }
                                                                             }
     								       }
                                                                 }
                                                           }
                                                     }
                                               }
                                         }
                                   }
                             }
                       }
                 }
           }
     }
  }
while (substrat[n][o]=='\0');
/****************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************/

int L1=0, L2=0, L3=0, L4=0, L5=0;
do{
   u1=pierw[min1][L1];
   u2=pierw[min2][L2];
   u3=pierw[min3][L3];
   u4=pierw[min4][L4];
   u5=pierw[min5][L5];
   L1++;
   if(pierw[min1][L1]=='\0'){L1=0;L2++;}
   else {if(pierw[min2][L2]=='\0'){L2=0;L3++;}
         else {if(pierw[min3][L3]=='\0'){L3=0;L4++;}
               else {if(pierw[min4][L4]=='\0'){L4=0;L5++;}
                    }
              }
        }

  }             
while(u1+u2+u3+u4+u5!=0);



/*********************************************************************************/






cout<<substrat[0][0]<<endl;
cout<<substrat[0][1]<<endl;
cout<<substrat[0][2]<<endl;
cout<<substrat[0][3]<<endl;
cout<<substrat[1][0]<<endl;
cout<<substrat[1][1]<<endl;
cout<<substrat[1][2]<<endl;
cout<<substrat[1][3]<<endl;
cout<<substrat[1][4];

getchar();
getchar();
}

