// Maps --> All operations take O(logn) time, Stores elements in unique and sorted order as per keys

#include<bits/stdc++.h>
using namespace std;

void PrintMapWay1(map<int,string> m1);
void PrintMapWay2(map<int,string> m1);

int main()
{
    map<int,string> m; // all data inside map would be in the form of key,value pairs only.
    m[1] = "abc"; // THis operation, m[any index] takes logN where N is current map size.
    m[3] = "dea";
    m.insert({4,"pol"}); // insert operation also takes O(logN) time. 
    pair<int,string> p = {7,"red"};
    m.insert(p); 
    PrintMapWay1(m);
    cout<<"ok"<<endl;
    PrintMapWay2(m);
    return 0;
}

void PrintMapWay1(map<int,string> m1)
{
    for(auto it = m1.begin();it!=m1.end();++it)
    cout<<it->first<<" "<<it->second<<endl;
}

void PrintMapWay2(map<int,string> m1)
{
    for(auto &el:m1)
    cout<<el.first<<" "<<el.second<<endl;
}