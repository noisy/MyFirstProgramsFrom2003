#include <iostream>
#include <set>
#include <iomanip>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int liczba_losowan;
    set<int> liczby;
    pair<set<int>::iterator,bool> ret;

    srand(time(NULL));
    cout<<"Podaj liczbe losowan: ";
    cin>>liczba_losowan;

    for(int i=0; i<liczba_losowan; i++)
    {
        cout<<"Losowanie nr "<<i+1<<":\t";

        liczby.clear();
        while(liczby.size()!=6)
        {
            ret=liczby.insert((rand()%50) + 1);
            if(ret.second)
                cout<<setw(4)<<*ret.first<<", ";

        }

        cout<<endl;
    }

}


/*
#include <iostream>
#include <set>
#include <iomanip>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int liczba_losowan;
    set<int> liczby;

    srand(time(NULL));
    cout<<"Podaj liczbe losowan: ";
    cin>>liczba_losowan;

    for(int i=0; i<liczba_losowan; i++)
    {
        cout<<"Losowanie nr "<<i+1<<":\t";

        liczby.clear();
        while( liczby.size() != 6)
            liczby.insert((rand()%50) + 1);

        for(set<int>::iterator it = liczby.begin(); it != liczby.end(); ++it)
            cout<<setw(4)<<*it<<", ";

        cout<<endl;
    }

}

*/
