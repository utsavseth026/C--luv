// Lower and Upper Bounds

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,3,2,4,5,6,33,0};
    sort(v.begin(),v.end());

    int arr[6] = {20,30,24,3,0,1};
    sort(arr,arr+6);

     auto it = lower_bound(v.begin(),v.end(),4);
    if(it!=v.end())
    cout<<(*it)<<endl; 
    auto it1 = lower_bound(v.begin()+2,v.end()-2,7);
    if(it1!=v.end())
    cout<<(*it1)<<endl;
     auto it2 = lower_bound(v.begin(),v.end(),34);
    if(it2!=v.end())
    cout<<(*it2)<<endl; 

    cout<<endl<<"ok"<<endl;

    auto it3 = upper_bound(arr,arr+6,2);
    if(it3!=(arr+6))
    cout<<(*it3)<<endl;  
    auto it4 = upper_bound(arr,arr+6,8);
    if(it4!=(arr+6))
    cout<<(*it4)<<endl;
    auto it5 = upper_bound(arr,arr+6,33);
    if(it5!=(arr+6))
    cout<<(*it5)<<endl;

    vector<string> v1 = {"abc","def","erf","deef"};
    sort(v1.begin(),v1.end());
    auto it6 = lower_bound(v1.begin(),v1.end(),"dg");
    if(it6!=v1.end())
    cout<<(*it6)<<endl;

    vector<pair<int,int>> v2 = {{1,2},{4,6},{0,2}};
    sort(v2.begin(),v2.end());
    pair<int,int> p = {3,5};
    auto it7 = lower_bound(v2.begin(),v2.end(),p);
    if(it7!=v2.end())
    cout<<it7->first<<" "<<it7->second<<endl;

    return 0;
}