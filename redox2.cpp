#include <iostream.h>
#include <string.h>
char reakcja[25],substrat[4][5][2], pie[25]="pi",kol[7];
int i,m,j=-1,k,n,o=-1,min1, min2, min3, min4, min5,u1,u2,u3,u4,u5,pierw[5][2][5];
float elektr[5][5];
const int
uH[2][1]={{1},{-1}},                         //Zaczynamy deklarowac stopnie utlenienia
uHe[2][1]={{0},{'\0'}},
uLi[2][1]={{1},{'\0'}},                      //poszczegulnych pierwiastkach
uBe[2][1]={{2},{'\0'}},
uB[2][1]={{3},{'\0'}},                       // w [0][]-stopnie dodatnie
uC[2][2]={{2,4},{-4}},                       // w [1][]- stopnie ujemne
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

const double H=2.1, He=0, Li=1, Be=1.5, B=2, C=2.5, N=3, O=3.5, F=4, Ne=0, Na=0.9, Mg=1.2, Al=1.5, Si=1.8,
P=2.1, S=2.5, Cl=3, Ar=0, K=0.9, Ca=1, Sc=1.3, Ti=1.5, V=1.7, Cr=1.9, Mn=1.7, Fe=1.9, Co=2,
Ni=2, Cu=1.9, Zn= 1.6, Ga=1.6, Ge=1.8, As=2, Se=2.4, Br=2.8, Kr=0, Rb=0.8, Sr=1, Y=1.3, Zr=1.4,
Nb=1.6, Mo=2, Tc=1.9, Ru=2.2, Pd=2.2, Ag=1.9, Cd=1.7, In=1.7, Sn=1.8, Sb=1.9, Te=2.1, I=2.5,
Xe=0, Cs=0.7, Ba=0.9, La=1.1, Ce=1.1, Pr=1.1, Nd=1.2, Pm=1.2, Sm=1.2, Eu=1, Gd=1.1, Tb=1.2,
Dy=1.2, Ho=1.2, Er=1.2, Tm=1.2, Yb=1.1, Lu=1.2, Hf=1.3, Ta=1.5, W=2, Re=1.9, Os=2.2, Ir=2.2,
Pt=2.2, Au=2.4, Hg=1.9, Tl=1.8, Pb=1.8, Bi=1.9, Po=2, At=2.2, Rn=0, Fr=0.7, Ra=0.9, Ac=1.1,
Th=1.1, Pa=1.5, U=1.7;

