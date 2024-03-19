// Given t test cases, and some strigs,  for each test case print them in lexographical order, with their frequency.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test_cases;
    cout<<"Enter the Number of test cases\n";
    cin>>test_cases;
    for(int i = 1;i<=test_cases;i++)
    {
        map<string,int> m;
        int num;
        cout<<"Enter the number of strings for test case "<<i<<endl;
        cin>>num;
        while(num--)
        {
            string str;
            cin>>str;
            m[str]++;
        }
        cout<<endl;
        for(auto &pr:m)
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return 0;
}