//Passing arrays 

#include<bits/stdc++.h>
using namespace std;

void increment(int a[],int size)
{
    for(int i=0;i<size;i++)
    a[i]++;
}

void increment1(int *p, int length)
{
    for(int i=0;i<length;i++)
    {
        (*(p+i))++;
    }
}

void increment2(int b[10]) // THis method of passing only works for array of size 10
{
    for(int i=0;i<10;i++)
    b[i]++;
}

void print(int c[],int size) 
{
    for(int i=0;i<size;i++)
    cout<<c[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[] = {1,2,3,4,5}; // way 1 to declare an array
    int size0 = sizeof(arr)/sizeof(arr[0]); /* Generic way to calculate array size, not always reliable, 
    in arrays it's necessary to always pass length of array, to get correct value. */

    print(arr,size0);

    int arr1[4] = {4,6,2,0}; // way 2, declare an array as follows and take the inputs
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    print(arr1,size1);

    int arr2[10]; // way 3, declare an array and take input as follows
    cout<<"Enter 10 elements\n";
    for(int i=0;i<10;i++)
    cin>>arr2[i];
    print(arr2,10);

    increment(arr,size0);
    print(arr,size0);

    increment1(arr1,size1);
    print(arr1,size1);

    increment2(arr2);
    print(arr2,10);

    return 0;
}