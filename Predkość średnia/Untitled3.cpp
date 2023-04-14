#include <iostream>

using namespace std;

int main()
{
    int t, v1, v2;
    cin>>t;
    for(;t>0; t--)
    {
        cin>>v1>>v2;
        cout<< v1*v2*2/(v1+v2) <<endl;
    }
    return 0;
}
