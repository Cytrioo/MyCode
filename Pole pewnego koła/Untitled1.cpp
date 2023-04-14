#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdio>

using namespace std;
double r, d, P;

//Pewien Okr¹g to taki okr¹g który jest w œrodku tych dwóch kó³.

int main()
{
    cin>>r; //promien okrêgu
    cin>>d; //suma promieni po³¹czonych
    P=(pow(r,2)-pow(d,2)/4.0)*M_PI;
    //Pole tego okrêgu. Pole jednego ko³a odj¹æ drugiego i nad 4(poniewa¿ promieñ tego okrêgu jest 4 krotnie mniejszy od sednicy okrêgu)

    printf("%.2f",P); //Wyœwietl z precyzj¹ do 2 po przecninku. f liczba rzeczywista "float" % jest obowi¹zkowy

    return 0;
}
