#include <iostream>
#include "funcao.h"
using namespace std;



int main()
{
    cout << "digite uma matriz 3x3" << endl;
    fill_m(m1);
    cout << "digite a outra matriz 3x3"<< endl;
    fill_m(m2);
    mult_matriz(m1,m2);

    puts_matriz(mr);

}