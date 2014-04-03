#include<iostream.h>
#include<conio.h>
#include<cstring.h>
string pier,ppier;
int i=0,masa,pmasa,pprot,prot,alfa,beta;
main()
{
cout<<"Program przeprowadza reakcje rozpadu Alfa i Beta podanej cz¥steczki\n";
cout<<"Podaj mase atomow¥ pierwiastka:\t\t";
cin>>masa;pmasa=masa;
cout<<"Podaj ilo˜† proton¢w pierwiastku:\t";
cin>>prot;pprot=prot;
cout<<"Ile razy przeprowadzi† reakcje rozpadu Alfa:\t";
cin>>alfa;
cout<<"Ile razy przeprowadzi† reakcje rozpadu Beta:\t" ;
cin>>beta;
while(i<2)
{switch (prot)
{
case  1: pier="H"; break;
case  2: pier="He"; break;
case  3: pier="Li"; break;
case  4: pier="Be"; break;
case  5: pier="B"; break;
case  6: pier="C"; break;
case  7: pier="N"; break;
case  8: pier="O"; break;
case  9: pier="F"; break;
case  10: pier="Ne"; break;
case  11: pier="Na"; break;
case  12: pier="Mg"; break;
case  13: pier="Al"; break;
case  14: pier="Si"; break;
case  15: pier="P"; break;
case  16: pier="S"; break;
case  17: pier="Cl"; break;
case  18: pier="Ar"; break;
case  19: pier="K"; break;
case  20: pier="Ca"; break;
case  21: pier="Sc"; break;
case  22: pier="Ti"; break;
case  23: pier="V"; break;
case  24: pier="Cr"; break;
case  25: pier="Mn"; break;
case  26: pier="Fe"; break;
case  27: pier="Co"; break;
case  28: pier="Ni"; break;
case  29: pier="Cu"; break;
case  30: pier="Zn"; break;
case  31: pier="Ga"; break;
case  32: pier="Ge"; break;
case  33: pier="As"; break;
case  34: pier="Se"; break;
case  35: pier="Br"; break;
case  36: pier="Kr"; break;
case  37: pier="Rb"; break;
case  38: pier="Sr"; break;
case  39: pier="Y"; break;
case  40: pier="Zr"; break;
case  41: pier="Nb"; break;
case  42: pier="Mo"; break;
case  43: pier="Tc"; break;
case  44: pier="Ru"; break;
case  45: pier="Rh"; break;
case  46: pier="Pd"; break;
case  47: pier="Ag"; break;
case  48: pier="Cd"; break;
case  49: pier="In"; break;
case  50: pier="Sn"; break;
case  51: pier="Sb"; break;
case  52: pier="Te"; break;
case  53: pier="I"; break;
case  54: pier="Xe"; break;
case  55: pier="Cs"; break;
case  56: pier="Ba"; break;
case  57: pier="La"; break;
case  58: pier="Ce"; break;
case  59: pier="Pr"; break;
case  60: pier="Nd"; break;
case  61: pier="Pm"; break;
case  62: pier="Sm"; break;
case  63: pier="Eu"; break;
case  64: pier="Gd"; break;
case  65: pier="Tb"; break;
case  66: pier="Dy"; break;
case  67: pier="Ho"; break;
case  68: pier="Er"; break;
case  69: pier="Tm"; break;
case  70: pier="Yb"; break;
case  71: pier="Lu"; break;
case  72: pier="Hf"; break;
case  73: pier="Ta"; break;
case  74: pier="W"; break;
case  75: pier="Re"; break;
case  76: pier="Os"; break;
case  77: pier="Ir"; break;
case  78: pier="Pt"; break;
case  79: pier="Au"; break;
case  80: pier="Hg"; break;
case  81: pier="Tl"; break;
case  82: pier="Pb"; break;
case  83: pier="Bi"; break;
case  84: pier="Po"; break;
case  85: pier="At"; break;
case  86: pier="Rn"; break;
case  87: pier="Fr"; break;
case  88: pier="Ra"; break;
case  89: pier="Ac"; break;
case  90: pier="Th"; break;
case  91: pier="Pa"; break;
case  92: pier="U"; break;
case  93: pier="Np"; break;
case  94: pier="Pu"; break;
case  95: pier="Am"; break;
case  96: pier="Cm"; break;
case  97: pier="Bk"; break;
case  98: pier="Cf"; break;
case  99: pier="Es"; break;
case  100: pier="Fm"; break;
case  101: pier="Md"; break;
case  102: pier="No"; break;
case  103: pier="Lr"; break;
case  104: pier="Rf"; break;
case  105: pier="Db"; break;
case  106: pier="Sg"; break;
case  107: pier="Bh"; break;
case  108: pier="Hs"; break;
case  109: pier="Mt"; break;
case  110: pier="Uun"; break;
case  111: pier="Uuu"; break;
case  112: pier="Uub"; break;
case  113: pier=""; break;
case  114: pier="Uuq"; break;
case  115: pier=""; break;
case  116: pier="Uuh"; break;
case  117: pier=""; break;
case  118: pier="Uuo"; break;

default : ;
}
if(i==0){ppier=pier;prot=prot-(2*alfa)+beta;}
i++;
}
masa=masa-(4*alfa);

cout<<"\n"<<endl<<"\t\t"<<pmasa<<"\t\t\t\t"<<masa<<endl<<"\t\t   "<<ppier<<"    ÄÄÄÄ"<<alfa<<"AÄÄÄÄ"<<beta<<"áÄÄÄÄ>"<<"\t   "<<pier<<endl<<"\t\t"<<pprot<<"\t\t\t\t"<<prot;
getchar();
getchar();

}



