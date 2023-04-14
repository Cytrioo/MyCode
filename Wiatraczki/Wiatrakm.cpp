#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    long int n;
do
{ cin>>n;
    if(n>0) //lewo skretny
    { n *=2;
        for(int y=0; y<n; y++)
        {
            for(int x=0; x<n; x++)
if(x==y || y== n-x-1 || (x>=n/2 && y>=n-x && y<x && y>=n/2) || (x<=n/2-1 && y<=n-x && y>x && y<=n/2-1) || (x<=n/2-1 && y>=n-x) || (x>=n/2 && y<=n-x-1))
    cout<<"*"; else cout<<".";
        cout<<endl;
        }
    }
    else if(n<0) //prawo skretny
    { n= abs(n), n *=2;
        for(int y=0; y<n; y++)
        {
            for(int x=0; x<n; x++)
if(x==y || y==n-x-1 || (y<=n/2 && y<x && x<n/2) || (y<x && y<n/2 && x>=n/2 && x>=n-y) || (y>=n/2 && y>x && x>=n/2) || (y>x && y>=n/2 && x<n/2 && x<n-y))
    cout<<"*"; else cout<<".";
        cout<<endl;
        }
    };
}while(n);
    return 0;
}
