#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdio>

using namespace std;
double r, d, P;

//Pewien Okr�g to taki okr�g kt�ry jest w �rodku tych dw�ch k�.

int main()
{
    cin>>r; //promien okr�gu
    cin>>d; //suma promieni po��czonych
    P=(pow(r,2)-pow(d,2)/4.0)*M_PI;
    //Pole tego okr�gu. Pole jednego ko�a odj�� drugiego i nad 4(poniewa� promie� tego okr�gu jest 4 krotnie mniejszy od sednicy okr�gu)

    printf("%.2f",P); //Wy�wietl z precyzj� do 2 po przecninku. f liczba rzeczywista "float" % jest obowi�zkowy

    return 0;
}
