#include<iostream>
using namespace std;
int main() 
{
    int i,j,k,n; 
    float a[10][10],b,x[10];
    
    cout << "digite o tamanho da matriz: ";
    cin >> n;
    //
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++) 
        {
            cout << "A[" << i << ", " << j << " ]=";
            cin >> a[i][j];
        }
    }
    for(j=1; j<=n; j++) 
    {
        for(i=1; i<=n; i++) 
        {
            if(i!=j) 
            {
                b=a[i][j]/a[j][j];
                for(k=1; k<=n+1; k++) 
                { 
                    a[i][k]=a[i][k]-b*a[j][k];
                }
            }
        }
    }
    cout<<endl <<"A solução é:" << endl;;
    for(i=1; i<=n; i++) 
    {
        x[i]=a[i][n+1]/a[i][i];
        cout<<"x"<<i << "="<<x[i]<<" ";
    }
    cout << endl;
}
