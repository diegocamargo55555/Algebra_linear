#include <iostream>
#include "funcao.h"
using namespace std;

int main()
{
    fill_m(m1);

    for (int i = 0; i < 3; i++)
    {
        m1[0][i] = m1[0][i] / m1[0][0];
    }
    
    

    puts_matriz(m1);
}