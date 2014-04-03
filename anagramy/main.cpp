#include <iostream>

using namespace std;

int tab[256];
void algorytm(int *grupyLicznosc, char *grupyLitera, int ile_grup);
void przesuniecie(const char* grupa, const char* wyraz);
int main()
{


    string str;


    cout<<"Podaj slowo:";
    cin>>str;


    for(int i=0; i<str.size(); i++)
    {
        tab[(int)str[i]]++;
    }

    int ile_grup=0;
    for(int i=0; i<256; i++)
    {
        if(tab[i]>0)
        {
            cout<<"\t"<<(char)i<<"\t = "<<tab[i]<<endl;
            ile_grup++;
        }
    }


    int *grupyLicznosc = new int[ile_grup];
    char *grupyLitera = new char[ile_grup];
    for(int i=0, j=0; i<256; i++)
    {
        if(tab[i]>0)
        {
            grupyLicznosc[j]=tab[i];
            grupyLitera[j]=(char)i;
            j++;
        }
    }

    algorytm(grupyLicznosc, grupyLitera, ile_grup);
    //przesuniecie("aa", "bbcc");

    system("PAUSE");
    return 0;
}

void algorytm(int *grupyLicznosc, char *grupyLitera, int ile_grup)
{
    for(int i=0; i<ile_grup; i++)
    {
        string grupa, wyraz;
        for(int j=i, k=0; k <ile_grup; k++, j = (j+1)%ile_grup)
        {
            for(int m=0; m < grupyLicznosc[j]; m++)
            {
                if(k==0)
                    grupa += grupyLitera[j];
                else
                    wyraz += grupyLitera[j];
            }
        }

//        cout<<grupa<<" "<<wyraz<<endl;
        przesuniecie(grupa.c_str(), wyraz.c_str());
    }


}



void przesuniecie(const char* grupa, const char* wyraz)
{

    int licznosc_grupy = strlen(grupa);
    int* wskazniki = new int[licznosc_grupy];
    int* max_dla_wskaznika =  new int[licznosc_grupy];


    int n = strlen(grupa) + strlen(wyraz);

    //cout<<"n = "<< n<<endl;
    for(int i=0; i<licznosc_grupy; i++)
    {
        wskazniki[i]=i;
        max_dla_wskaznika[i]= n - licznosc_grupy + i;

        //cout<<wskazniki[i]<<", "<<max_dla_wskaznika[i]<<endl;
    }


    int ostatni=licznosc_grupy-1;
    int pierwszy=0;

    for(int i=ostatni; i >= pierwszy;)
    {
        //cout<<"wskazniki[i] = " << wskazniki[i]<<"max_dla_wskaznika[i] = "<<max_dla_wskaznika[i]<<endl;
        if(wskazniki[i] != max_dla_wskaznika[i])
        {
            //cout<<"wskazniki[i]++;"<<endl;
            wskazniki[i]++;
        }
        else
        {


            while(wskazniki[i] == max_dla_wskaznika[i])
            {
                //cout<<"--i";
                --i;
                //cout<<"i = "<<i<<endl;
                if(i < 0)
                {
                    //system("PAUSE");
                    return;
                }
            }

            //cout<<"wskazniki[i]++"<<endl;
            wskazniki[i]++;

            //cout<<"wskazniki[i] = "<<wskazniki[i]<<", i = "<<i<<endl;
            //resetuj te po prawej
            int j=wskazniki[i];
            for(int k=1; k<licznosc_grupy; k++)
            {

                //cout<<"k = "<<k<<" i = "<<i<<" wskazniki[i] = "<<wskazniki[i]<<endl;
                wskazniki[i+k]=wskazniki[i]+k;
                //cout<<"wskazniki[i+k]="<<wskazniki[i+k]<<endl;
            }

            //cout<<"i=ostatni;"<<endl;
            i=ostatni;

        }

//        for(int m=0; m<licznosc_grupy; m++)
//            cout<<wskazniki[m]<<", ";



        for(int p=0, g=0, w=0; p<n; p++)
        {
            if(wskazniki[g]==p && g < licznosc_grupy)
            {
                cout<<grupa[g++];
            }
            else
            {
                cout<<wyraz[w++];
            }

        }

        cout<<endl;

        //system("PAUSE");
    }

}
