#include <iostream>

using namespace std;


int main() {
    int liczby;
    cin>>liczby;
    long long int wynik=1, tablica[liczby];

    for(int x=0; x<liczby; x++) cin>>tablica[x];

    for(int y=0; y<liczby; y++)
    {
        if(tablica[y]>10) cout<<"0 0"<<endl;
        else{
            for(int s=1; s<=tablica[y]; s++) wynik*=s;
            cout<<((wynik%100)/10)<<" "<<wynik%10<<endl;
            wynik=1;
        }
    }

    return 0;
}
