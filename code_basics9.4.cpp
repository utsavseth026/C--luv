/* We see that in previous code, we had to write/declare he array sizes very previously, and moreover, we had 
to pass the columns, this should be avoided,as we do in 1-d array

There is only one way to do that, which is shown as follows: */

#include<bits/stdc++.h>
using namespace std;

const int n = 1000;
int a[n][n]; // Declared globally for more size, and you know the drill, if array declared globally, n should be const

void foo(int arr[][n])
{
    arr[1][2] = arr[1][2] - 10;
    return;
}

int main()
{
    int rows,columns;
    cout<<"Enter rows\n ";
    cin>>rows;
    cout<<"Enter columns\n";
    cin>>columns;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<"Enter element "<<i<<","<<j<<endl;
            cin>>a[i][j];
        }
    }
    cout<<"Before Function "<<a[1][2]<<endl;
    foo(a);
    cout<<"After Function "<<a[1][2]<<endl;
    return 0;
}