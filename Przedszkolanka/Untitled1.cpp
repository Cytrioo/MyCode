#include <iostream>

using namespace std;

int NWD(int a, int b) //NWD - Algorytm Euklidesa
{
   if(a!=b)
     return NWD(a>b?a-b:a,b>a?b-a:b);
   return a;
}

int main() {
    int a,b, ile;
    cin>>ile;
    for(int x=0; x<ile; x++)
    {
        cin>>a>>b;
        cout<<a*b/NWD(a,b)<<endl;
    }
    return 0;
}
