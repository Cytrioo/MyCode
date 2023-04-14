#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, q;
    cin>>t;
    while(t--)
    {
        string p;
        cin>>p;

        q= p[0]*1 + p[1]*3 + p[2]*7 + p[3]*9 + p[4]*1 + p[5]*3 + p[6]*7 + p[7]*9 + p[8]*1 + p[9]*3 + p[10]*1;

        if(q%10==0) cout<<"D"<<endl; else cout<<"N"<<endl;
    }

    return 0;
}
