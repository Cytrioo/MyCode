#include <iostream>

using namespace std;

int main()
{
    int liczby;
    cin>>liczby;
    long long int p[liczby], w[liczby], wynik=1;

    for(int l=0; l<liczby; l++)
    {
        cin>>p[l];
        cin>>w[l];
        if(p[l]>9) p[l]=p[l]%10;
        if(w[l]>9) w[l]=w[l]%4;
    }
    for(int x=0; x<liczby; x++)
    {
        switch( p[x] )
        {
        case 0:
                cout<<"0"<<endl;
            break;
        case 1:
                cout<<"1"<<endl;
            break;
        case 5:
                cout<<"5"<<endl;
            break;
        case 6:
                cout<<"6"<<endl;
            break;
        default:
                {
                for(int q=1;q<=w[x]; q++) wynik*=p[x];
                cout<<(wynik%10)<<endl;
                wynik=1;
                }
            break;
        }
    }
    return 0;
}
