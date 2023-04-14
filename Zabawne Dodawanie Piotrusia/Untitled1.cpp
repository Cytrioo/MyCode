#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int Odwrocona_liczba(int l)
{
    int Ilosc_cyfr = floor(log10(l)+1), wynik=0;

    for(int i=1; i<=Ilosc_cyfr; i++)
    {
        wynik += floor(pow(10, Ilosc_cyfr-i)) * (l%10);
        l /=10;
    }
    return wynik;
}
int main()
{
    int ile, liczba, isum=0;
    cin>>ile;

    for(int x=0; x<ile; x++)
    {
        cin>>liczba;
        int liczbaod = Odwrocona_liczba(liczba);
        if(liczba==liczbaod) liczba=liczbaod;
        else while(liczba!=liczbaod)
        {
            liczba += liczbaod;
            liczbaod = Odwrocona_liczba(liczba);
            isum++;
        }
        cout<<liczba<<" "<<isum<<endl;
        isum=0;
    }
}
