#include <iostream>

using namespace std;

int main()
{
    int w, i;
    cin>>w>>i;
    int tab[w];

    for(int q=0; q<w; q++) cin>>tab[q];

    int t[w], a;
    for(int q=0; q<w; q++)
    {
        a= q-i;
        if(a<0) a= a+w;
        t[a]= tab[q];
    }

    for(int q=0; q<w; q++) cout<< t[q]<<" ";

    return 0;
}
