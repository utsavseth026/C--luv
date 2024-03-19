/* Complex Nesting -> Input a students first name, last name along with the number of his subjects and marks of
each subject and display it all in the end */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string,string>,vector<int>> m;
    int num;
    cout<<"Enter the number of students\n";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        string fn,ln;
        int subject_count;
        cout<<"Enter first name, last name and no. of subjects and marks of each subject, all seperated by space\n";
        cin>>fn>>ln>>subject_count;
        vector<int>v;
        for(int i = 0;i<subject_count;i++)
        {
            int x;
            cin>>x;
            //m[{fn,ln}].push_back(x); // see m[key] means that value, so m[{fn,ln}] will now be a vector, toh vector ke saare functions aap uspe laga sakte ho. Another way can be to declare a vector first and then equate it;
            v.push_back(x);
        }
        m[{fn,ln}]=v;
    }
    for(auto &pr:m) // using & means we are usign references, so copy is not created, time is saved.
    {
        cout<<pr.first.first<<" "<<pr.first.second<<" ";
        auto &list = pr.second; // use & varna vector ki copy bani toh bahut tike lagega
        for(int &it: list)
        cout<<it<<" ";
        cout<<endl;
    }
}