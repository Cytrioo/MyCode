#include <iostream>

using namespace std;

void Czy_pierwsza(int x)
{
    int suma=0;
    for(int y=1; y<=x; y++)
    {
        if(x%y==0)  suma++;
    }
    if(suma==2) cout<<"TAK"<<endl;
    else  cout<<"NIE"<<endl;

}

int main()
{
    int liczby;
    cin>>liczby;
    int tablica[liczby];

    for(int t=0; t<liczby; t++) cin>>tablica[t];

    for(int t=0; t<liczby; t++) Czy_pierwsza(tablica[t]);

    return 0;
}
