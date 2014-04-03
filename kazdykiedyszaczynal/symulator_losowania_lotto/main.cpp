#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int liczba_losowan, tab[6];
    bool powtorz=false;

    srand(time(NULL));
    cout<<"Podaj liczbe losowan: ";
    cin>>liczba_losowan;

    for(int i=0; i<liczba_losowan; i++)
    {
        cout<<"Losowanie nr "<<i+1<<":\t";
        for(int j=0; j<6; )
        {
            tab[j] = (rand()%50) + 1;
            for(int k=0; k<j; k++)
            {
                if(tab[k] == tab[j])
                {
                    powtorz = true;
                    break;
                }
            }

            if(powtorz)
            {
                powtorz = false;
            }
            else
            {
                cout<<setw(4)<<tab[j]<<", ";
                j++;
            }

        }
        cout<<endl;
    }

}
