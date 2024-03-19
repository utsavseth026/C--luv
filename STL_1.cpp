// Pairs

#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string> p;
    cout<<"Enter the values of pair, which are an integer and a string\n";
    cin>>p.first>>p.second;
    cout<<"Printing pair p "<<endl;
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,string> p1 = p;  // pass by value
    p1.first++;
    p1.second = " ";
     cout<<"Printing pair p1 "<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int,string> &p2 = p; // pass by reference
    p2.first = p2.first + 3;
    p1.second = "cool";
    cout<<"Printing pair p2 "<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    
    pair<int,double> p4 = {4,7.8};
    cout<<p4.first<<" "<<p4.second<<endl;
    return 0;
}