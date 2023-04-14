#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    long int r=1;
    while(r!=0)
    {
        cin>>r;
        if(r>0) //wiatrak lewoskretny
        {
    r *=2;
    char t[r][r];
            for(int x=0; x<r; x++)
            {
                for(int y=0; y<r; y++)
                {
if(x == y || x == r-y-1 || (y>=r/2 && x>=r-y && x<y && x>=r/2) || ((y<=r/2-1 && x<=r-y && x>y && x<=r/2-1) || (y<=r/2-1 && x>=r-y) || (y>=r/2 && x<=r-y-1)))
                    {
                        t[x][y]='*';
                        cout<<t[x][y];
                    }
                    else
                    {
                        t[x][y]='.';
                        cout<<t[x][y];
                    }
                }
            cout<<endl;
            }
        }
        if(r<0) //wiatrak prawoskretny
        {
    r= abs(r); r *=2;
    char t[r][r];
            for(int x=0; x<r; x++)
            {
                for(int y=0; y<r; y++)
                {
if(x == y || x == r-y-1 || (x<=r/2 && x<y && y<r/2) || (x<y && x<r/2 && y>=r/2 && y>=r-x) || (x>=r/2 && x>y && y>=r/2) || (x>y && x>=r/2 && y<r/2 && y<r-x))
                    {
                        t[x][y]='*';
                        cout<<t[x][y];
                    }
                    else
                    {
                        t[x][y]='.';
                        cout<<t[x][y];
                    }
                }
            cout<<endl;
            }
        }
    }
    return 0;
}
