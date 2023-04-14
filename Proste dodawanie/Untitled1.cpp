#include <iostream>

using namespace std;

int main()
{
    int i,il,liczba, suma=0;
    cin>>i;
    for(int x=0; x<i; x++)
    {
        cin>>il;
        for(int y=0; y<il; y++)
        {
            cin>>liczba;
            suma+=liczba;
        }
        cout<<suma<<endl;
        suma=0;
    }
    return 0;
}
