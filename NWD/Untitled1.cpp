#include <iostream>
using namespace std;

int NWD(int a, int b) //NWD - Algorytm Euklidesa
{
   if(a!=b)
     return NWD(a>b?a-b:a,b>a?b-a:b);
   return a;
}

int main()
{
    int ile;
    cin>>ile;
    long long int a,b;
    for(int x=0; x<ile; x++)
    {
        cin>>a>>b;
        cout<< NWD(a,b) <<endl;
    }
    return 0;
}
