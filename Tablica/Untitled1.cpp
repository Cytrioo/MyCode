#include <iostream>

using namespace std;

int main()
{
    int n=0, tablica[10000];
    while(cin>>tablica[n]) n++;
    for(int i=n-1; i>=0; i--) cout<<tablica[i]<<" ";

    return 0;
}
