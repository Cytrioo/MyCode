#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t, i, liczba, suma;
    double srednia, min;
    cin>>t;
    while(t--)
    {
        cin>>i;
        double tablica[i];  suma = 0;
        for(int x=0; x<i; x++)
        {
            cin>>tablica[x]; suma+=tablica[x];
        }
        srednia = (static_cast<double>(suma))/i;
        min = 100;
        for(int j=0; j<i; j++)
        {
            if(fabs(tablica[j]-srednia) < min)
            {
                min = fabs(tablica[j]-srednia);
                liczba = tablica[j];
            }
        }
        cout<< liczba <<endl;

    }
    return 0;
}
