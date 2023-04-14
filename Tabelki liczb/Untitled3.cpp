#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t, w, k;
    cin>>t;
    while(t--)
    {
        cin>>w>>k;
        int tablica[w][k], i=0, o=0;
            for(int x=0; x<w; x++) for(int y=0; y<k; y++) cin>>tablica[x][y]; //wpisanie do tablicy
//zmiana ranki
        do
        {
            if(i==0 && o!=k-1) {swap(tablica[i][o], tablica[i][o+1]); o++;}
            else if(o==k-1 && i!=w-1) {swap(tablica[i][o], tablica[i+1][o]); i++;}
            else if(i==w-1 && o!=0) {swap(tablica[i][o], tablica[i][o-1]); o--;}
            else if(o==0 && i!=1)   {swap(tablica[i][o], tablica[i-1][o]); i--;}

            if(i==1 && o==0) break; //zakonczenie
        }while(true);
                    // x==0 || y==0 || x==w-1 || y==k-1
            //zmiana ramki
        for(int x=0; x<w; x++)
        {
            for(int y=0; y<k; y++) cout<<tablica[x][y]<<" ";
        cout<<endl;
        }
    }
    return 0;
}
