                                                   #include<iostream.h>
main()
{
int n, i , a[100], zmiana, prawda, falsz, x;
cout<<"Program napisal:\n Krzysztof Szumny (klasy I A)\n (14.01.2004r.)\n\n\n\n\n\n";
cout<<" Podaj liczbe porzadkowanych liczb: ";
cin>>n;
prawda=1; falsz=2; i=0;
while (i+1<=n)
      {while(n>=i+1)
            {cout<<"Podaj "<<i+1<<" liczbe: ";
                     cin>>a[i];
             i=i+1;
            }
      }
zmiana=prawda;
while (zmiana==prawda)
      {zmiana=falsz;i=1;
       while (i<n)
             {if (a[i-1] <= a[i])
                 {}
              else {x=a[i-1];
                    a[i-1]=a[i];
                    a[i]=x;
                    zmiana=prawda;
                   }
              i++;
             }
      }
i=0;
cout<<"Oto te liczby w kolejnosci rosnacej: ";
while (i+1<n)
      {cout<<a[i]<<", ";
      i++;
      }
cout<<a[i]<<".";
cout<<"\nAby wyjsc z programu nacisnij enter.";
getchar();
getchar();


}

