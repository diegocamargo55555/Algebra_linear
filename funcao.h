#include <iostream>
using namespace std;
int mr[3][3] = {};
int m1[3][3] = {}, m2[3][3] = {};


void fill_m(int m[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> m[i][j];
        }
    }
}

void mult_matriz(int m1[3][3], int m2[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                mr[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

void puts_matriz(int mr[3][3])
{
    cout << "matriz: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mr[i][j] << "  ";
        }
        cout << endl;
    }
}

void soma_matriz(int m1[3][3], int m2[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mr[i][j] = m1[i][j] + m2[i][j];
        }
        
    }
    
}