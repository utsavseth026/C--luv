// Iterators

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2,3,4,5};
    vector<int>:: iterator it1 = v.begin();
    for(;it1!=v.end();it1++)
    cout<<*it1<<" ";
    cout<<endl;

    vector<pair<int,string>> v1 = {{1,"abc"},{4,"poi"},{9,"lkj"}};
    vector<pair<int,string>>:: iterator it2 = v1.begin(); 
    while(it2!=v1.end())
    {
        // *it2 is a pair now
        cout<<(*it2).first<<" "<<it2->second<<endl;
        it2++;
    }
    return 0;
}