#include <iostream>
#include <string>

using namespace std;

char string_merge(string p, string d)
{
    int dp = p.length(), dd = d.length();
    if(dp > dd) for(int x=0; x<dd; x++) cout<< p[x] << d[x];
    else for(int y=0; y<dp; y++) cout<< p[y] << d[y];
}

int main()
{
    int ile;
    cin>>ile;
    string  p, d;
    for(int i=0; i<ile; i++)
    {
        cin>>p>>d;
        string_merge(p, d);
        cout<<endl;
    }
    return 0;
}
