// Dealing with 2-D arrays

#include<bits/stdc++.h>
using namespace std;

void foo(int arr[][100])
{
    arr[0][1]++;
}

int main()
{
    int a[100][100];
    int rows,columns;
    cout<<"Enter the number of rows\n";
    cin>>rows;
    cout<<"Enter the number of columns\n";
    cin>>columns;
    cout<<"Enter the "<<rows*columns<<" elements\n";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Before Function "<<a[0][1]<<endl;
    foo(a);
    cout<<"After function "<<a[0][1]<<endl;
    return 0;
}