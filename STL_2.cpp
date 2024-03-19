// Vectors

// Can be thought of as arrays, whose size we can change as we want.

#include<bits/stdc++.h>
using namespace std;

void PrintVec(vector<int> temp)
{
    for(int i = 0;i<temp.size();++i)
    cout<<temp[i]<<" ";
    cout<<endl;
}

void PrintVec2(vector<string> temp)
{
    for(int i = 0;i<temp.size();++i)
    cout<<temp[i]<<" ";
    cout<<endl;
}

int main()
{
    int num;
    cout<<"Enter the number of elements you want to enter "<<endl;
    cin>>num;
    vector<int> v; // right now vector size is 0, you cannot do v[2] = 3, kyunki abhi no memory is allocated.
    for(int i = 0;i<num;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    PrintVec(v);
    
    vector<int> v1(10); /* so now v1 is a vector, a continous memory location, having 10 zeroes allocated, 
    here you can do v[2] = 3. but never allocate vector this way, kyunki baaki jagah toh still zeroes hi hai.
    
     in above statement, v1, can be still resized, and elements can be pushed onto it.

Keep in mind, push_back vohi cheez kar sakte ho, jisse apne voh structure banaya hai if a vector is of 
int, you can only push int You cannot push a vector there, if you have a vector of vectors, you can only push a
vector in it, you cannot push an integer */

    vector<string> v2; // vector of strings
    int num1;
    cout<<"Enter the number of strings you want to enter\n";
    cin>>num1;
    for(int i=0;i<num1;++i)
    {
        string s;
        cin>>s;
        v2.push_back(s);
    }
    PrintVec2(v2);
    return 0;
}