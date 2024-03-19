// Multi maps

#include<bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int,string> m1;
    m1.insert({1,"abc"});
    m1.insert({2,"abcd"});
    m1.insert({1,"qabc"});
    m1.insert({10,"vvabc"});
    m1.insert({10,"abc"});
    for(auto &el:m1)
    cout<<el.first<<" "<<el.second<<endl;
    return 0;
}