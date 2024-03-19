// typecasting -> When we are not sure of the final datatype of an expression, we can use typecasting that we want our output in this datatype

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 9;
    cout<<sizeof(a)<<endl;  // output hai 4, since size of int hai 4 bytes
    float b = 4.5;
    cout<<sizeof(b)<<endl; // output hai 4, since size of float hai 4 bytes
    double c = 8.4;
    cout<<sizeof(c)<<endl;   // output hai 8
    cout<<sizeof(3.5)<<endl; // outut is 8 kyunki by default, decimal is stored as double, which is stored as 8 bytes
    cout<<sizeof(3.5f)<<endl; // outut is 4 kyunki we have explicitly mentioned f after 3.5, which means it is float, therefore 4 bytes

    cout<<int(2.5*3)<<endl; //output hai 7, kyunki 7.5 is typecasted to 7
    cout<<sizeof(int(2.5*3))<<endl; // output is 4, kyunki 7.5 is typecasted to an integer and int ka size hai 4

    cout<<sizeof(double(2))<<endl; // now 2 is considered as a double, toh size hai 8.

    int z = 50;
    cout<<"Variable z was stored as an integer and here it is printed as an integer "<<z<<endl;
    cout<<"Variable z was stored as an integer and is printed as a character  "<<(char)z<<" "<<char(z)<<endl;

    cout<<"ok"<<endl;
    cout<<48<<endl; // 48 is printed as a number
    cout<<char(48)<<endl; // 48 is printed as a character
    return 0;
}