main()
{
cout<<"Program ten oblicza reakcje redox. Wprowadz reakcje: \n";
cin>>reakcja;                           //wprowadzanie reakcji
do{if (reakcja[i]=='+')
      {m++;j=-1;k=0;i++;}
   if ((reakcja[i]=='A')||(reakcja[i]=='B')||(reakcja[i]=='C')||(reakcja[i]=='D')||(reakcja[i]=='E')||(reakcja[i]=='F')||(reakcja[i]=='G')||(reakcja[i]=='H')||(reakcja[i]=='I')||(reakcja[i]=='J')||(reakcja[i]=='K')||(reakcja[i]=='L')||(reakcja[i]=='M')||(reakcja[i]=='N')||(reakcja[i]=='O')||(reakcja[i]=='P')||(reakcja[i]=='R')||(reakcja[i]=='S')||(reakcja[i]=='T')||(reakcja[i]=='U')||(reakcja[i]=='W')||(reakcja[i]=='X')||(reakcja[i]=='Y')||(reakcja[i]=='Z'))
      {j++;k=0;}
   substrat[m][j][k]=reakcja[i];
   i++;k++;
  }
while (reakcja[i]!='\0');
do{                                                                                      //  uH[2][2]={{'\0'},{{1},{-1}}},
o++;
if (substrat[n][o][0]=='H'&&substrat[n][o][1]=='\0'){elektr[n][o]=H; pierw[o][0][0]=1;pierw[o][1][0]=-1;}
else {if (substrat[n][o][0]=='H'&&substrat[n][o][1]=='e'){elektr[n][o]=He;pierw[o][0][0]=0;}
      else {if (substrat[n][o][0]=='L'&&substrat[n][o][1]=='i'){elektr[n][o]=Li;pierw[o][0][0]=1;}
            else {if (substrat[n][o][0]=='B'&&substrat[n][o][1]=='e'){elektr[n][o]=Be;pierw[o][0][0]=2;}
                  else {if (substrat[n][o][0]=='B'&&substrat[n][o][1]=='\0'){elektr[n][o]=B;pierw[o][0][0]=3;}
                        else {if (substrat[n][o][0]=='C'&&substrat[n][o][1]=='\0'){elektr[n][o]=C;pierw[o][0][0]=2;pierw[o][0][1]=4;pierw[o][1][0]=-4;}
                              else {if (substrat[n][o][0]=='N'&&substrat[n][o][1]=='\0'){elektr[n][o]=N;pierw[o][0][0]=1;pierw[o][0][1]=2;pierw[o][0][2]=3;pierw[o][0][3]=4;pierw[o][0][4]=5;pierw[o][1][0]=-3;}
                                    else {if (substrat[n][o][0]=='O'&&substrat[n][o][1]=='\0'){elektr[n][o]=O;pierw[o][1][0]=-2;pierw[o][1][1]=-1;}
                                          else {if (substrat[n][o][0]=='F'&&substrat[n][o][1]=='\0'){elektr[n][o]=F;}
                                                else {if (substrat[n][o][0]=='N'&&substrat[n][o][1]=='e'){elektr[n][o]=Ne;}
						      else {if (substrat[n][o][0]=='N'&&substrat[n][o][1]=='a'){elektr[n][o]=Na;}
                                                            else {if (substrat[n][o][0]=='M'&&substrat[n][o][1]=='g'){elektr[n][o]=Mg;}
                                                                  else {if (substrat[n][o][0]=='A'&&substrat[n][o][1]=='l'){elektr[n][o]=Al;}
                                                                        else {if (substrat[n][o][0]=='S'&&substrat[n][o][1]=='i'){elektr[n][o]=Si;}
                                                                              else {if (substrat[n][o][0]=='P'&&substrat[n][o][1]=='\0'){elektr[n][o]=P;}
										    else {if (substrat[n][o][0]=='S'&&substrat[n][o][1]=='\0'){elektr[n][o]=S;}
											  else {if (substrat[n][o][0]=='C'&&substrat[n][o][1]=='l'){elektr[n][o]=Cl;}
												else {if (substrat[n][o][0]=='A'&&substrat[n][o][1]=='r'){elektr[n][o]=Ar;}
												      else {if (substrat[n][o][0]=='K'&&substrat[n][o][1]=='\0'){elektr[n][o]=K;}
													    else {if (substrat[n][o][0]=='C'&&substrat[n][o][1]=='a'){elektr[n][o]=Ca;}
														  else {if (substrat[n][o][0]=='S'&&substrat[n][o][1]=='c'){elektr[n][o]=Sc;}
															else {if (substrat[n][o][0]=='T'&&substrat[n][o][1]=='i'){elektr[n][o]=Ti;}
															      else {if (substrat[n][o][0]=='V'&&substrat[n][o][1]=='\0'){elektr[n][o]=V;}
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
while (substrat[n][o][0]!='\0');

int L1=0, L2=0, L3=0, L4=0, L5=0;
do{
   u1=pierw[0][min1][L1];
   u2=pierw[1][min2][L2];
   u3=pierw[2][min3][L3];
   u4=pierw[3][min4][L4];
   u5=pierw[4][min5][L5];
   L1++;
   if(pierw[0][min1][L1]=='\0'){L1=0;L2++;}
   else {if(pierw[1][min2][L2]=='\0'){L2=0;L3++;}
         else {if(pierw[2][min3][L3]=='\0'){L3=0;L4++;}
               else {if(pierw[3][min4][L4]=='\0'){L4=0;L5++;}
                    }
              }
        }

  }             
while(u1+u2+u3+u4+u5!=0);

getchar();
getchar();

}
