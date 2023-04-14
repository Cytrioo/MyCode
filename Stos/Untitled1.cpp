#include <iostream>

using namespace std;

int main()
{
    int l, e=0, tablica[10];
    char z;
    while(cin>>z)
    {
        if(z == '+' && e > 9)
        {
            cin>>l;
            cout<< ":(" <<endl;
        }
        else if(z == '+' && e < 10)
        {
            cin>>l;
            tablica[e] = l;
            cout<< ":)" <<endl;
            e++;
        }
        if(z == '-' && e == 0) cout<< ":(" <<endl;
        else if(z == '-')
        {
            e--;
            cout<<tablica[e]<<endl;
            tablica[e] = '\0';
        }
    }
    return 0;

}
