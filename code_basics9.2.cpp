#include<bits/stdc++.h>
using namespace std;

void increment(int a[],int size) //Increment all array elements
{
    for(int i=0;i<size;i++)
    a[i]++;
}

void increment1(int *p, int length) //Increment all array elements
{
    for(int i=0;i<length;i++)
    {
        (*(p+i))++;
    }
}

void increment2(int b[],int size2) 
{
    for(int i=0;i<size2;i++)
    b[i]++;
}

void print(int c[],int size) // Just for printing the array
{
    for(int i=0;i<size;i++)
    cout<<c[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[] = {1,2,3,4,5}; 
    int size0 = sizeof(arr)/sizeof(arr[0]);     // Generic way to calculate array size, not always reliable, in arrays it's 
                                                // necessary to always pass length of array, to get correct value
    print(arr,size0);

    int size1;
    cout<<"Enter first array ka size\n";
    cin>>size1;
    int arr1[size1];
    cout<<"Enter the "<<size1<<" elements\n";
    for(int i=0;i<size1;i++)
    cin>>arr1[i];
    print(arr1,size1);

    int size2;
    cout<<"Enter second array ka size\n";
    cin>>size2;
    int arr2[size2]; // way 3, declare an array and take input as follows
    cout<<"Enter "<<size2<<" elements\n";
    for(int i=0;i<size2;i++)
    cin>>arr2[i];
    print(arr2,size2);

    increment(arr,size0);
    print(arr,size0);

    increment1(arr1,size1);
    print(arr1,size1);

    increment2(arr2,size2);
    print(arr2,size2);

    return 0;
}