// Call by value and call be reference. 

#include<bits/stdc++.h>
using namespace std;

void increment(int n1, int &n2)
{
    n1++;
    n2++;
}

void foo(string &s1, string s2)
{
    s1="";
    s2="";

}

int main()
{
    int num1,num2;
    cout<<"Enter the two numbers\n";
    cin>>num1>>num2;
    increment(num1,num2);
    cout<<"First number is "<<num1<<" and second number is "<<num2<<endl;

    string str1,str2;
    cout<<"Enter two strings\n";
    cin>>str1>>str2;
    cout<<"First string is "<<str1<<" and second string is "<<str2<<" before foo function"<<endl;
    foo(str1,str2);
    cout<<"First string is "<<str1<<" and second string is "<<str2<<endl;

    int a = 10;
    int &b = a;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    a++;
    cout<<"After, a++, The value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}