// Maps --> All operations take O(logn) time.

#include<bits/stdc++.h>
using namespace std;

void PrintMapWay1(map<int,string> m1);
void PrintMapWay2(map<int,string> m1);

int main()
{
    map<int,string> m; 
    m[1] = "abc"; 
    m[3] = "dea";
    m[4] = "pol"; 
    m[7] = "red";
    PrintMapWay1(m);
    auto it = m.find(7);
    if(it!=m.end()) // this is a check you should employ kyunki agar m.end() return hua, toh you end up in fault
    std::cout<<it->first<<" "<<it->second<<endl;
    m.erase(7);
    PrintMapWay2(m);
    auto it1 = m.find(4);
    if(it1!=m.end()) // use this safety check before aplying erase. otherwise if this gets m.end(), segmentation fault
    m.erase(it1);
    PrintMapWay2(m);
    return 0;
}

void PrintMapWay1(map<int,string> m1)
{
    for(auto it = m1.begin();it!=m1.end();++it)
    std::cout<<it->first<<" "<<it->second<<endl;
    std::cout<<endl;
}

void PrintMapWay2(map<int,string> m1)
{
    for(auto &el:m1)
    std::cout<<el.first<<" "<<el.second<<endl;
    std::cout<<endl;
}