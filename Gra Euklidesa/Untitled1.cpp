#include <iostream>

using namespace std;

int main()
{
    int testy;
    cin>>testy;
    long long int a, b;
    for(int t=0; t<testy; t++)
    {
        cin>>a>>b;
        while(a!=b)
        {
            if(a>b) a-=b;
            else b-=a;
        }
        cout<< a+b <<endl;
    }
    return 0;
}
