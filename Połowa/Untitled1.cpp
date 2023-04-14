#include <iostream>
#include <string>

using namespace std;

int main()
{
    string ciag;
    int t;
    cin>>t;
    for(;t>0; t--)
    {
        cin>>ciag;
        int d = (ciag.length()/2)-1;
        for(int i=0; i<=d; i++)
            cout<<ciag[i];
        cout<<endl;
    }
    return 0;
}
