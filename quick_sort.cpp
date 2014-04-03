#include <iostream.h>
main()
{
int liczby[7]={8,5,6,4,1,7,3};
int l,p,element_osiowy,temp,lewo=0, prawo=6;
l=lewo;
p=prawo;
element_osiowy=liczby[3];
do {
    while (element_osiowy<liczby[l])
    {l++;}
    while (element_osiowy>liczby[p])
    {p--;}
    if (l<=p){
        temp=liczby[l];
        liczby[l]=liczby[p];
        liczby[p]=temp;
        l++;
        p--;}
        }
while (lp);
}
//if (p>lewo) {sortuj(lewo,p);)
//if (l>prawo) {sortuj(l,prawo);)

/*
procedure sortuj(lewo,prawo:integer);
var
l,p,element_osiowy,temp:integer;
begin
        l:=lewo;
        p:=prawo;
        element_osiowy:=liczby[lewo];{wybieramy za element osiowy
        pierwsza liczbê}
        repeat
        while element_osiowy<liczby[l] do inc(l);
        while element_osiowy>liczby[p] do dec(p);
        if l<=p then
        begin
                {zamieniamy liczby}
                temp:=liczby[l];
                liczby[l]:=liczby[p];
                liczby[p]:=temp;
                inc(l);
                dec(p);
        end;
        until l>p;{powtarzaj dopoki sie nie spotkaja}
        if p>lewo then sortuj(lewo,p);
        if l<prawo then sortuj(l,prawo);
end;

begin
...
sortuj(1,1000);
...
end.
*/
