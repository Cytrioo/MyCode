#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, w;  cin>>t;
    while(t--)
    {
        cin>>w;
        int tablica[w];

        for(int x=0; x<w; x++)  cin>>tablica[x]; //wpisanie

        for(int p=1; p<w; p+=2) cout<<tablica[p]<<" ";
        for(int n=0; n<w; n+=2) cout<<tablica[n]<<" "; //wypisanie

        cout<<endl;
    }
    return 0;
}
