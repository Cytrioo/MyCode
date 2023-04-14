#include <iostream>

using namespace std;

int main()
{
    char z;
    int a,b;
    while(cin>>z)switch(z)
    {
    case '+':
        cin>>a>>b;  cout<< a+b <<endl;
    break;
    case '-':
        cin>>a>>b;  cout<< a-b <<endl;
    break;
    case '*':
        cin>>a>>b;  cout<< a*b <<endl;
    break;
    case '/':
        cin>>a>>b;  cout<< a/b <<endl;
    break;
    case '%':
        cin>>a>>b;  cout<< a%b <<endl;
    }
    return 0;
}
