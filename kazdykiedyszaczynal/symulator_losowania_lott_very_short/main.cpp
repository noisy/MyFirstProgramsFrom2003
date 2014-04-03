#include<iostream>
#include<set>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
main(){
    set<int> s;
    int n,i;
    for(srand(time(NULL)),cout<<"Podaj liczbe losowan: ",cin>>n,i=0;i++<n;s.clear(),cout<<endl){
        for(cout<<"Losowanie nr "<<i<<":\t";s.size()!=6;s.insert((rand()%50)+1));
        for(set<int>::iterator j=s.begin();j!=s.end();cout<<setw(4)<<*(j++)<<", ");
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
