// array declaration, locally max size allowed is around 1e5, and globally max size allowed is around 1e6, and globally, const must be used.

#include<bits/stdc++.h>
using namespace std;

const int size = 1e6;
int b[size];

int main()
{
   int n = 1e5;
   int a[n];
   a[n-1]=3;
   cout<<a[n-1]<<endl;
   b[size-1] = 7;
   cout<<b[size-1];
   return 0;
}