#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<stdio.h>
#include<string.h>
unsigned long wmicro,wphilips,wferari,wbmw,wmcdonald,wsiemens,wnokia;
float blum;
void main()
{
short int ptlow=3,ptlon=0,ptxc=10,ptxn=15,ptxw=0,bylo=1;
short int i,rob='w',tlow=3,tlon=0,txc=10,txn=15,txw=0;
poczatek:
long ilosc=0,ulamek=0,ilkawa=0,ilherbata=0,iltyton=0,ilzboze=0,ilropa=0,ilbron=0,ilnarkotyki=0,ilvideo=0,ildrukarki=0,ilsamochody=0;//ilosc danego towaru
long ilmicro=0,ilphilips=0,ilferari=0,ilbmw=0,ilmcdonald=0,ilsiemens=0,ilnokia=0;
unsigned long bszwaj=0,bfran=0,bbryt=0,bkanad=0,bpol=0,bczecz=0;
short int ckawa,cherbata,ctyton,czboze,cropa,cbron,cnarkotyki,cvideo,cdrukarki,csamochody;//cena danego towaru(calosci)
short int cmicro,cphilips,cferari,cbmw,cmcdonald,csiemens,cnokia;//ceny poszczegolnych akcji w danych miastach
short int ukawa,uherbata,utyton,uzboze,uropa,ubron,unarkotyki,uvideo,udrukarki,usamochody;//cena danego towaru(ulamki)
unsigned long  ilewplacam,ileoddajesz,ilekupuje,stac,miec='\0',ilesprzedaje,wcale,wkawa,wherbata,wtyton,wzboze,wropa,wbron,wnarkotyki,wvideo,wdrukarki,wsamochody;//wartosc danego towaru (cena*ilosc
short int wucale,wukawa,wuherbata,wutyton,wuzboze,wuropa,wubron,wunarkotyki,wuvideo,wudrukarki,wusamochody;//wartosc ulamkowa danego towaru (cena*ilosc)
unsigned long cdlug=25000,cgotuwa=10000,cakcja=0,psplata;
short int x,x2,ugotuwa=0,uakcja=0,pdlug=0,ilepozyczasz;
char m=0,kupno,sprzedarz,corobimy,*string;
randomize();
clrscr();
textcolor(1);textbackground(3);
/*
gotoxy(16,2);cprintf("⁄ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒø\n\r");
gotoxy(16,3);cprintf("≥            Krzysztof Szumny - Noisy           ≥\n\r");
gotoxy(16,4);cprintf("≥  ma zaszczyt przedstawic panstwu program pt.  ≥\n\r");
gotoxy(16,5);cprintf("≥                                               ≥\n\r");
gotoxy(16,6);cprintf("≥            \" B I Z N E S M A N \"              ≥\n\r");
gotoxy(16,7);cprintf("≥                                               ≥\n\r");
gotoxy(16,8);cprintf("¿ƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒƒŸ\n\r");
*/
gotoxy(16,2);cprintf("…ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕª");textcolor(txn);textbackground(tlon);cprintf("            2004");textcolor(1);textbackground(3);
gotoxy(16,3);cprintf("∫            Krzysztof Szumny - Noisy           ∫\n\r");
gotoxy(16,4);cprintf("∫  ma zaszczyt przedstawic panstwu program pt.  ∫\n\r");
gotoxy(16,5);cprintf("∫                                               ∫\n\r");
gotoxy(16,6);cprintf("∫            \" B I Z N E S M A N \"              ∫\n\r");
gotoxy(16,7);cprintf("∫                                               ∫\n\r");
gotoxy(16,8);cprintf("∫       noisy@autograf.pl    GG:2288009         ∫\n\r");
gotoxy(16,9);cprintf("»ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕº\n\r");

textcolor(txn);textbackground(tlon);
cprintf("\n\r       Ten program ma status ");
textcolor(txc);
cprintf("FREEWARE");
textcolor(txn);
cprintf(", oznacza to, ze moæesz go darmowo wykorzy-stywaÜ do wszelakich celow. Program");
textcolor(txc);
cprintf(" \"BIZNESMAN\"");
textcolor(txn);
cprintf(" to");
textcolor(txc);
cprintf(" GRA");
textcolor(txn);
cprintf(" typu handlowego, polega- jaca na kupnie oraz sprzedaæy r¢ænego rodzaju towar¢w posiadajacych r¢æne ceny wr¢ænych miastach, po kt¢rych sie poruszamy. Moæemy kupowaÜ, sprzedawaÜ, poæyczaÜi oddawaÜ pieni•dze, a takæe lokowaÜ nasze pieni•dze w r¢ænych bankach lub ak-  cjach udziaàowych r¢ænych przedsiebiorstw, firm, restauracji, itd. itp.\n\r       Aby poæyczyÜ, oddaÜ, lub ulokowaÜ pieni•dze w banku, korzystamy z pomocy zaufanego przyjaciela. Podczas naszych transakcji spotkaÜ nas mog• r¢æne przyje-mne i nieprzyjemne niespodzianki, powoduj•ce ");
textcolor(txc);
cprintf("utrate "); // mistake
textcolor(txn);
cprintf("towar¢w lub pieniedzy, albo teæ "); //mistake
textcolor(txc);
cprintf("wzrost ");
textcolor(txn);
cprintf("stanu naszego konta. Musimy takæe uwaæaÜ na banki, bo niekt¢re z nichmog• zbankrutowaÜ. Moæemy zbankrutowaÜ r¢wnieæ my, tak wiec pilnujmy, aby nasz  dàug nadmiernie nie wzrosà. A wiec ruszajmy w droge.");
cprintf("\n\r                                  Przyjemnych podrozy i sukcesow w handlu !!!");
textcolor(txc);
cprintf("\n\rWcisnij dowolny klawisz by rozpocz•Ü gre.");
getch();
do{textcolor(txc);textbackground(tlon);clrscr();}
while(0);

do{
clrscr();
if(rob=='w'||rob=='W')
{

ckawa=random(1500)+501;
ukawa=random(100);

cherbata=random(1500)+501;
uherbata=random(100);

ctyton=random(1500)+501;
utyton=random(100);

czboze=random(1600)+401;
uzboze=random(100);

cropa=random(3000)+501;
uropa=random(100);

cbron=random(3000)+501;
ubron=random(100);

cnarkotyki=random(6000)+501;
unarkotyki=random(100);

cvideo=random(3000)+501;
uvideo=random(100);

cdrukarki=random(3000)+1001;
udrukarki=random(100);

csamochody=random(6000)+2501;
usamochody=random(100);

cmicro=random(3000)+5001;

cphilips=random(3000)+3001;

cferari=random(3000)+1501;

cbmw=random(3000)+1501;

cmcdonald=random(3000)+501;

csiemens=random(3000)+2501;

cnokia=random(3000)+2501;

cdlug=cdlug+(cdlug*pdlug/100);

pdlug=random(15)+11;

bszwaj+=bszwaj*(random(4)+5)/100;
bfran+=bfran*(random(5)+4)/100;
bbryt+=bbryt*(random(5)+3)/100;
bkanad+=bkanad*(random(5)+3)/100;
bpol+=bpol*(random(4)+2)/100;
bczecz+=bczecz*(random(4)+1)/100;

cgotuwa+=(ugotuwa/100);
ugotuwa%=100;
 while(ugotuwa<0)
 {
  if(0>ugotuwa)
  {
  cgotuwa--;
  ugotuwa+=100;
  cgotuwa+=(ugotuwa/100);
  ugotuwa%=100;
  }
 }

}
textcolor(txc);
cprintf(">> PROGRAM NAPISAù KRZYSZTOF SZUMNY (NOISY) - NOISY@AUTOGRAF.PL - GG: 2288009 <<");
textbackground(tlow);
textcolor(txw);
cprintf("Towar :           Cena :     Posiadana iloòÜ :           Aktualna wartoòÜ :     ");
textbackground(tlon);

textcolor(txc);
cprintf("K");
textcolor(txn);
cprintf("awa............. ");
textcolor(txc);
if(ckawa<1000){cprintf(" ");}
cprintf("%d.",ckawa);
if(ukawa<10){cprintf("0");}
cprintf("%d",ukawa);
textcolor(txn);
cprintf(" $");
i=18;
ilosc=ilkawa;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<ilkawa;
textcolor(txn);
cprintf(" ton ");
i=23;
wukawa=(ukawa*ilkawa)%100;
wkawa=ilkawa*ckawa+(ukawa*ilkawa)/100;
ilosc=wkawa;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<wkawa<<".";
if(wukawa<10){cprintf("0");}
cprintf("%d $",wukawa);




textcolor(txc);
cprintf("H");
textcolor(txn);
cprintf("erbata.......... ");
textcolor(txc);
if(cherbata<1000){cprintf(" ");}
cprintf("%d.",cherbata);
if(uherbata<10){cprintf("0");}
cprintf("%d",uherbata);
textcolor(txn);
cprintf(" $");
i=18;
ilosc=ilherbata;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<ilherbata;
textcolor(txn);
cprintf(" ton ");
i=23;
wuherbata=(uherbata*ilherbata)%100;
wherbata=ilherbata*cherbata+(uherbata*ilherbata)/100;
ilosc=wherbata;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<wherbata<<".";
if(wuherbata<10){cprintf("0");}
cprintf("%d $",wuherbata);



textcolor(txc);
cprintf("T");
textcolor(txn);
cprintf("yto‰............ ");
textcolor(txc);
if(ctyton<1000){cprintf(" ");}
cprintf("%d.",ctyton);
if(utyton<10){cprintf("0");}
cprintf("%d",utyton);
textcolor(txn);
cprintf(" $");
i=18;
ilosc=iltyton;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<iltyton;
textcolor(txn);
cprintf(" ton ");
i=23;
wutyton=(utyton*iltyton)%100;
wtyton=iltyton*ctyton+(utyton*iltyton)/100;
ilosc=wtyton;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<wtyton<<".";
if(wutyton<10){cprintf("0");}
cprintf("%d $",wutyton);



textcolor(txc);
cprintf("Z");
textcolor(txn);
cprintf("boæe............ ");
textcolor(txc);
if(czboze<1000){cprintf(" ");}
cprintf("%d.",czboze);
if(uzboze<10){cprintf("0");}
cprintf("%d",uzboze);
textcolor(txn);
cprintf(" $");
i=18;
ilosc=ilzboze;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<ilzboze;
textcolor(txn);
cprintf(" ton ");
i=23;
wuzboze=(uzboze*ilzboze)%100;
wzboze=ilzboze*czboze+(uzboze*ilzboze)/100;
ilosc=wzboze;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<wzboze<<".";
if(wuzboze<10){cprintf("0");}
cprintf("%d $",wuzboze);




textcolor(txc);
cprintf("R");
textcolor(txn);
cprintf("opa naftowa..... ");
textcolor(txc);
if(cropa<1000){cprintf(" ");}
cprintf("%d.",cropa);
if(uropa<10){cprintf("0");}
cprintf("%d",uropa);
textcolor(txn);
cprintf(" $");
i=18;
ilosc=ilropa;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<ilropa;
textcolor(txn);
cprintf(" ton ");
i=23;
wuropa=(uropa*ilropa)%100;
wropa=ilropa*cropa+(uropa*ilropa)/100;
ilosc=wropa;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<wropa<<".";
if(wuropa<10){cprintf("0");}
cprintf("%d $",wuropa);

textcolor(txc);
cprintf("B");
textcolor(txn);
cprintf("ro‰............. ");
textcolor(txc);
if(cbron<1000){cprintf(" ");}
cprintf("%d.",cbron);
if(ubron<10){cprintf("0");}
cprintf("%d",ubron);
textcolor(txn);
cprintf(" $");
i=18;
ilosc=ilbron;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<ilbron;
textcolor(txn);
cprintf(" szt.");
i=23;
wubron=(ubron*ilbron)%100;
wbron=ilbron*cbron+(ubron*ilbron)/100;
ilosc=wbron;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<wbron<<".";
if(wubron<10){cprintf("0");}
cprintf("%d $",wubron);



textcolor(txc);
cprintf("N");
textcolor(txn);
cprintf("arkotyki........ ");
textcolor(txc);
if(cnarkotyki<1000){cprintf(" ");}
cprintf("%d.",cnarkotyki);
if(unarkotyki<10){cprintf("0");}
cprintf("%d",unarkotyki);
textcolor(txn);
cprintf(" $");
i=18;
ilosc=ilnarkotyki;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<ilnarkotyki;
textcolor(txn);
cprintf(" kg  ");
i=23;
wunarkotyki=(unarkotyki*ilnarkotyki)%100;
wnarkotyki=ilnarkotyki*cnarkotyki+(unarkotyki*ilnarkotyki)/100;
ilosc=wnarkotyki;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<wnarkotyki<<".";
if(wunarkotyki<10){cprintf("0");}
cprintf("%d $",wunarkotyki);



textcolor(txc);
cprintf("V");
textcolor(txn);
cprintf("ideo............ ");
textcolor(txc);
if(cvideo<1000){cprintf(" ");}
cprintf("%d.",cvideo);
if(uvideo<10){cprintf("0");}
cprintf("%d",uvideo);
textcolor(txn);
cprintf(" $");
i=18;
ilosc=ilvideo;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<ilvideo;
textcolor(txn);
cprintf(" szt.");
i=23;
wuvideo=(uvideo*ilvideo)%100;
wvideo=ilvideo*cvideo+(uvideo*ilvideo)/100;
ilosc=wvideo;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<wvideo<<".";
if(wuvideo<10){cprintf("0");}
cprintf("%d $",wuvideo);



textcolor(txc);
cprintf("D");
textcolor(txn);
cprintf("rukarki......... ");
textcolor(txc);
if(cdrukarki<1000){cprintf(" ");}
cprintf("%d.",cdrukarki);
if(udrukarki<10){cprintf("0");}
cprintf("%d",udrukarki);
textcolor(txn);
cprintf(" $");
i=18;
ilosc=ildrukarki;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<ildrukarki;
textcolor(txn);
cprintf(" szt.");
i=23;
wudrukarki=(udrukarki*ildrukarki)%100;
wdrukarki=ildrukarki*cdrukarki+(udrukarki*ildrukarki)/100;
ilosc=wdrukarki;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<wdrukarki<<".";
if(wudrukarki<10){cprintf("0");}
cprintf("%d $",wudrukarki);



textcolor(txc);
cprintf("S");
textcolor(txn);
cprintf("amochody........");
if(csamochody<10000){cprintf(" ");}
textcolor(txc);
cprintf("%d.",csamochody);
if(usamochody<10){cprintf("0");}
cprintf("%d",usamochody);
textcolor(txn);
cprintf(" $");
i=18;
ilosc=ilsamochody;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<ilsamochody;
textcolor(txn);
cprintf(" szt.");
i=23;
wusamochody=(usamochody*ilsamochody)%100;
wsamochody=ilsamochody*csamochody+(usamochody*ilsamochody)/100;
ilosc=wsamochody;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<wsamochody<<".";
if(wusamochody<10){cprintf("0");}
cprintf("%d $",wusamochody);



textcolor(txc);
textcolor(txn);
cprintf("---------------------------------------------");
textcolor(txw);
textbackground(tlow);
cprintf("RAZEM:");
textcolor(txn);
textbackground(tlon);
i=23;
wucale=wukawa+wuherbata+wutyton+wuzboze+wuropa+wubron+wunarkotyki+wuvideo+wudrukarki+wusamochody;
wcale=wkawa+wherbata+wtyton+wzboze+wropa+wbron+wnarkotyki+wvideo+wdrukarki+wsamochody+(wucale/100);
wucale%=100;
ilosc=wcale;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<wcale<<".";
if(wucale<10){cout<<"0";}
cout<<wucale;cprintf(" $");




textcolor(txn);
textbackground(tlon);
cprintf("Stan twojego dàugu....");
i=12;
ilosc=cdlug;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<cdlug<<".00";
cprintf(" $");
if(0<cdlug)
{
cprintf("     Procent wzrostu dàugu::        ");

if(pdlug<10){cout<<"0";}
cout<<pdlug;
cprintf(" %");
}
else{cprintf("\n\r");}




cprintf("Stan twojego konta....");
i=12;
ilosc=cgotuwa;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<cgotuwa<<".";
if(ugotuwa<10){cout<<"0";}
cout<<ugotuwa;
cprintf(" $    ");
if(0<cdlug)
{
cprintf(" Szansa na spàate::            ");
psplata=cgotuwa*100/cdlug;
if(psplata>100||psplata<0)
{psplata=100;}
if(psplata<100){cout<<" ";}
if(psplata<10){cout<<" ";}
cout<<psplata;
cprintf(" %");
}
else{cprintf("\n\r");}

cprintf("W bankach posiadasz...");
i=12;
ilosc=bszwaj+bfran+bbryt+bkanad+bpol+bczecz;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<bszwaj+bfran+bbryt+bkanad+bpol+bczecz<<".00 ";
cprintf("$     -----------------------------------");


cprintf("W akcjach posiadasz...");
i=12;
cakcja=(ilmicro*cmicro)+(ilphilips*cphilips)+(ilferari*cferari)+(ilbmw*cbmw)+(ilmcdonald*cmcdonald)+(ilnokia*cnokia)+(ilsiemens*csiemens);
ilosc=cakcja;
while(i!=0)
{ if(ilosc<10) {cout<<" ";} i--; ilosc/=10;}
cout<<cakcja<<".";
if(uakcja<10){cout<<"0";}
cout<<uakcja;
cprintf(" $     Aktualnie przebywasz ");
textcolor(txc);
switch(m)
  {
    case 'a': cprintf("w Amsterdamie ");break;
    case 'b': cprintf("w Bagdadzie   ");break;
    case 'c': cprintf("w Chicago     ");break;
    case 'd': cprintf("w Denver      ");break;
    case 'e': cprintf("w Essen       ");break;
    case 'f': cprintf("we Florencji  ");break;
    case 'g': cprintf("w Genewie     ");break;
    case 'h': cprintf("w Hamburgu    ");break;
    case 'i': cprintf("w Istambule   ");break;
    case 'j': cprintf("w Jarocinie   ");break;
    case 'k': cprintf("w Krakowie    ");break;
    case 'l': cprintf("w Londynie    ");break;
    case 'm': cprintf("w Monachium   ");break;
    case 'n': cprintf("w Nowym Jorku ");break;
    case 'o': cprintf("w Oslo        ");break;
    case 'p': cprintf("w Pradze      ");break;
    case 'r': cprintf("w Rzymie      ");break;
    case 's': cprintf("w Sztokholmie ");break;
    case 't': cprintf("w Tokio       ");break;
    case 'u': cprintf("w Ustce       ");break;
    case 'w': cprintf("w Warszawie   ");break;
    case 'z': cprintf("w Zurychu     ");break;
    case 0 : cprintf("u przyjaciela ");break;
    case 1 : cprintf("w wiezieniu   ");break;
    default: break;
  }



textcolor(txw);
textbackground(tlow);
cprintf("-------------------- Masz do wyboru nast©puj•ce moæliwoòci: --------------------");
textcolor(txc);
textbackground(tlon);
cprintf("        K");
textcolor(txn);
cprintf("upno, ");
textcolor(txc);
cprintf("S");
textcolor(txn);
cprintf("przedarz, ");
textcolor(txc);
cprintf("W");
textcolor(txn);
cprintf("yjazd, ");
textcolor(txc);
cprintf("A");
textcolor(txn);
cprintf("kcje, obsàuga ");
textcolor(txc);
cprintf("D");
textcolor(txn);
cprintf("àugu czy ");
textcolor(txc);
cprintf("B");
textcolor(txn);
cprintf("anki?\r\n");
textcolor(txc);
cprintf("Q");
textcolor(txn);
cprintf("- Wyjòcie z programu, ");
textcolor(txc);
cprintf("O");
textcolor(txn);
cprintf("pcje gry.          < Wciònij pierwsz• liter© wyboru. > ");
textcolor(txc);
do{rob=getch();}
while(!(rob=='q'||rob=='Q'||rob=='k'||rob=='K'||rob=='s'||rob=='S'||rob=='w'||rob=='W'||rob=='a'||rob=='A'||rob=='d'||rob=='D'||rob=='b'||rob=='B'||rob=='o'||rob=='O'));


if(rob=='w'||rob=='W')
{
textcolor(txn);
gotoxy(1,19);
cprintf("Miata do ktorych mozesz sie wybrac: ");textcolor(txc);cprintf("A");textcolor(txn);cprintf("msterdam,     ");textcolor(txc);cprintf("H");textcolor(txn);cprintf("amburg,       ");textcolor(txc);cprintf("O");textcolor(txn);cprintf("slo,         ");
cprintf("                                    ");textcolor(txc);cprintf("B");textcolor(txn);cprintf("agdad,        ");textcolor(txc);cprintf("I");textcolor(txn);cprintf("stambul,      ");textcolor(txc);cprintf("P");textcolor(txn);cprintf("raga,        ");
cprintf("                                    ");textcolor(txc);cprintf("C");textcolor(txn);cprintf("hicago,       ");textcolor(txc);cprintf("J");textcolor(txn);cprintf("arocin,       ");textcolor(txc);cprintf("R");textcolor(txn);cprintf("zym,         ");
cprintf("                                    ");textcolor(txc);cprintf("D");textcolor(txn);cprintf("enver,        ");textcolor(txc);cprintf("K");textcolor(txn);cprintf("rakow,        ");textcolor(txc);cprintf("S");textcolor(txn);cprintf("ztokholm,    ");
cprintf("                                    ");textcolor(txc);cprintf("E");textcolor(txn);cprintf("ssen,         ");textcolor(txc);cprintf("L");textcolor(txn);cprintf("ondyn,        ");textcolor(txc);cprintf("T");textcolor(txn);cprintf("okio,        ");
cprintf("                                    ");textcolor(txc);cprintf("F");textcolor(txn);cprintf("lorencja,     ");textcolor(txc);cprintf("M");textcolor(txn);cprintf("onachium,     ");textcolor(txc);cprintf("W");textcolor(txn);cprintf("arszawa,     ");
cprintf("                                    ");textcolor(txc);cprintf("G");textcolor(txn);cprintf("enewa,        ");textcolor(txc);cprintf("N");textcolor(txn);cprintf("owy Jork,     ");textcolor(txc);cprintf("Z");textcolor(txn);cprintf("urych       ");
textcolor(txc);

do{m=getch();}
while(!(m=='a'||m=='b'||m=='c'||m=='d'||m=='e'||m=='f'||m=='g'||m=='h'||m=='i'||m=='j'||m=='k'||m=='l'||m=='m'||m=='n'||m=='o'||m=='p'||m=='r'||m=='s'||m=='t'||m=='w'||m=='z'));
gotoxy(1,19);
clreol();
gotoxy(1,21);
clreol();
gotoxy(1,22);
clreol();
gotoxy(1,23);
clreol();
gotoxy(1,24);
clreol();
gotoxy(1,25);
clreol();
gotoxy(1,20);
clreol();

if((random(3)%2)==1)
{
 if(cgotuwa!=0||ugotuwa!=0)
   {
    if(cgotuwa>30){cprintf("             ZAPùACIùEó PODATEK OD HANDLU W WYSOKOóCI ");stac=(cgotuwa*(random(35)+20))/100;cout<<stac<<".";cgotuwa-=stac;stac=random(90)+10;cout<<stac<<" $ !!!";ugotuwa-=stac;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();}
    else{cprintf("             ZAPùACIùEó PODATEK OD HANDLU W WYSOKOóCI %d.",cgotuwa);if(ugotuwa<10){cprintf("0");}cprintf("%d $ !!!",ugotuwa);cgotuwa=ugotuwa=0;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();}
   }
}
else
  {
  switch(random(100))
        {
    case 0 : if(cgotuwa!=0||ugotuwa!=0){cprintf("         PRZEGRAùEó W KASYNIE WSZYSTKIE SWOJE PIENI§DZE !!!");ugotuwa=0;cgotuwa=0;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 1 : cprintf("            DOSTAùEó SPADEK PO KREWNYM W WYSOKOóCI 10000 $");cgotuwa+=10000;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;
    case 3 : if(cgotuwa>100){cprintf("     ZAPùACIùEó W SALONIE MODY RACHUNKI SWOJEJ ΩONY TJ. ");stac=(cgotuwa*(random(35)+20))/100;cout<<stac<<".";if(ugotuwa<10){cprintf("0");}cprintf("%d $ !!!",ugotuwa);cgotuwa-=stac;ugotuwa=0;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 4 : if(cgotuwa>1000){cprintf("     PODAROWAùEó %d.00 $ DLA BIEDNYCH DZIECI Z TADΩYKISTANU !!!",stac=(cgotuwa*(random(35)+20))/100);cgotuwa-=stac;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 5 : if(ilkawa!=0||ilherbata!=0||iltyton!=0||ilzboze!=0||ilropa!=0||ilbron!=0||ilnarkotyki!=0||ilvideo!=0||ildrukarki!=0||ilsamochody){cprintf("BYùO WùAMANIE DO MAGAYZN‡W TWOJEJ FIRMY. ZùODZIEJE ZD§ΩYLI UKRAóè POùOW® \n\r             WSZYSTKICH TOWAR‡W !!!");ilkawa/=2;ilherbata/=2;iltyton/=2;ilzboze/=2;ilropa/=2;ilbron/=2;ilnarkotyki/=2;ilvideo/=2;ildrukarki/=2;ilsamochody/=2;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 6 : if(cgotuwa!=0||ugotuwa!=0){cprintf("          PRZEGRAùEó W POKERA 90 % SWOICH PIENI®DZY !!!");ugotuwa=(ugotuwa/10)+((cgotuwa%10)*10);cgotuwa/=10;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 7 : if(cgotuwa>1000){cprintf("    ODDAùES HONOROWE DùUGI JEDNEGO ZE SWOJICH BRACI W WYSOKOóCI %d.",stac=(cgotuwa*(random(35)+20))/100);if(ugotuwa<10){cprintf("0");}cprintf("%d  $ !!!",ugotuwa);cgotuwa-=stac;ugotuwa=0;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 8 : if(cgotuwa>20){cprintf("           ZAPLACIùEó RACHUNEK ZA WAKACJE NA FLORYDZIE, CZYLI %d.",stac=(cgotuwa*(random(35)+20))/100);if(ugotuwa<10){cprintf("0");}cprintf("%d $ !!!",ugotuwa);cgotuwa-=stac;ugotuwa=0;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 9 : if(cgotuwa!=0&&ugotuwa!=0){cprintf("         ZOSTAùEó DOSZCZ®TNIE OKRADZIONY Z POSIADANYCH PIENI®DZY !!! ");cgotuwa=ugotuwa=0;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 10: if(bszwaj!=0&&bfran!=0&&bbryt!=0&&bkanad!=0&&(random(3)%3)==0){cprintf("BANKI ZACHODNIE BANKRUTUJ§. JEóLI POSIADAùES W NICH OSZCZEDNOóCI TO STRACIùEó   3/4  Z NICH !!!");bszwaj/=4;bfran/=4;bbryt/=4;bkanad/=4;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 11: if(cgotuwa>40){cprintf("          STRACIùES NA WYóCIGACH KONNYCH ");stac=(cgotuwa*(random(15)+10))/100;cout<<stac<<"."; if(ugotuwa<10){cprintf("0");}cprintf("%d $ !!!",ugotuwa);cgotuwa-=stac;ugotuwa=0;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 12: if(bszwaj!=0){cprintf("             BANK SZWAJCARSKI PODWOIù TWOJE WKAùADY!");bszwaj*=2;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 13: if(bczecz!=0){cprintf("          BANK CZECZE„SKI ZBANKRUTOWAù. STRACIùEó WSZYSTKIE OSZCZEDNOóCI !!!");bczecz=0;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 14: cprintf("             WYGRAùEó W POKERA 10000 $ !!!");cgotuwa+=10000;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;
    case 15: if(ilkawa!=0||ilherbata!=0||iltyton!=0||ilzboze!=0||ilropa!=0||ilbron!=0||ilnarkotyki!=0||ilvideo!=0||ildrukarki!=0||ilsamochody){cprintf("    TWOJE STATKI ZATONEùY. ZA ODSZKODOWANIE KUPIùEó 3/4 TOWAROW !!!");ilkawa=ilkawa*3/4;ilherbata=ilherbata*3/4;iltyton=iltyton*3/4;ilzboze=ilzboze*3/4;ilropa=ilropa*3/4;ilbron=ilbron*3/4;ilnarkotyki=ilnarkotyki*3/4;ilvideo=ilvideo*3/4;ildrukarki=ildrukarki*3/4;ilsamochody=ilsamochody*3/4;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 16: if(ilnarkotyki>100){cprintf("WPADùEó NA HANDLU NARKOTYKAMI. NASZCZEóCIE ADWOKAT WYCI§GN§ù CI® Z WI®ZIENIA\n\rLECZ ΩEBY GO SPùACIè MUSIAùEó WSZYSTKO SPRZEDAè I ZACI§GN§è DùUG W WYSOKOSCI \n\r100000 $ !!!");ilkawa=ilherbata=iltyton=ilzboze=ilropa=ilbron=ilnarkotyki=ilvideo=ildrukarki=ilsamochody=cgotuwa=ugotuwa=ilmicro=ilphilips=ilferari=ilbmw=ilmcdonald=ilsiemens=ilnokia=bszwaj=bfran=bbryt=bkanad=bpol=bczecz=0;cdlug+=100000;m=1;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 17: if(m=='b'&&ilbron>500){cprintf("       ZA SPROWADZENIE BRONI DO BAGDADU DOSTAùEó EXTRA PREMIE (10000 $) !!!");cgotuwa+=10000;gotoxy(30,23);cprintf("Wcisnij Enter.");getch();break;}    case 18: if(cgotuwa>50000000&&(bylo%7)!=0){bylo*=7;cprintf("       KUPIùEó KORZYSTN§ DLA CIEBIE USTAW® W POLSKIM PARLAMENCIE za 17,000,000 $ !!!");cgotuwa-=17000000;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 19: if(cgotuwa>200){cprintf(" TWOJA ΩONA MIAùA ZAùAMANIE NERWOWE. ZAPùACIùEó %d.",stac=(cgotuwa*(random(15)+1))/100);if(ugotuwa<10){cprintf("0");} cprintf("%d $ ZA JEJ TERAPEUTE !!!",ugotuwa);cgotuwa-=stac;ugotuwa=0;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 20: cprintf("     NA ULICY ZNALAZùEó PORTFEL, W KT‡RYM BYùO %d.99 $ !!!",stac=random(800)+200);cgotuwa+=stac;ugotuwa+=99;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;
    case 21: if(cgotuwa>25000000&&(bylo%5)!=0){bylo*=5;cprintf("       KUPIùEó SOBIE NA WùASNOóè NOWEGO ROLLS-ROYSA za 1000000 $ !!!");cgotuwa-=1000000;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 22: if((random(3)%2)==0){cprintf("              WYGRAùEó 5000 $ NA ZAKùADACH SPORTOWYCH !!!");cgotuwa+=5000;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 23: cprintf("WRAZ Z RODZIN§ WYGRAùEó 15000 $ W TELETURNIEJU FAMILIADA. NIESTETY NA ùEPKA\n\rWYSZùO TYLKO PO 3000 $ !!!");cgotuwa+=3000;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;
    case 24: if(cgotuwa>2000){cprintf("         PRZEGRAùEó ZAKùAD ZE SWOJIM KOLEG§. STRACIùEó 1000 $ !!!");cgotuwa-=1000;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 25: cprintf("       WYGRAùEó ZAKùAD ZE SWOJIM KOLEG§ O WARTOóCI 1000 $ !!!");cgotuwa+=1000;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;
    case 26: if(cdlug>20000){cprintf("W TYCH CI®ΩKICH DLA CIEBIE CZASACH TWOJA ΩONA PRZYJEùA NIEMORALN§ PROPOZYCJE,\n\rNIESTETY DOSTAùA TYLKO %d $ !!!",stac=random(1000)+1);cgotuwa+=stac;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 27: if(cgotuwa>100000000&&(bylo%3)!=0){bylo*=3;cprintf("     KUPIùEó OD \"NASA\" BILET NA WYCIECZKE W KOSMOS ZA 20,000,000 $ !!!");cgotuwa-=20000000;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 2:  if(1000>cgotuwa&&(random(4)%4)==0&&(bylo%2)!=0){bylo*=2;cprintf("           TRAFIùEó SZ‡STK® W DUΩYM LOTKU. WYGRAùEó ");stac=(random(10)+1)*1143211-42513;cout<<stac;cgotuwa+=stac;cprintf(".%d $ !!!!!",stac=random(90)+10);ugotuwa+=stac;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
    case 28: if(bpol!=0){cprintf("  BANK POLSKI PRZEWALUTOWAù TWOJE WKùADY. STRACIùEó NA TYM 50 % OSZCZEDNOSCI!!!");bpol/=2;gotoxy(30,23);cprintf("Wcisnij ENTER.");getch();break;}
        }
  }


}


if(rob=='k'||rob=='K')
{gotoxy(5,19);
clreol();
cprintf("Jaki towar kupujesz ?     ");
textcolor(txn);
cprintf("< Podaj pierwsza litere >\n\r");
clreol();
do{kupno=getch();}
while(!(kupno=='k'||kupno=='h'||kupno=='t'||kupno=='z'||kupno=='r'||kupno=='b'||kupno=='n'||kupno=='v'||kupno=='d'||kupno=='s'));
gotoxy(1,20);
clreol();
gotoxy(1,19);
clreol();
textcolor(txc);

do{gotoxy(1,19);
   switch(kupno)
   {
    case 'k': blum=ukawa;blum/=100;blum+=ckawa;cprintf("Ile kawy kupujesz < mozesz kupic  %d ton > ?                                     ",stac=cgotuwa/blum);break;
    case 'h': blum=uherbata;blum/=100;blum+=cherbata;cprintf("Ile herbaty kupujesz < mozesz kupic  %d ton > ?                                  ",stac=cgotuwa/blum);break;
    case 't': blum=utyton;blum/=100;blum+=ctyton;cprintf("Ile tytoniu kupujesz < mozesz kupic  %d ton > ?                                  ",stac=cgotuwa/blum);break;
    case 'z': blum=uzboze;blum/=100;blum+=czboze;cprintf("Ile zboza kupujesz < mozesz kupic  %d ton > ?                                    ",stac=cgotuwa/blum);break;
    case 'r': blum=uropa;blum/=100;blum+=cropa;cprintf("Ile ropy kupujesz < mozesz kupic  %d ton > ?                                     ",stac=cgotuwa/blum);break;
    case 'b': blum=ubron;blum/=100;blum+=cbron;cprintf("Ile broni kupujesz < mozesz kupic  %d szt. > ?                                   ",stac=cgotuwa/blum);break;
    case 'n': blum=unarkotyki;blum/=100;blum+=cnarkotyki;cprintf("Ile narkotykow kupujesz < mozesz kupic  %d kg > ?                                ",stac=cgotuwa/blum);break;
    case 'v': blum=uvideo;blum/=100;blum+=cvideo;cprintf("Ile video kupujesz < mozesz kupic  %d szt. > ?                                   ",stac=cgotuwa/blum);break;
    case 'd': blum=udrukarki;blum/=100;blum+=cdrukarki;cprintf("Ile drukarek kupujesz < mozesz kupic  %d szt. > ?                                ",stac=cgotuwa/blum);break;
    case 's': blum=usamochody;blum/=100;blum+=csamochody;cprintf("Ile samochodow kupujesz < mozesz kupic  %d szt. > ?                              ",stac=cgotuwa/blum);break;
    default: break;
   }
   gotoxy(1,20);clreol();
   cin>>string;
   gotoxy(1,20);clreol();
   gotoxy(1,21);clreol();
   gotoxy(1,22);clreol();
   gotoxy(1,23);clreol();
   gotoxy(1,24);clreol();
   gotoxy(1,25);clreol();
   ilekupuje=atoi(string);
   if(ilekupuje>stac||0>ilekupuje){gotoxy(1,19);cprintf("Niestety, nie masz tyle pieniedzy !             Wcisnij ENTER                   ");getchar();}
  }
while(ilekupuje>stac||0>ilekupuje);
 if(ilekupuje!=0)
  {
   switch(kupno)
   {
    case 'k': ilkawa+=ilekupuje;cgotuwa-=(ckawa*ilekupuje+(ukawa*ilekupuje/100));if(ugotuwa<(ilekupuje*ukawa%100)){cgotuwa--;ugotuwa+=100;}ugotuwa-=(ilekupuje*ukawa%100);       break;
    case 'h': ilherbata+=ilekupuje;cgotuwa-=(cherbata*ilekupuje+(uherbata*ilekupuje/100));if(ugotuwa<(ilekupuje*uherbata%100)){cgotuwa--;ugotuwa+=100;}ugotuwa-=(ilekupuje*uherbata%100);       break;
    case 't': iltyton+=ilekupuje;cgotuwa-=(ctyton*ilekupuje+(utyton*ilekupuje/100));if(ugotuwa<(ilekupuje*utyton%100)){cgotuwa--;ugotuwa+=100;}ugotuwa-=(ilekupuje*utyton%100);             break;
    case 'z': ilzboze+=ilekupuje;cgotuwa-=(czboze*ilekupuje+(uzboze*ilekupuje/100));if(ugotuwa<(ilekupuje*uzboze%100)){cgotuwa--;ugotuwa+=100;}ugotuwa-=(ilekupuje*uzboze%100);             break;
    case 'r': ilropa+=ilekupuje;cgotuwa-=(cropa*ilekupuje+(uropa*ilekupuje/100));if(ugotuwa<(ilekupuje*uropa%100)){cgotuwa--;ugotuwa+=100;}ugotuwa-=(ilekupuje*uropa%100);                break;
    case 'b': ilbron+=ilekupuje;cgotuwa-=(cbron*ilekupuje+(ubron*ilekupuje/100));if(ugotuwa<(ilekupuje*ubron%100)){cgotuwa--;ugotuwa+=100;}ugotuwa-=(ilekupuje*ubron%100);                break;
    case 'n':ilnarkotyki+=ilekupuje;cgotuwa-=(cnarkotyki*ilekupuje+(unarkotyki*ilekupuje/100));if(ugotuwa<(ilekupuje*unarkotyki%100)){cgotuwa--;ugotuwa+=100;}ugotuwa-=(ilekupuje*unarkotyki%100);       break;
    case 'v': ilvideo+=ilekupuje;cgotuwa-=(cvideo*ilekupuje+(uvideo*ilekupuje/100));if(ugotuwa<(ilekupuje*uvideo%100)){cgotuwa--;ugotuwa+=100;}ugotuwa-=(ilekupuje*uvideo%100);             break;
    case 'd': ildrukarki+=ilekupuje;cgotuwa-=(cdrukarki*ilekupuje+(udrukarki*ilekupuje/100));if(ugotuwa<(ilekupuje*udrukarki%100)){cgotuwa--;ugotuwa+=100;}ugotuwa-=(ilekupuje*udrukarki%100);    break;
    case 's': ilsamochody+=ilekupuje;cgotuwa-=(csamochody*ilekupuje+(usamochody*ilekupuje/100));if(ugotuwa<(ilekupuje*usamochody%100)){cgotuwa--;ugotuwa+=100;}ugotuwa-=(ilekupuje*usamochody%100); break;
    default: break;
   }
  }


}


if(rob=='s'||rob=='S')
{gotoxy(5,19);
clreol();
cprintf("Jaki towar sprzedajesz ?    \n\r ");
clreol();
cprintf("\n\r");
clreol();
cprintf("\n\r");
clreol();
cprintf("\n\r");
clreol();

textcolor(txn);
gotoxy(45,19);
cprintf("< Podaj pierwsza litere >\n\r");
clreol();
textcolor(txc);
do{sprzedarz=getch();}
while(!(sprzedarz=='k'||sprzedarz=='h'||sprzedarz=='t'||sprzedarz=='z'||sprzedarz=='r'||sprzedarz=='b'||sprzedarz=='n'||sprzedarz=='v'||sprzedarz=='d'||sprzedarz=='s'));
    gotoxy(1,19);clreol();
    switch(sprzedarz)
   {
    case 'k': if(ilkawa<1){     cprintf("Przecierz nie posiadasz kawy.                     Wcisnij ENTER");getchar();break;}cprintf("Ile kawy sprzedajesz < posiadasz  %d ton > ?                                     ",miec=ilkawa);x=45;break;
    case 'h': if(ilherbata<1){  cprintf("Przecierz nie posiadasz herbaty.                  Wcisnij ENTER");getchar();break;}cprintf("Ile herbaty sprzedajesz < posiadasz  %d ton > ?                                  ",miec=ilherbata);x=48;break;
    case 't': if(iltyton<1){    cprintf("Przecierz nie posiadasz tytoniu.                  Wcisnij ENTER");getchar();break;}cprintf("Ile tytoniu sprzedajesz < posiadasz  %d ton > ?                                  ",miec=iltyton);x=48;break;
    case 'z': if(ilzboze<1){    cprintf("Przecierz nie posiadasz zboza.                    Wcisnij ENTER");getchar();break;}cprintf("Ile zboza sprzedajesz < posiadasz  %d ton > ?                                    ",miec=ilzboze);x=46;break;
    case 'r': if(ilropa<1){     cprintf("Przecierz nie posiadasz ropy.                     Wcisnij ENTER");getchar();break;}cprintf("Ile ropy sprzedajesz < posiadasz  %d ton > ?                                     ",miec=ilropa);x=45;break;
    case 'b': if(ilbron<1){     cprintf("Przecierz nie posiadasz broni.                    Wcisnij ENTER");getchar();break;}cprintf("Ile broni sprzedajesz < posiadasz  %d szt. > ?                                   ",miec=ilbron);x=47;break;
    case 'n': if(ilnarkotyki<1){cprintf("Przecierz nie posiadasz narkotykow.               Wcisnij ENTER");getchar();break;}cprintf("Ile narkotykow sprzedajesz < posiadasz  %d kg > ?                                ",miec=ilnarkotyki);x=50;break;
    case 'v': if(ilvideo<1){    cprintf("Przecierz nie posiadasz video.                    Wcisnij ENTER");getchar();break;}cprintf("Ile video sprzedajesz < posiadasz  %d szt. > ?                                   ",miec=ilvideo);x=47;break;
    case 'd': if(ildrukarki<1){ cprintf("Przecierz nie posiadasz drukarek.                 Wcisnij ENTER");getchar();break;}cprintf("Ile drukarek sprzedajesz < posiadasz  %d szt. > ?                                ",miec=ildrukarki);x=50;break;
    case 's': if(ilsamochody<1){cprintf("Przecierz nie posiadasz samochodow.               Wcisnij ENTER");getchar();break;}cprintf("Ile samochodow sprzedajesz < posiadasz  %d szt. > ?                              ",miec=ilsamochody);x=52;break;
    default: break;
   }
  if(miec!='\0'){
   gotoxy(x,19);
   cin>>string;
   ilesprzedaje=atoi(string);

      gotoxy(1,19);
      if(ilesprzedaje>miec||0>ilesprzedaje){cprintf("Niestety nie masz tyle ");
                            switch(sprzedarz)
                                  {
                             case 'k': cprintf("kawy                        Wcisnij ENTER");break;
                             case 'h': cprintf("herbaty                     Wcisnij ENTER");break;
                             case 't': cprintf("tytoniu                     Wcisnij ENTER");break;
                             case 'z': cprintf("zboza                       Wcisnij ENTER");break;
                             case 'r': cprintf("ropy naftowej               Wcisnij ENTER");break;
                             case 'b': cprintf("broni                       Wcisnij ENTER");break;
                             case 'n': cprintf("narkotykow                  Wcisnij ENTER");break;
                             case 'v': cprintf("video                       Wcisnij ENTER");break;
                             case 'd': cprintf("drukarek                    Wcisnij ENTER");break;
                             case 's': cprintf("samochodow                  Wcisnij ENTER");break;
                                  }
                             getchar();
                           }
     else{
          switch(sprzedarz)
                {
                 case 'k':
                          ilkawa-=ilesprzedaje;
                          ugotuwa+=ilesprzedaje*ukawa;
                          cgotuwa+=(ckawa*ilesprzedaje)+(ugotuwa/100);
                          ugotuwa%=100;
                 break;
                 case 'h':
                         ilherbata-=ilesprzedaje;
                         ugotuwa+=ilesprzedaje*uherbata;
                         cgotuwa+=(cherbata*ilesprzedaje)+(ugotuwa/100);
                         ugotuwa%=100;
                 break;
                 case 't':
                         iltyton-=ilesprzedaje;
                         ugotuwa+=ilesprzedaje*utyton;
                         cgotuwa+=(ctyton*ilesprzedaje)+(ugotuwa/100);
                         ugotuwa%=100;
                 break;
                 case 'z':
                         ilzboze-=ilesprzedaje;
                         ugotuwa+=ilesprzedaje*uzboze;
                         cgotuwa+=(czboze*ilesprzedaje)+(ugotuwa/100);
                         ugotuwa%=100;
                 break;
                 case 'r':
                         ilropa-=ilesprzedaje;
                         ugotuwa+=ilesprzedaje*uropa;
                         cgotuwa+=(cropa*ilesprzedaje)+(ugotuwa/100);
                         ugotuwa%=100;
                 break;
                 case 'b':
                         ilbron-=ilesprzedaje;
                         ugotuwa+=ilesprzedaje*ubron;
                         cgotuwa+=(cbron*ilesprzedaje)+(ugotuwa/100);
                         ugotuwa%=100;

                 break;
                 case 'n':
                         ilnarkotyki-=ilesprzedaje;
                         ugotuwa+=ilesprzedaje*unarkotyki;
                         cgotuwa+=(cnarkotyki*ilesprzedaje)+(ugotuwa/100);
                         ugotuwa%=100;

                 break;
                 case 'v':
                         ilvideo-=ilesprzedaje;
                         ugotuwa+=ilesprzedaje*uvideo;
                         cgotuwa+=(cvideo*ilesprzedaje)+(ugotuwa/100);
                         ugotuwa%=100;

                 break;
                 case 'd':
                         ildrukarki-=ilesprzedaje;
                         ugotuwa+=ilesprzedaje*udrukarki;
                         cgotuwa+=(cdrukarki*ilesprzedaje)+(ugotuwa/100);
                         ugotuwa%=100;

                 break;
                 case 's':
                         ilsamochody-=ilesprzedaje;
                         ugotuwa+=ilesprzedaje*usamochody;
                         cgotuwa+=(csamochody*ilesprzedaje)+(ugotuwa/100);
                         ugotuwa%=100;

                 break;


                }

         }


     miec='\0';textcolor(txc);
                 }

}
if(rob=='a'||rob=='A')
{       textcolor(txc);
        clrscr();
        cout<<"     TWOJE KONTO OSOBISTE WYNOSI......            "<<cgotuwa<<".";if(ugotuwa<10){cprintf("0");}
        cprintf("%d $\n\r--------------------------------------------------------------------------------",ugotuwa);
        textcolor(tlon);
        textbackground(tlow);
        cprintf(" Akcje do kupienia lub sprzedania:       Kurs:            Ilosc:     Wartosc:   ");
        textcolor(txn);
        textbackground(0);

        cprintf("Akcje firmy \"");textcolor(txc);cprintf("M");textcolor(txn);cprintf("icrosoft\".........         ");textcolor(txc);cprintf("%d.00 ",cmicro);textcolor(txn);cprintf("$");i=12;ilosc=ilmicro;while(i!=0){ if(ilosc<10) {cprintf(" ");} i--; ilosc/=10;}cprintf("%d",ilmicro);i=10;ilosc=wmicro=cmicro*ilmicro;while(i!=0){ if(ilosc<10) {cprintf(" ");} i--; ilosc/=10;}cout<<wmicro<<".00 $\n\r";
        cprintf("Akcje firmy \"");textcolor(txc);cprintf("P");textcolor(txn);cprintf("hilips\"...........         ");textcolor(txc);cprintf("%d.00 ",cphilips);textcolor(txn);cprintf("$");i=12;ilosc=ilphilips;while(i!=0){ if(ilosc<10) {cprintf(" ");} i--; ilosc/=10;}cprintf("%d",ilphilips);i=10;ilosc=wphilips=cphilips*ilphilips;while(i!=0){ if(ilosc<10) {cprintf(" ");} i--; ilosc/=10;}cout<<wphilips<<".00 $\n\r";
        cprintf("Akcje firmy \"");textcolor(txc);cprintf("F");textcolor(txn);cprintf("erari\"............         ");textcolor(txc);cprintf("%d.00 ",cferari);textcolor(txn);cprintf("$");i=12;ilosc=ilferari;while(i!=0){ if(ilosc<10) {cprintf(" ");} i--; ilosc/=10;}cprintf("%d",ilferari);i=10;ilosc=wferari=cferari*ilferari;while(i!=0){ if(ilosc<10) {cprintf(" ");} i--; ilosc/=10;}cout<<wferari<<".00 $\n\r";
        cprintf("Akcje firmy \"");textcolor(txc);cprintf("B");textcolor(txn);cprintf("MW\"...............         ");textcolor(txc);cprintf("%d.00 ",cbmw);textcolor(txn);cprintf("$");i=12;ilosc=ilbmw;while(i!=0){ if(ilosc<10) {cprintf(" ");} i--; ilosc/=10;}cprintf("%d",ilbmw);i=10;ilosc=wbmw=cbmw*ilbmw;while(i!=0){ if(ilosc<10) {cprintf(" ");} i--; ilosc/=10;}cout<<wbmw<<".00 $\n\r";
        cprintf("Akcje firmy \"Mc");textcolor(txc);cprintf("D");textcolor(txn);cprintf("onalds\".........         ");textcolor(txc);if(cmcdonald<1000){cprintf(" ");}cprintf("%d.00 ",cmcdonald);textcolor(txn);cprintf("$");i=12;ilosc=ilmcdonald;while(i!=0){ if(ilosc<10) {cprintf(" ");} i--; ilosc/=10;}cprintf("%d",ilmcdonald);i=10;ilosc=wmcdonald=cmcdonald*ilmcdonald;while(i!=0){ if(ilosc<10) {cprintf(" ");} i--; ilosc/=10;}cout<<wmcdonald<<".00 $\n\r";
        cprintf("Akcje firmy \"");textcolor(txc);cprintf("S");textcolor(txn);cprintf("iemens\"...........         ");textcolor(txc);cprintf("%d.00 ",csiemens);textcolor(txn);cprintf("$");i=12;ilosc=ilsiemens;while(i!=0){ if(ilosc<10) {cprintf(" ");} i--; ilosc/=10;}cprintf("%d",ilsiemens);i=10;ilosc=wsiemens=csiemens*ilsiemens;while(i!=0){ if(ilosc<10) {cprintf(" ");} i--; ilosc/=10;}cout<<wsiemens<<".00 $\n\r";
        cprintf("Akcje firmy \"");textcolor(txc);cprintf("N");textcolor(txn);cprintf("okia\".............         ");textcolor(txc);cprintf("%d.00 ",cnokia);textcolor(txn);cprintf("$");i=12;ilosc=ilnokia;while(i!=0){ if(ilosc<10) {cprintf(" ");} i--; ilosc/=10;}cprintf("%d",ilnokia);i=10;ilosc=wnokia=cnokia*ilnokia;while(i!=0){ if(ilosc<10) {cprintf(" ");} i--; ilosc/=10;}cout<<wnokia<<".00 $\n\r";
        cprintf("---------------------------------------------------------RAZEM:");i=10;ilosc=wmicro+wphilips+wferari+wbmw+wmcdonald+wnokia+wsiemens;while(i!=0){ if(ilosc<10) {cprintf(" ");} i--; ilosc/=10;}cout<<cakcja<<".00 $";
        textcolor(txc);cprintf("\n\rK");textcolor(txn);cprintf("upujemy, ");textcolor(txc);cprintf("S");textcolor(txn);cprintf("przedajemy czy ");textcolor(txc);cprintf("W");textcolor(txn);cprintf("racamy?");textcolor(txc);
        do{corobimy=getch();}while(corobimy!='s'&&corobimy!='k'&&corobimy!='w'&&corobimy!='S'&&corobimy!='K'&&corobimy!='W');
        switch(corobimy)
        {
        case 'k':
             gotoxy(1,12);
             clreol();
             cprintf("\rKtore akcje kupujesz (Q-Powrot) ?");
             do{corobimy=getch();}while(corobimy!='m'&&corobimy!='p'&&corobimy!='f'&&corobimy!='b'&&corobimy!='d'&&corobimy!='s'&&corobimy!='n'&&corobimy!='q');
             textcolor(txn);
             cprintf("\n\rWartosc jednej akcji firmy \"");
               switch(corobimy)
                     {

                case 'm':  cprintf("Microsoft\" wynosi  ");
                           textcolor(txc);cprintf("%d.00",cmicro);
                           textcolor(txn);cprintf(" $\n\rMozesz kupic        ");
                           textcolor(txc);cprintf("%d",cgotuwa/cmicro);
                           textcolor(txn);cprintf(" tych akcji.\n\rIle kupujesz ? ");
                           cin>>ilekupuje;
                           if(ilekupuje>(cgotuwa/cmicro)||(0>ilekupuje))
                           {
                            gotoxy(1,12);
                            clreol();
                            cprintf("Na tyle akcji nie wystarczy tobie pieniedzy !!!");
                            gotoxy(1,13);
                            clreol();textcolor(txc);cprintf("                  Wcisnij ENTER");
                            gotoxy(1,14);
                            clreol();
                            gotoxy(1,15);
                            clreol();
                            gotoxy(1,16);
                            clreol();
                            gotoxy(1,17);
                            clreol();
                            gotoxy(32,13);
                            getch();
                           }
                           else{ilmicro+=ilekupuje;cgotuwa-=(cmicro*ilekupuje);}
                break;

                case 'p':  cprintf("Philips\" wynosi  ");
                           textcolor(txc);cprintf("%d.00",cmicro);
                           textcolor(txn);cprintf(" $\n\rMozesz kupic        ");
                           textcolor(txc);cprintf("%d",cgotuwa/cphilips);
                           textcolor(txn);cprintf(" tych akcji.\n\rIle kupujesz ? ");
                           cin>>ilekupuje;
                           if(ilekupuje>(cgotuwa/cphilips)||(0>ilekupuje))
                           {
                            gotoxy(1,12);
                            clreol();
                            cprintf("Na tyle akcji nie wystarczy tobie pieniedzy !!!");
                            gotoxy(1,13);
                            clreol();textcolor(txc);cprintf("                  Wcisnij ENTER");
                            gotoxy(1,14);
                            clreol();
                            gotoxy(1,15);
                            clreol();
                            gotoxy(1,16);
                            clreol();
                            gotoxy(1,17);
                            clreol();
                            gotoxy(32,13);
                            getch();
                           }
                           else{ilphilips+=ilekupuje;cgotuwa-=(cphilips*ilekupuje);}
                break;

                case 'f':  cprintf("Ferari\" wynosi  ");
                           textcolor(txc);cprintf("%d.00",cferari);
                           textcolor(txn);cprintf(" $\n\rMozesz kupic        ");
                           textcolor(txc);cprintf("%d",cgotuwa/cferari);
                           textcolor(txn);cprintf(" tych akcji.\n\rIle kupujesz ? ");
                           cin>>ilekupuje;
                           if(ilekupuje>(cgotuwa/cferari)||(0>ilekupuje))
                           {
                            gotoxy(1,12);
                            clreol();
                            cprintf("Na tyle akcji nie wystarczy tobie pieniedzy !!!");
                            gotoxy(1,13);
                            clreol();textcolor(txc);cprintf("                  Wcisnij ENTER");
                            gotoxy(1,14);
                            clreol();
                            gotoxy(1,15);
                            clreol();
                            gotoxy(1,16);
                            clreol();
                            gotoxy(1,17);
                            clreol();
                            gotoxy(32,13);
                            getch();
                           }
                           else{ilferari+=ilekupuje;cgotuwa-=(cferari*ilekupuje);}
                break;

                case 'b':  cprintf("BMW\" wynosi  ");
                           textcolor(txc);cprintf("%d.00",cbmw);
                           textcolor(txn);cprintf(" $\n\rMozesz kupic        ");
                           textcolor(txc);cprintf("%d",cgotuwa/cbmw);
                           textcolor(txn);cprintf(" tych akcji.\n\rIle kupujesz ? ");
                           cin>>ilekupuje;
                           if(ilekupuje>(cgotuwa/cbmw)||(0>ilekupuje))
                           {
                            gotoxy(1,12);
                            clreol();
                            cprintf("Na tyle akcji nie wystarczy tobie pieniedzy !!!");
                            gotoxy(1,13);
                            clreol();textcolor(txc);cprintf("                  Wcisnij ENTER");
                            gotoxy(1,14);
                            clreol();
                            gotoxy(1,15);
                            clreol();
                            gotoxy(1,16);
                            clreol();
                            gotoxy(1,17);
                            clreol();
                            gotoxy(32,13);
                            getch();
                           }
                           else{ilbmw+=ilekupuje;cgotuwa-=(cbmw*ilekupuje);}
                break;

                case 'd':  cprintf("McDonalds\" wynosi  ");
                           textcolor(txc);cprintf("%d.00",cmcdonald);
                           textcolor(txn);cprintf(" $\n\rMozesz kupic        ");
                           textcolor(txc);cprintf("%d",cgotuwa/cmcdonald);
                           textcolor(txn);cprintf(" tych akcji.\n\rIle kupujesz ? ");
                           cin>>ilekupuje;
                           if(ilekupuje>(cgotuwa/cmcdonald)||(0>ilekupuje))
                           {
                            gotoxy(1,12);
                            clreol();
                            cprintf("Na tyle akcji nie wystarczy tobie pieniedzy !!!");
                            gotoxy(1,13);
                            clreol();textcolor(txc);cprintf("                  Wcisnij ENTER");
                            gotoxy(1,14);
                            clreol();
                            gotoxy(1,15);
                            clreol();
                            gotoxy(1,16);
                            clreol();
                            gotoxy(1,17);
                            clreol();
                            gotoxy(32,13);
                            getch();
                           }
                           else{ilmcdonald+=ilekupuje;cgotuwa-=(cmcdonald*ilekupuje);}
                break;


                case 's':  cprintf("Siemens\" wynosi  ");
                           textcolor(txc);cprintf("%d.00",csiemens);
                           textcolor(txn);cprintf(" $\n\rMozesz kupic        ");
                           textcolor(txc);cprintf("%d",cgotuwa/csiemens);
                           textcolor(txn);cprintf(" tych akcji.\n\rIle kupujesz ? ");
                           cin>>ilekupuje;
                           if(ilekupuje>(cgotuwa/csiemens)||(0>ilekupuje))
                           {
                            gotoxy(1,12);
                            clreol();
                            cprintf("Na tyle akcji nie wystarczy tobie pieniedzy !!!");
                            gotoxy(1,13);
                            clreol();textcolor(txc);cprintf("                  Wcisnij ENTER");
                            gotoxy(1,14);
                            clreol();
                            gotoxy(1,15);
                            clreol();
                            gotoxy(1,16);
                            clreol();
                            gotoxy(1,17);
                            clreol();
                            gotoxy(32,13);
                            getch();
                           }
                           else{ilsiemens+=ilekupuje;cgotuwa-=(csiemens*ilekupuje);}
                break;

                case 'n':  cprintf("Nokia\" wynosi  ");
                           textcolor(txc);cprintf("%d.00",cnokia);
                           textcolor(txn);cprintf(" $\n\rMozesz kupic        ");
                           textcolor(txc);cprintf("%d",cgotuwa/cnokia);
                           textcolor(txn);cprintf(" tych akcji.\n\rIle kupujesz ? ");
                           cin>>ilekupuje;
                           if(ilekupuje>(cgotuwa/cnokia)||(0>ilekupuje))
                           {
                            gotoxy(1,12);
                            clreol();
                            cprintf("Na tyle akcji nie wystarczy tobie pieniedzy !!!");
                            gotoxy(1,13);
                            clreol();textcolor(txc);cprintf("                  Wcisnij ENTER");
                            gotoxy(1,14);
                            clreol();
                            gotoxy(1,15);
                            clreol();
                            gotoxy(1,16);
                            clreol();
                            gotoxy(1,17);
                            clreol();
                            gotoxy(32,13);
                            getch();
                           }
                           else{ilnokia+=ilekupuje;cgotuwa-=(cnokia*ilekupuje);}
                break;


                     } //end of switch about "co kupujemy
         textcolor(txc);
        break;

        case 's':
        if((ilmicro+ilphilips+ilferari+ilbmw+ilmcdonald+ilsiemens+ilnokia)==0)
        {gotoxy(1,12);
         clreol();
         cprintf("Nie posiadasz przecierz zadnych akcji !!!");
         gotoxy(1,13);
         clreol();
         gotoxy(1,14);
         clreol();textcolor(txc);cprintf("                  Wcisnij ENTER");
         gotoxy(1,15);
         clreol();
         gotoxy(1,16);
         clreol();
         gotoxy(1,17);
         clreol();
         gotoxy(32,14);
         getch();
        }
        else
        {
        gotoxy(1,12);
        clreol();
        cprintf("Ktore akcje sprzedajesz ?\n\r");
        do{corobimy=getch();}
        while(corobimy!='m'&&corobimy!='p'&&corobimy!='f'&&corobimy!='b'&&corobimy!='d'&&corobimy!='s'&&corobimy!='n');
        switch(corobimy)
             {
            case 'm':
              cprintf("Ile akcji firmy \"Microsoft\" sprzedajesz (Masz %d akcji) ? ",ilmicro);
              cin>>ilesprzedaje;
              if(ilesprzedaje>ilmicro||0>ilesprzedaje)
              {cprintf("\rNie posiadasz przecierz tyle akcji !!!\n\r");
               clreol();cprintf("\n\r                  Wcisnij ENTER");
               getch();
              }
              else
              {
               ilmicro-=ilesprzedaje;cgotuwa+=(cmicro*ilesprzedaje);
              }

            break;


            case 'p':
              cprintf("Ile akcji firmy \"Philips\" sprzedajesz (Masz %d akcji) ? ",ilphilips);
              cin>>ilesprzedaje;
              if(ilesprzedaje>ilphilips||0>ilesprzedaje)
              {cprintf("\rNie posiadasz przecierz tyle akcji !!!\n\r");
               clreol();cprintf("\n\r                  Wcisnij ENTER");
               getch();
              }
              else
              {
               ilphilips-=ilesprzedaje;cgotuwa+=(cphilips*ilesprzedaje);
              }

            break;

            case 'f':
              cprintf("Ile akcji firmy \"Ferari\" sprzedajesz (Masz %d akcji) ? ",ilferari);
              cin>>ilesprzedaje;
              if(ilesprzedaje>ilferari||0>ilesprzedaje)
              {cprintf("\rNie posiadasz przecierz tyle akcji !!!\n\r");
               clreol();cprintf("\n\r                  Wcisnij ENTER");
               getch();
              }
              else
              {
               ilferari-=ilesprzedaje;cgotuwa+=(cferari*ilesprzedaje);
              }

            break;

            case 'd':
              cprintf("Ile akcji firmy \"McDonalds\" sprzedajesz (Masz %d akcji) ? ",ilmcdonald);
              cin>>ilesprzedaje;
              if(ilesprzedaje>ilmcdonald||0>ilesprzedaje)
              {cprintf("\rNie posiadasz przecierz tyle akcji !!!\n\r");
               clreol();cprintf("\n\r                  Wcisnij ENTER");
               getch();
              }
              else
              {
               ilmcdonald-=ilesprzedaje;cgotuwa+=(cmcdonald*ilesprzedaje);
              }

            break;


            case 'b':
              cprintf("Ile akcji firmy \"BMW\" sprzedajesz (Masz %d akcji) ? ",ilbmw);
              cin>>ilesprzedaje;
              if(ilesprzedaje>ilbmw||0>ilesprzedaje)
              {cprintf("\rNie posiadasz przecierz tyle akcji !!!\n\r");
               clreol();cprintf("\n\r                  Wcisnij ENTER");
               getch();
              }
              else
              {
               ilbmw-=ilesprzedaje;cgotuwa+=(cbmw*ilesprzedaje);
              }

            break;

            case 's':
              cprintf("Ile akcji firmy \"Siemens\" sprzedajesz (Masz %d akcji) ? ",ilsiemens);
              cin>>ilesprzedaje;
              if(ilesprzedaje>ilsiemens||0>ilesprzedaje)
              {cprintf("\rNie posiadasz przecierz tyle akcji !!!\n\r");
               clreol();cprintf("\n\r                  Wcisnij ENTER");
               getch();
              }
              else
              {
               ilsiemens-=ilesprzedaje;cgotuwa+=(csiemens*ilesprzedaje);
              }

            break;

            case 'n':
              cprintf("Ile akcji firmy \"Nokia\" sprzedajesz (Masz %d akcji) ? ",ilnokia);
              cin>>ilesprzedaje;
              if(ilesprzedaje>ilnokia||0>ilesprzedaje)
              {cprintf("\rNie posiadasz przecierz tyle akcji !!!\n\r");
               clreol();cprintf("\n\r                  Wcisnij ENTER");
               getch();
              }
              else
              {
               ilnokia-=ilesprzedaje;cgotuwa+=(cnokia*ilesprzedaje);
              }

            break;



             }
        }


        textcolor(txc);
        break;

        }






}

if(rob=='o'||rob=='O')
{
 clrscr();
 textcolor(txc);
 gotoxy(1,1);
 textbackground(tlow);
 textcolor(txw);
 cprintf("                                 OPCJE                                          ");
 textbackground(tlon);
 textcolor(txc);
 cprintf("--------------------------------------------------------------------------------");
 gotoxy(5,5);
 cprintf("1");
 textcolor(txn);
 cprintf(". Nowa gra\n\r");
 textcolor(txc);
 cprintf("    2");
 textcolor(txn);
 cprintf(". Poziom trudnoòci\n\r");
 textcolor(txc);
 cprintf("    3");
 textcolor(txn);
 cprintf(". Ustawienia kolorow\n\r");
 textcolor(txc);
 cprintf("    4");
 textcolor(txn);
 cprintf(". Kilka sàow o programie\n\r");
 textcolor(txc);
 cprintf("    5");
 textcolor(txn);
 cprintf(". Podzi©kowania dla...\n\r");
 textcolor(txc);
 cprintf("    6");
 textcolor(txn);
 cprintf(". Powrot\n\r");
 textcolor(txc);
 corobimy=getch();
 switch(corobimy)
       {



      case '1':
      goto poczatek;
      //break;

      case '2':
      clrscr();
      gotoxy(30,12);
      cprintf("Jeszcze nie zrobione :)");
      getch();
      break;

      case '4':
      clrscr();
      textcolor(1);textbackground(3);
      gotoxy(16,2);cprintf("…ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕª");textcolor(txn);textbackground(tlon);cprintf("            2004");textcolor(1);textbackground(3);
      gotoxy(16,3);cprintf("∫            Krzysztof Szumny - Noisy           ∫\n\r");
      gotoxy(16,4);cprintf("∫  ma zaszczyt przedstawic panstwu program pt.  ∫\n\r");
      gotoxy(16,5);cprintf("∫                                               ∫\n\r");
      gotoxy(16,6);cprintf("∫            \" B I Z N E S M A N \"              ∫\n\r");
      gotoxy(16,7);cprintf("∫                                               ∫\n\r");
      gotoxy(16,8);cprintf("∫       noisy@autograf.pl    GG:2288009         ∫\n\r");
      gotoxy(16,9);cprintf("»ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕº\n\r");

      textcolor(txn);textbackground(tlon);
      cprintf("\n\r       Ten program ma status ");
      textcolor(txc);
      cprintf("FREEWARE");
      textcolor(txn);
      cprintf(", oznacza to, ze mozesz go darmowo wykorzy-stywac do wszelakich celow. Program");
      textcolor(txc);
      cprintf(" \"BIZNESMAN\"");
      textcolor(txn);
      cprintf(" to");
      textcolor(txc);
      cprintf(" GRA");
      textcolor(txn);
      cprintf(" typu handlowego, polega- jaca na kupnie oraz sprzedazy roznego rodzaju towarow posiadajacych rozne ceny wroznych miastach, po ktorych sie poruszamy. Mozemy kupowac, sprzedawac, pozyczaci oddawac pieniadze, a takze lokowac nasze pieniadze w roznych bankach lub ak-  cjach udzialowych roznych przedsiebiorstw, firm, restauracji, itd. itp.\n\r       Aby pozyczyc, oddac, lub ulokowac pieniadze w banku, korzystamy z pomocy zaufanego przyjaciela. Podczas naszych transakcji spotkac nas moga rozne przyje-mne i nieprzyjemne niespodzianki, powodujace ");
      textcolor(txc);
      cprintf("utrate ");
      textcolor(txn);
      cprintf("towarow lub pieniedzy, albo tez ");
      textcolor(txc);
      cprintf("wzrost ");
      textcolor(txn);
      cprintf("stanu naszego konta. Musimy takze uwazac na banki, bo niektore z nichmoga zbankrutowac. Mozemy zbankrutowac rowniez my, tak wiec pilnujmy, aby nasz  dlug nadmiernie nie wzrosl. A wiec ruszamy w droge.");
      cprintf("\n\r                                  Przyjemnych podrozy i sukcesow w handlu !!!");
      textcolor(txc);
      cprintf("\n\rWcisnij dowolny klawisz by wr¢ciÜ do gry.");
      getch();

      break;

      case '3':
      do{
      clrscr();
      textcolor(txw);textbackground(tlow);
      cprintf("         Tutaj masz mozliwosc ustawienia kolorow obowiazujacych w grze.         ");
      textbackground(tlon);

      textcolor(txc);cprintf("--------------------------------------------------------------------------------   1");textcolor(txn);cprintf(". Tekst normalny\n\r");
      textcolor(txc);cprintf("   2");textcolor(txn);cprintf(". Tekst wyrozniony\n\r");
      textcolor(txc);cprintf("   3");textcolor(txn);cprintf(". Tlo calej gry\n\r");
      textcolor(txc);cprintf("   4");textcolor(txn);cprintf(". Tlo wyroznione\n\r");
      textcolor(txc);cprintf("   5");textcolor(txn);cprintf(". Tekst wewnatrz tla wyroznionego\n\r");
      textcolor(txc);cprintf("   6");textcolor(txn);cprintf(". Zapisz ustawienia\n\r");
      textcolor(txc);cprintf("   7");textcolor(txn);cprintf(". Ustaw pierwotne barwy\n\r");
      textcolor(txc);cprintf("   Q");textcolor(txn);cprintf("- Powr¢t - Anuluj nowe ustawienia\n\n\r                              Przkladowe okno \n\r");
      textcolor(ptxn);
      textbackground(ptlon);
      textbackground(tlon);cprintf("         ");cprintf("…ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕª\n\r");
      textbackground(tlon);cprintf("         ");cprintf("∫");textcolor(ptxc);textbackground(ptlon);cprintf(">> KRZYSZTOF SZUMNY(NOISY)-NOISY@AUTOGRAF.PL-GG:2288009 <<");textcolor(ptxn);textbackground(tlon);cprintf("∫\n\r");
      textbackground(tlon);cprintf("         ");cprintf("∫");textcolor(ptxw);textbackground(ptlow);cprintf("Towar:         Cena:        Ilosc:         Wartosc:       ");textcolor(ptxn);textbackground(tlon);cprintf("∫\n\r");
      textbackground(tlon);cprintf("         ");cprintf("∫");textcolor(ptxc);textbackground(ptlon);cprintf("H");textcolor(ptxn);cprintf("erbatniczki...     ");textcolor(ptxc);cprintf("2.50");textcolor(ptxn);cprintf(" $      ");textcolor(ptxc);cprintf("2");textcolor(ptxn);cprintf(" szt.             ");textcolor(ptxc);cprintf("5");textcolor(ptxn);cprintf(".00 $ ");textbackground(tlon);cprintf("∫\n\r");
      textbackground(tlon);cprintf("         ");cprintf("∫");textcolor(ptxc);textbackground(ptlon);cprintf("B");textcolor(ptxn);cprintf("rowar \"CYC\"...     ");textcolor(ptxc);cprintf("2.49");textcolor(ptxn);cprintf(" $      ");textcolor(ptxc);cprintf("1");textcolor(ptxn);cprintf(" l.               ");textcolor(ptxc);cprintf("2");textcolor(ptxn);cprintf(".49 $ ");textbackground(tlon);cprintf("∫\n\r");
      textbackground(tlon);cprintf("         ");cprintf("∫");textbackground(ptlon);cprintf("------------------------------------------");textcolor(ptxw);textbackground(ptlow);cprintf("Razem:");textcolor(ptxn);textbackground(ptlon);cprintf("   ");textcolor(ptxc);cprintf("9.46");textcolor(ptxn);cprintf(" $ ");textbackground(tlon);cprintf("∫\n\r");
      textbackground(tlon);cprintf("         ");cprintf("∫");textbackground(ptlon);cprintf("stan konta....   ");textcolor(ptxc);cprintf("bankrut                                  ");textcolor(ptxn);textbackground(tlon);cprintf("∫\n\r");
      textbackground(tlon);cprintf("         ");cprintf("∫");textbackground(ptlon);cprintf("stan dlugu....   ");textcolor(ptxc);cprintf("i tak nie splacisz                       ");textcolor(ptxn);textbackground(tlon);cprintf("∫\n\r");
      textbackground(tlon);cprintf("         ");cprintf("∫");textcolor(ptxw);textbackground(ptlow);cprintf("--------------Masz do wyboru takie mozliwosci-------------");textcolor(ptxn);textbackground(tlon);cprintf("∫\n\r");
      textbackground(tlon);cprintf("         ");cprintf("∫");textbackground(ptlon);cprintf("       ");textcolor(ptxc);cprintf("K");textcolor(ptxn);cprintf("upno, ");textcolor(ptxc);cprintf("S");textcolor(ptxn);cprintf("przedarz, ");textcolor(ptxc);cprintf("B");textcolor(ptxn);cprintf("ank, ");textcolor(ptxc);cprintf("A");textcolor(ptxn);cprintf("kcje, ");textcolor(ptxc);cprintf("D");textcolor(ptxn);cprintf("lug, ");textcolor(ptxc);cprintf("O");textcolor(ptxn);cprintf("pcje,        ");textbackground(tlon);cprintf("∫\n\r");
      textbackground(tlon);cprintf("         ");cprintf("∫");textbackground(ptlon);cprintf(" ");textcolor(ptxc);cprintf("Q");textcolor(ptxn);cprintf("-Wyjscie                              < wybieraj >      ");textbackground(tlon);cprintf("∫\n\r");
      textbackground(tlon);cprintf("         ");cprintf("∫");textbackground(ptlon);cprintf("                                                          ");textbackground(tlon);cprintf("∫\n\r");
      textbackground(tlon);cprintf("         ");cprintf("»ÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕÕº");
      textcolor(txc);
      corobimy=getch();
         switch(corobimy)
             {
           case '1':
           clrscr();
           cprintf("Wybierz kolor tekstu normalnego:\n\n\n\n\r");
           textcolor(0);
           cprintf("1. €€€€€€€€€€€€\n\r");
           textcolor(1);
           cprintf("2. €€€€€€€€€€€€\n\r");
           textcolor(2);
           cprintf("3. €€€€€€€€€€€€\n\r");
           textcolor(3);
           cprintf("4. €€€€€€€€€€€€\n\r");
           textcolor(4);
           cprintf("5. €€€€€€€€€€€€\n\r");
           textcolor(5);
           cprintf("6. €€€€€€€€€€€€\n\r");
           textcolor(6);
           cprintf("7. €€€€€€€€€€€€\n\r");
           textcolor(7);
           cprintf("8. €€€€€€€€€€€€\n\r");
           textcolor(8);
           cprintf("9. €€€€€€€€€€€€\n\r");
           textcolor(9);
           cprintf("10.€€€€€€€€€€€€\n\r");
           textcolor(10);
           cprintf("11.€€€€€€€€€€€€\n\r");
           textcolor(11);
           cprintf("12.€€€€€€€€€€€€\n\r");
           textcolor(12);
           cprintf("13.€€€€€€€€€€€€\n\r");
           textcolor(13);
           cprintf("14.€€€€€€€€€€€€\n\r");
           textcolor(14);
           cprintf("15.€€€€€€€€€€€€\n\r");
           textcolor(15);
           cprintf("16.€€€€€€€€€€€€\n\r");
           textcolor(txc);
           gotoxy(35,1);
           cin>>ptxn;
           ptxn--;


           break;

           case '2':
           clrscr();
           cprintf("Wybierz kolor tekstu wyroznionego:\n\n\n\n\r");
           textcolor(0);
           cprintf("1. €€€€€€€€€€€€\n\r");
           textcolor(1);
           cprintf("2. €€€€€€€€€€€€\n\r");
           textcolor(2);
           cprintf("3. €€€€€€€€€€€€\n\r");
           textcolor(3);
           cprintf("4. €€€€€€€€€€€€\n\r");
           textcolor(4);
           cprintf("5. €€€€€€€€€€€€\n\r");
           textcolor(5);
           cprintf("6. €€€€€€€€€€€€\n\r");
           textcolor(6);
           cprintf("7. €€€€€€€€€€€€\n\r");
           textcolor(7);
           cprintf("8. €€€€€€€€€€€€\n\r");
           textcolor(8);
           cprintf("9. €€€€€€€€€€€€\n\r");
           textcolor(9);
           cprintf("10.€€€€€€€€€€€€\n\r");
           textcolor(10);
           cprintf("11.€€€€€€€€€€€€\n\r");
           textcolor(11);
           cprintf("12.€€€€€€€€€€€€\n\r");
           textcolor(12);
           cprintf("13.€€€€€€€€€€€€\n\r");
           textcolor(13);
           cprintf("14.€€€€€€€€€€€€\n\r");
           textcolor(14);
           cprintf("15.€€€€€€€€€€€€\n\r");
           textcolor(15);
           cprintf("16.€€€€€€€€€€€€\n\r");
           textcolor(txc);
           gotoxy(37,1);
           cin>>ptxc;
           ptxc--;


           break;

           case '5':
           clrscr();
           cprintf("Wybierz kolor tekstu wewnatrz tla wzroznionego:\n\n\n\n\r");
           textcolor(0);
           cprintf("1. €€€€€€€€€€€€\n\r");
           textcolor(1);
           cprintf("2. €€€€€€€€€€€€\n\r");
           textcolor(2);
           cprintf("3. €€€€€€€€€€€€\n\r");
           textcolor(3);
           cprintf("4. €€€€€€€€€€€€\n\r");
           textcolor(4);
           cprintf("5. €€€€€€€€€€€€\n\r");
           textcolor(5);
           cprintf("6. €€€€€€€€€€€€\n\r");
           textcolor(6);
           cprintf("7. €€€€€€€€€€€€\n\r");
           textcolor(7);
           cprintf("8. €€€€€€€€€€€€\n\r");
           textcolor(8);
           cprintf("9. €€€€€€€€€€€€\n\r");
           textcolor(9);
           cprintf("10.€€€€€€€€€€€€\n\r");
           textcolor(10);
           cprintf("11.€€€€€€€€€€€€\n\r");
           textcolor(11);
           cprintf("12.€€€€€€€€€€€€\n\r");
           textcolor(12);
           cprintf("13.€€€€€€€€€€€€\n\r");
           textcolor(13);
           cprintf("14.€€€€€€€€€€€€\n\r");
           textcolor(14);
           cprintf("15.€€€€€€€€€€€€\n\r");
           textcolor(15);
           cprintf("16.€€€€€€€€€€€€\n\r");
           textcolor(txc);
           gotoxy(52,1);
           cin>>ptxw;
           ptxw--;
           break;

           case '3':
           clrscr();
           cprintf("Wybierz kolor tla calej gry:\n\n\n\n\r");
           textcolor(0);
           cprintf("1. €€€€€€€€€€€€\n\r");
           textcolor(1);
           cprintf("2. €€€€€€€€€€€€\n\r");
           textcolor(2);
           cprintf("3. €€€€€€€€€€€€\n\r");
           textcolor(3);
           cprintf("4. €€€€€€€€€€€€\n\r");
           textcolor(4);
           cprintf("5. €€€€€€€€€€€€\n\r");
           textcolor(5);
           cprintf("6. €€€€€€€€€€€€\n\r");
           textcolor(6);
           cprintf("7. €€€€€€€€€€€€\n\r");
           textcolor(7);
           cprintf("8. €€€€€€€€€€€€\n\r");
           textcolor(txc);
           gotoxy(30,1);
           cin>>ptlon;
           ptlon--;
           break;

           case '4':
           clrscr();
           cprintf("Wybierz kolor tla wyroznionych elementow:\n\n\n\n\r");
           textcolor(0);
           cprintf("1. €€€€€€€€€€€€\n\r");
           textcolor(1);
           cprintf("2. €€€€€€€€€€€€\n\r");
           textcolor(2);
           cprintf("3. €€€€€€€€€€€€\n\r");
           textcolor(3);
           cprintf("4. €€€€€€€€€€€€\n\r");
           textcolor(4);
           cprintf("5. €€€€€€€€€€€€\n\r");
           textcolor(5);
           cprintf("6. €€€€€€€€€€€€\n\r");
           textcolor(6);
           cprintf("7. €€€€€€€€€€€€\n\r");
           textcolor(7);
           cprintf("8. €€€€€€€€€€€€\n\r");
           textcolor(txc);
           gotoxy(47,1);
           cin>>ptlow;
           ptlow--;
           break;

           case '6':
           txn=ptxn;
           txc=ptxc;
           txw=ptxw;
           tlow=ptlow;
           tlon=ptlon;
           break;

           case 'q':
           ptxn=txn;
           ptxc=txc;
           ptxw=txw;
           ptlow=tlow;
           ptlon=tlon;
           break;

           case '7':
           txn=15;
           txc=10;
           txw=0;
           tlow=15;
           tlon=0;
           break;

             }
        }
      while(corobimy!='6'&&corobimy!='7'&&corobimy!='q');

      break;

      case '5':
      clrscr();
      textcolor(txw);textbackground(tlow);
      cprintf("                               Podzi©kowania                                    ");
      textbackground(tlon);
      textcolor(txc);
      cprintf("--------------------------------------------------------------------------------");
      gotoxy(10,8);
      cprintf("W imieniu moim wàasnm, a takæe wszystkich uæytkownik¢w tej gry \n\r   pragn© zàoæyÜ podziekowania za pomoc w pisaniu i testowaniu tego programu:");
      textcolor(txn);
      cprintf("\n\n\n\r     Tu moæe byÜ twoje imie, nazwisko lub pseudonim, jeæeli przyczynisz si©\n\r   do znalezienia bà©d¢w (liter¢wek teæ) w tej grze poprzez przetestowanie jej.");
      textcolor(txc);

      getch();

      break;
        }
}

if(rob=='b'||rob=='B')
{       textcolor(txn);
        textcolor(txc);
        clrscr();
        cout<<"     TWOJE KONTO OSOBISTE WYNOSI......            "<<cgotuwa<<".";if(ugotuwa<10){cprintf("0");}
        cprintf("%d $\n\r--------------------------------------------------------------------------------",ugotuwa);
        textcolor(tlon);
        textbackground(tlow);
        cprintf(" Mozesz zlozyc swoje pieniadze w jednym z nastepujacych bankow:                 ");
        textcolor(txn);
        textbackground(0);
        cprintf("Bank ");textcolor(txc);cprintf("S");textcolor(txn);cprintf("zwajcarski........................");i=12;ilosc=bszwaj;while(i!=0){if(ilosc<10){cout<<" ";}i--;ilosc/=10;}textcolor(txc);cout<<bszwaj<<".00";textcolor(txn);cprintf(" $\n\r");
        cprintf("Bank ");textcolor(txc);cprintf("F");textcolor(txn);cprintf("rancuski..........................");i=12;ilosc=bfran;while(i!=0){if(ilosc<10){cout<<" ";}i--;ilosc/=10;}textcolor(txc);cout<<bfran<<".00";textcolor(txn);cprintf(" $\n\r");
        cprintf("Bank ");textcolor(txc);cprintf("B");textcolor(txn);cprintf("rytyjski..........................");i=12;ilosc=bbryt;while(i!=0){if(ilosc<10){cout<<" ";}i--;ilosc/=10;}textcolor(txc);cout<<bbryt<<".00";textcolor(txn);cprintf(" $\n\r");
        cprintf("Bank ");textcolor(txc);cprintf("K");textcolor(txn);cprintf("anadyjski.........................");i=12;ilosc=bkanad;while(i!=0){if(ilosc<10){cout<<" ";}i--;ilosc/=10;}textcolor(txc);cout<<bkanad<<".00";textcolor(txn);cprintf(" $\n\r");
        cprintf("Bank ");textcolor(txc);cprintf("P");textcolor(txn);cprintf("olski.............................");i=12;ilosc=bpol;while(i!=0){if(ilosc<10){cout<<" ";}i--;ilosc/=10;}textcolor(txc);cout<<bpol<<".00";textcolor(txn);cprintf(" $\n\r");
        cprintf("Bank ");textcolor(txc);cprintf("C");textcolor(txn);cprintf("zeczenski.........................");i=12;ilosc=bczecz;while(i!=0){if(ilosc<10){cout<<" ";}i--;ilosc/=10;}textcolor(txc);cout<<bczecz<<".00";textcolor(txn);cprintf(" $\n\r");
        cprintf("---------------------------------------------------------------\n\r");
        textcolor(txc);cprintf("W");textcolor(txn);cprintf("plata, ");textcolor(txc);cprintf("O");textcolor(txn);cprintf("dbior, czy ");textcolor(txc);cprintf("P");textcolor(txn);cprintf("owrot ?");textcolor(txc);
        do{
          corobimy=getch();
          }
        while(corobimy!='w'&&corobimy!='o'&&corobimy!='p');
        switch(corobimy)
            {
        case 'w':  gotoxy(1,11);
                   clreol();
                   textcolor(txc);
                   cprintf("Ile pieniedzy z konta osobistego wplacasz do banku ? ");
                   cin>>ilewplacam;
                   gotoxy(1,11);
                   clreol();
                   cprintf("Ktory bank wybierasz ?");
                   corobimy=getch();
                   switch(corobimy)
                        {
                   case 's':
                   cgotuwa-=ilewplacam;
                   bszwaj+=ilewplacam;
                   break;

                   case 'f':
                   cgotuwa-=ilewplacam;
                   bfran+=ilewplacam;
                   break;

                   case 'b':
                   cgotuwa-=ilewplacam;
                   bbryt+=ilewplacam;
                   break;

                   case 'k':
                   cgotuwa-=ilewplacam;
                   bkanad+=ilewplacam;
                   break;

                   case 'p':
                   cgotuwa-=ilewplacam;
                   bpol+=ilewplacam;
                   break;

                   case 'c':
                   cgotuwa-=ilewplacam;
                   bczecz+=ilewplacam;
                   break;

                        }



        break;

        case 'o':  gotoxy(1,11);
                   clreol();
                   textcolor(txc);
                   cprintf("Z ktorego banku wyplacasz ? ");
                   corobimy=getch();
                   gotoxy(1,11);
                   clreol();
                   cprintf("Ile pieniedzy wyplacasz z banku ");
                   switch(corobimy)
                        {
                   case 's':
                   cprintf("Szwajcarskiego ? ");
                   cin>>ilewplacam; // wykorzystuje ponownie te sama zmienna w celu zaoszczedzenia miejsca
                   if(ilewplacam>bszwaj)
                   {
                   gotoxy(1,11);
                   clreol();cprintf("Nie masz tyle pieniedz na tym koncie!!!            Wcisnij ENTER");
                   getchar();
                   }
                   else
                   {
                   cgotuwa+=ilewplacam;
                   bszwaj-=ilewplacam;
                   }
                   break;

                   case 'f':
                   cprintf("Francuskiego ? ");
                   cin>>ilewplacam; // wykorzystuje ponownie te sama zmienna w celu zaoszczedzenia miejsca
                   cgotuwa+=ilewplacam;
                   bfran-=ilewplacam;
                   break;

                   case 'b':
                   cprintf("Brytyjskiego ? ");
                   cin>>ilewplacam; // wykorzystuje ponownie te sama zmienna w celu zaoszczedzenia miejsca
                   cgotuwa+=ilewplacam;
                   bbryt-=ilewplacam;
                   break;

                   case 'k':
                   cprintf("Kanadyjskiego ? ");
                   cin>>ilewplacam; // wykorzystuje ponownie te sama zmienna w celu zaoszczedzenia miejsca
                   cgotuwa+=ilewplacam;
                   bkanad-=ilewplacam;
                   break;

                   case 'p':
                   cprintf("Polskiego ? ");
                   cin>>ilewplacam; // wykorzystuje ponownie te sama zmienna w celu zaoszczedzenia miejsca
                   cgotuwa+=ilewplacam;
                   bpol-=ilewplacam;
                   break;

                   case 'c':
                   cprintf("Czeczenskiego ? ");
                   cin>>ilewplacam; // wykorzystuje ponownie te sama zmienna w celu zaoszczedzenia miejsca
                   cgotuwa+=ilewplacam;
                   bczecz-=ilewplacam;
                   break;

                        }



        break;



            }

}


if(rob=='d'||rob=='D')
{
gotoxy(1,20);
clreol();
gotoxy(1,19);
clreol();
textcolor(txc);
cprintf("P");
textcolor(txn);
cprintf("ozyczasz, ");
textcolor(txc);
cprintf("O");
textcolor(txn);
cprintf("ddajesz, ");
textcolor(txc);
cprintf("W");
textcolor(txn);
cprintf("racasz ?");
corobimy=getch();
switch(corobimy)
    {
  case 'p':
       gotoxy(1,20);
       clreol();
       gotoxy(1,19);
       clreol();
       textcolor(txc);
       cprintf("Jestes u przyjaciela. Ile pozyczasz pieniedzy <maksymalnie 10000 $> ?");
       do{gotoxy(70,19);clreol();
       cin>>ilepozyczasz;
         }
       while(ilepozyczasz>10000||ilepozyczasz<0);
       cdlug+=ilepozyczasz;
       cgotuwa+=ilepozyczasz;

  break;

  case 'o':
       do{
       gotoxy(1,20);
       clreol();
       gotoxy(1,19);
       clreol();
       textcolor(txc);
       cprintf("Jestes u przyjaciela. Ile oddajesz pieniedzy ?");

       gotoxy(65,19);clreol();
       cin>>ileoddajesz;
       if(ileoddajesz>cgotuwa){gotoxy(1,20);clreol();gotoxy(1,19);clreol();cprintf("         Nie oszukuj. Przecierz nie masz tyle pieni©dzy !!!\n\r                Wciònij ENTER." );getch();}
         }
       while(ileoddajesz<0||cdlug<ileoddajesz||ileoddajesz>cgotuwa);
       cdlug-=ileoddajesz;
       cgotuwa-=ileoddajesz;
  break;

    }


}

if(rob=='q'||rob=='Q')
{
gotoxy(1,19);
clreol();
gotoxy(1,20);
clreol();
textcolor(txn);
cprintf("            Czy rzeczywiòcie chcesz wyjòÜ z programu [");
textcolor(txc);
cprintf("T");
textcolor(txn);
cprintf("ak/");
textcolor(txc);
cprintf("N");
textcolor(txn);
cprintf("ie] ?");
do{
rob=getch();
  }
while(!(rob=='t'||rob=='T'||rob=='n'||rob=='N'));

if(rob=='t'||rob=='T'){rob='q';}

}

if(cgotuwa>=2000000000)
{
clrscr();
gotoxy(10,12);
textcolor(txn);
cprintf("Jesteó juæ tak bogaty æe nie wiesz co robiÜ z pieniedzmi!!!\n\r                       Masz na k•cie: ");
cout<<cgotuwa<<".";
if(ugotuwa<10){cout<<"0";}
cout<<ugotuwa<<" $";
cprintf("\n\n\n            W takim razie wciònij ENTER i spr¢buj zagraÜ jeszcze raz");
getchar();
goto poczatek;
}


if(cdlug>=2000000000)
{
clrscr();
gotoxy(10,12);
textcolor(txn);
cprintf("Tw¢j dàug jest tak duæy, æe nigdy nie zdoàasz go spàaciÜ!!!\n\r   Poza tym uciekàeò z kraju w obawie, æe twoji wierzyciele cie zamorduj•!!!\n                            Tw¢j dàug wynosi:");
cout<<cdlug<<".00";
//if(udlug<10){cout<<"0";}
//cout<<udlug<<" $";
cprintf("\n\n\n\r          Spr¢buj zagraÜ jeszcze raz, moæe tym razem p¢jdzie Ci lepiej...\n\n\n\r                                          Wciònij ENTER ");
getchar();
goto poczatek;
}




}
while(!(rob=='q'||rob=='Q'));
clrscr();
gotoxy(29,12);
textcolor(txc);
cprintf("Koniec programu BIZNESMAN");


}
//Data aktualizacji  06.04.2004 3;23