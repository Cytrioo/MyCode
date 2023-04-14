#include <iostream>

using namespace std;

int ciagx(int s)
{
    if(s==1)    return 0;
    else
    {
        if(s%2==0)  return ciagx(s/2)+1;
        else return ciagx(3*s+1)+1;
    }
}

int main()
{
    int testy, liczba;
    cin>>testy;
    for( int t=0; t<testy; t++)
    {
        cin>>liczba;
        cout<< ciagx(liczba) <<endl;
    }
}
