#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int tablica[m][n];
        for(int x=0; x<m; x++)  for(int y=0; y<n; y++) cin>>tablica[x][y]; //wrzucanie do tablicy

    int Tablica[n][m];
        for(int x=0; x<n; x++)  for(int y=0; y<m; y++) Tablica[x][y] = tablica[y][x]; //Macierz transponowana

    for(int x=0; x<n; x++)
    {
        for(int y=0; y<m; y++) cout<<Tablica[x][y]<<" "; //wypisanie tablicy
    cout<<endl;
    }
}
