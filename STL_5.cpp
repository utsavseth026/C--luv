// auto keyword and range based loops

#include<bits/stdc++.h>
using namespace std;

int main()
{
/* auto is a keyword, jo ki apne aap data type assign kar leta hai, you dont need to mention. 
Range based loops are used to iterate over a vector ya structure, such that ki element ki value aa jaye usmein*/
    vector<int> v = {2,4,3,1,0};
    for(int a:v) // so a gets value 2, then 4 , then 3 , then 1, then 0
    cout<<a<<" ";
    cout<<"\n ok \n";
    vector<vector<int>> v1 = {{1,2,3},{2,4,3},{4,5}};
    for(auto it: v1) // now it shall be getting each vector one by one
    {
        vector<int> temp = it;
        for(auto &it: temp) //it mein ab reference passing hui hai
        cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}