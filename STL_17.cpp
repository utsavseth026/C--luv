// Custome Sorting behavior in vectors/arrays

#include<bits/stdc++.h>
using namespace std;

bool cmp1(int a,int b) // cmp1 is for vector v1 and v1 is made up of integers, toh take 2 integers ka example
{
    return a>b;
}

bool cmp2(pair<int,string> p1, pair<int,string> p2) // cmp2 is for v2, and v2 is made up of pairs, toh take 2 pairs as example
{
    if(p1.first!=p2.first)
    return p1.first>p2.first;
    else
    return p1.second>p2.second;

    // You could have simply used return p1>p2
}

/*In above comparator cmp2, if you type the following code, this would also work, so just write the code 
dimaag se and dhyaan se, just remember if you want to swap return false, if you dont want to swap, return true

if(p1.first>p2.first)
    return true;
    else if(p1.first==p2.first)
    {
        if(p1.second>=p2.second)
        return true;
        else
        return false;
    }
    else
    return false; */

int main()
{
    vector<int> v1 = {1,3,2,5,6,3,4,4,0,9,8,6};
    for(int it:v1)
    cout<<it<<" ";
    cout<<endl;
    sort(v1.begin(),v1.end(),cmp1); // cmp1 sorts in descending order
    for(int it:v1)
    cout<<it<<" ";
    cout<<endl<<endl;

    vector<pair<int,string>> v2 = {{1,"lkg"},{1,"pol"},{-3,"l"},{10,"w"}};
    for(auto it:v2)
    cout<<it.first<<" "<<it.second<<endl;
    cout<<endl;
    sort(v2.begin(),v2.end(),cmp2); // cmp2 to be used for sorting pairs in descending order.
    for(auto it:v2)
    cout<<it.first<<" "<<it.second<<endl;
    return 0;
}