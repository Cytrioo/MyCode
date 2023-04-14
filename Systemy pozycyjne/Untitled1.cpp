#include <iostream>
#include <vector>

using namespace std;

void jedynastkowy(int L)
{
    vector <int> Tablica;
        while(L)
        {
            Tablica.push_back(L%11);
            L/=11;
        }
        for(int I=Tablica.size()-1; I>=0; I--)
        {
            if(Tablica[I] < 10) cout<<Tablica[I];
            else cout<<"A";
        }
}

void szestnastkowy(int l)
{
    vector <int> tablica;
        while(l)
        {
            tablica.push_back(l%16);
            l/=16;
        }
        for(int i=tablica.size()-1; i>=0; i--)
        {
            if(tablica[i] < 10) cout<<tablica[i];
            else switch(tablica[i])
            {
            case 10:
                cout<<"A";
            break;
            case 11:
                cout<<"B";
            break;
            case 12:
                cout<<"C";
            break;
            case 13:
                cout<<"D";
            break;
            case 14:
                cout<<"E";
            break;
            case 15:
                cout<<"F";
            break;
            }
        }
        cout<<" ";
}

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        szestnastkowy(n); jedynastkowy(n);  cout<<endl;
    }
    return 0;
}
