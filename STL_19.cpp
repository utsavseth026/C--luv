#include<bits/stdc++.h>
using namespace std;

int main()
{
    //  Applying lower_bound and upper_bound on maps and sets
    
    map<int,int> m = {{1,2},{2,3},{34,45}};
    auto it = lower_bound(m.begin(),m.end(),6); // avoid this, dont know why it does not work
    if(it!=m.end())
    cout<<it->first<<" "<<it->second<<endl; 

   auto it1 = m.lower_bound(2);
    if(it1!=m.end())
    cout<<it1->first<<" "<<it1->second<<endl; 

   set<char> s = {'0','1','a','+','-'};
    char c = ')';
    auto it2 = upper_bound(s.begin(),s.end(),c);
    if(it2!=s.end())
    cout<<(*it2)<<endl;
    else
    cout<<"Error\n";
    return 0;
} 
