#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int testy;
    cin>>testy;
    long long int N,M;
    for(int t=0; t<testy; t++)
    {
        cin>>N>>M;
        unsigned long int czas[N],c=0 , ciastko=0;
        for(int o=0; o<N; o++)
        {
            cin>>czas[o];
            c = czas[o];
          while(czas[o]<=86400)
            {
                ciastko++;
                czas[o]+=c;
            }
        }
        long int pudelka;
        if(ciastko%M==0) pudelka = ciastko/M;
        else pudelka = (ciastko/M)+1;

        cout<<pudelka<<endl;

    }
    return 0;
}
