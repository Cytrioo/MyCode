#include <iostream>

using namespace std;

int main()
{
    int x, y=42, z=0, l=0;
    while(cin>>x)
    {
        if(z<3)
        {
            if(x==42 && y!=42) z++;
            y=x;

            cout<<x<<endl;
        }
    }
    return 0;
}
