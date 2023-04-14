#include <iostream>

using namespace std;

int main()
{
    int ile, wielkosc;
    cin>>ile;
        for(int x=0; x<ile; x++)
        {
            cin>>wielkosc;
    int tablica[wielkosc];
            for(int i=0; i<wielkosc; i++)   cin>>tablica[i];
            for(int y=wielkosc-1; y>=0; y--)    cout<< tablica[y] <<" ";
            cout<<endl;
        }
    return 0;
}
