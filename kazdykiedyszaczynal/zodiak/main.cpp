#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cstring>

using namespace std;


int main()
{
    int koniec_znaku[]{19, 18, 20, 20, 21, 20, 22, 22, 22, 23, 21, 21};
    const char* znaki[]={   "koziorozec", "wodnik", "ryby",
                            "baran", "byk", "bliznieta",
                            "rak", "lew", "panna",
                            "waga", "skorpion", "strzelec"};

    const char * weekday[] = {  "niedziele",
                                "poniedzialek", "wtorek", "srode",
                                "czwartej", "piatek", "sobote"};

    tm birth_date;
    time_t now;

    memset(&birth_date, 0, sizeof(tm));
    char datau[11];

    cout<<"Wpisz swoja date urodzenia (dd.mm.rrrr): ";
    cin>>datau;

    birth_date.tm_mday = atoi(datau);
    birth_date.tm_mon = atoi(datau+3)-1;
    birth_date.tm_year = atoi(datau+6)-1900;

    cout<<"Twoj znak zodiaku to ";
    if(birth_date.tm_mday <= koniec_znaku[birth_date.tm_mon])
        cout<<znaki[birth_date.tm_mon]<<endl;
    else
        cout<<znaki[(birth_date.tm_mon+1)%12]<<endl;

    time(&now);
    double sec = difftime(now, mktime(&birth_date));

    cout<<"urodziles sie w "<<weekday[birth_date.tm_wday]<<endl;

    cout<<"Minelo "<<int(sec/(24*60*60))<<" dni od Twoich urodzin"<<endl;

    return 0;
}

