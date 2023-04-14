#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, delta;
    while(cin>>a>>b>>c)
    {
        delta = pow(b, 2) - 4*a*c;
        if(delta == 0) cout<<1<<endl;
        else if(delta > 0) cout<<2<<endl;
        else cout<<0<<endl;
    }
}
