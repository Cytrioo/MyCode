#include <iostream>

using namespace std;

int main()
{
    char z;
    int tablica[10], r, l;
    while(cin>>z>>r>>l)
    {
        if(z!='z')switch(z)
        {
        case '+':
            cout<< tablica[r]+tablica[l] <<endl;
        break;
        case '-':
            cout<< tablica[r]-tablica[l] <<endl;
        break;
        case '*':
            cout<< tablica[r]*tablica[l] <<endl;
        break;
        case '/':
            cout<< tablica[r]/tablica[l] <<endl;
        break;
        case '%':
            cout<< tablica[r]%tablica[l] <<endl;
        break;
        }
        else tablica[r] = l;
    }

    return 0;
}
