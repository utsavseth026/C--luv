/* unordered_map, stores elements as per unique and any order of keys.

implemented usign hash tables, so very complex datatypes cannot be used. As a thumb rule, use primitive 
datatypes only. Since they are implemented using hash tables, isliye access kaafi fast hai. */


#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int> m;
    m["str"] = 9;
    m["ffffff"] = 1;
    m.insert({"polll",1});
    for(auto it = m.begin();it!=m.end();it++)
    cout<<it->first<<" "<<it->second<<endl;
    auto it = m.find("str");
    if(it!=m.end())
    {
        cout<<"String "<<it->first<<" Found\n";
        m.erase(it);
    }
    cout<<endl;
    for(auto it = m.begin();it!=m.end();it++)
    cout<<it->first<<" "<<it->second<<endl;
    return 0;
}