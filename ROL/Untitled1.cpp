#include <iostream>

using namespace std;

int main()
{
    int testy, wielkosc;
    cin>>testy;
    for(int t=0; t<testy; t++)
    {
        cin>>wielkosc;
        int tablica[wielkosc];
        for(int w=0; w<wielkosc; w++)   cin>>tablica[w];
        for(int z=1; z<=wielkosc; z++)
        {
            if(z!=wielkosc) cout<<tablica[z]<<" ";
            else cout<< tablica[0];
        }
        cout<<endl;
    }
}
