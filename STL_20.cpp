// C++ Stl revision

/* All Time Common -> begin(), end(), erase(it ya el), find, clear, size */

#include<bits/stdc++.h>
using namespace std;

void PrintVector(vector<int> &v)
{
    for(auto it:v)
    cout<<it<<" ";
    cout<<endl;
}

void PrintMap(map<int,string> m)
{
    for(auto &pr:m)
    cout<<pr.first<<" "<<pr.second<<endl;
}

int main()
{
    // Vectors
    vector<int> v = {10,2,3,1,6,5,7};
    sort(v.begin()+1,v.end());
    PrintVector(v);
    reverse(v.begin(),v.end());
    PrintVector(v);
    cout<<*(--v.end())<<endl;
    cout<<v.size()<<endl;
    auto it = find(v.begin(),v.end(),2); 
    cout<<it-v.begin();
    // To insert at any position, you can use v.insert(it,el)
    auto it = v.insert(v.begin()+3,100);
    PrintVector(v);
    v.clear();
    PrintVector(v);


    // Strings
    string s = "ab34lpo-";
    sort(s.begin()+2, s.end()-2);
    cout<<s<<endl;
    reverse(s.begin(),s.end()-1);
    cout<<s<<endl;
    cout<<s.size()<<endl;
    auto it1 = s.find("l43"); // find returns an index on strings
    if(it1!=s.size())
    cout<<it1<<endl;
    else
    cout<<"Not found\n";
    s.clear();
    cout<<s<<endl;
    string temp = s.substr(3,5); // temp shall get that substring
    cout<<temp<<endl;

    // maps
    map<int,string> m = {{1,"ab"},{0,"2"}};
    m[4] = "gvvv";
    PrintMap(m);
    cout<<m.size()<<endl;
    auto it2 = m.find(1);
    if(it2!=m.end())
    cout<<it2->first<<" "<<it2->second<<endl;
    m.clear();

    //sets-> same as maps.
    
    // stacks & Queues have easy operations 
}