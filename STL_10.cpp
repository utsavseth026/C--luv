// Multi Maps -> Allows multiple keys, all pairs are in sorted order. 

// Also implemented using Red black trees, so complex declarations such as the ones at line 10 are allowed.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multimap<pair<int,string>,vector<int>> m1;
    multimap<int,int> m;
    //m[3]= 9;  indexed access is not allowed in multi maps
    m.insert({3,4});
    m.insert({5,6});
    m.insert({3,7});
    m.insert({6,7});
    m.insert({3,6});
    for(auto i = m.begin(); i!=m.end(); i++)
    cout<<i->first<<" "<<i->second<<endl;
    return 0;
}