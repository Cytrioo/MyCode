#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int D, N;
    cin>>D;
    for(int t=0; t<D; t++)
    {
        cin>>N;
        int a, b, kpion=0, kpozi=0;
        for(int m=0; m<N; m++)
        {
            cin>>a>>b;
            switch(a)
            {
                case 0:
                    kpion +=b;
                break;
                case 2:
                    kpozi += b;
                break;
                case 1:
                    kpion -=b;
                break;
                case 3:
                    kpozi -=b;
                break;
            }
        }
    if(kpion==0 && kpozi==0)    cout<<"studnia"<<endl;
    if(kpion>0) cout<<"0 "<<kpion<<endl;
    else if(kpion<0)   cout<<"1 "<< abs(kpion) <<endl;
    if(kpozi>0) cout<<"2 "<<kpozi<<endl;
    else if(kpozi<0)    cout<<"3 "<< abs(kpozi)<<endl;
    }
}
