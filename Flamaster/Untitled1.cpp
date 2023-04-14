#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ilosc, znak=1;
    cin>>ilosc;

    string wyraz;
    while(ilosc--)
    {
        cin>>wyraz;
        for(int y=0; y<wyraz.length(); y++)
        {
            if(wyraz[y]==wyraz[y+1])
            {
                znak++; if(znak==3) cout<<wyraz[y];
            }
            else if(znak>2)
            {
                cout<<znak; znak=1;
            }
            else if(wyraz[y]!=wyraz[y+1] && znak==2)
            {
                cout<<wyraz[y-1]<<wyraz[y]; znak=1;
            }
            else
            {
                cout<<wyraz[y]; znak=1;
            }
        }
        cout<<endl;
    }
    return 0;
}
