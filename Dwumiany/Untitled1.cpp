#include <iostream>
#include <math.h>

using namespace std;

int Dwumian(int x, int y)
{
    long long int sx, sy, ws;
    for(int q=1; q<=x; q++) sx *= q;
    for(int w=1; w<=y; w++) sy *= w;
    for(int e=1; e<=x-y; e++) ws *= e;
    return sx/(sy*ws);
}

int main()
{
    int testy;
    cin>>testy;
    for(int t=0; t<testy; t++)
    {
        int n, k;
        cin>>n>>k;
        cout<< Dwumian(n, k) <<endl;
    }
}
