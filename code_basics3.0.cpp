// Overflow

// Typical Ranges, & keep in mind you can calculate actual ranges by using using sizeof operator to get the bytes size & use power of 2

/*
 int -> -10^9 to 10^9
 long int -> -10^12 to 10^12 ----> never use long int in questions
 long long int -> -10^18 to 10^18
 
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 100000;
    int b = 100000;
    int c = a*b;
    cout<<c<<endl; // Garbage output 

    int d = 100000;
    int e = 100000;
    long long f = d*e;
    cout<<f<<endl; // Garbage output 

    int g = 100000;
    long long int h = 1000000;
    long long int i = g*h;
    cout<<i<<endl; // Right Answer

    int j = 100000;
    long long k = 100000;
    int l = j*k;
    cout<<l<<endl; // Garbage output

    int m = 100000, n = 100000;
    long long o = m*n*1LL;
    cout<<o<<endl; // Garbage output

    int x = 100000, y = 100000;
    long long z = m*1LL*n;
    cout<<z<<endl; // Right Answer

    return 0;
}