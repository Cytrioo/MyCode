#include <iostream>

using namespace std;

int main()
{
    int t, n, x, y;
    cin>>t;
    for(;t>0;t--)
    {
        cin>>n>>x>>y;
        for(int q=1; q <= n; q++)   if(q%x==0 && q%y!=0) cout<<q<<" ";
        cout<<endl;
    }
    return 0;
}
