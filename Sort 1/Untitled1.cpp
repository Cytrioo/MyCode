#include <iostream>
#include <string>

using namespace std;

int main()
{
    int testy, wsp;
    cin>>testy;
        for(int p=0; p<testy; p++)
        {   //Wpisanie wspolrzednych do tablicy
            cin>>wsp;
    string nazwa[wsp];
    int x[wsp], y[wsp], odl[wsp];
                for(int w=0; w<wsp; w++)
                {
                    cin>> nazwa[w] >> x[w] >> y[w];
                    odl[w] = x[w]*x[w] + y[w]*y[w];
                }
                //Sortowanie wspolrzednych
    int n = wsp;
do
{
    for(int i=0; i<n-1; i++)
    {
        if(odl[i] > odl[i+1])
        {
            swap(odl[i], odl[i+1]); swap(nazwa[i], nazwa[i+1]); swap(x[i], x[i+1]); swap(y[i], y[i+1]);
        }
    }
n -= 1;
}while(n > 1);
                //Wypisanie posortowaniej tablicy
        for(int g=0; g<wsp; g++)    cout<< nazwa[g] <<" "<< x[g] <<" "<< y[g] <<endl;
                cout<<endl;
        }
    return 0;
}
