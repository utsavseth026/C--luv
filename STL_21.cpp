// C++ Stl revision

#include<bits/stdc++.h>
using namespace std;

bool is_positive(int x)
{
    return x>0;
}

int main()
{

    // Example of lambda function
   cout<<[](int x,int y){return x+y;}(2,3)<<endl;


    vector<int> v = {1,3,2,5,4,7};
    vector<int> v1 = {1,-2,3,4};
    vector<int> v2 = {2,3,1,5,4,3,7,8};
    cout<<all_of(v.begin(),v.end(),is_positive)<<endl;
    cout<<all_of(v1.begin(),v1.end(),is_positive)<<endl;
    cout<<all_of(v2.begin(),v2.end(),[](int x){return x>0;})<<endl;

    cout<<any_of(v1.begin(),v1.end(),is_positive)<<endl;
    cout<<none_of(v2.begin(),v2.end(),[](int x){return x>0;})<<endl;
    return 0;
   // cout<<all_of(v2.begin(),v2.end(),[])
}