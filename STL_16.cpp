// Balanced Paranthesis Matching

#include<bits/stdc++.h>
using namespace std;

string isBalanced(string s) 
{
    stack<char> s1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='[' || s[i]=='{' || s[i]=='(')
        {
            s1.push(s[i]);
        }
        else if(s[i]==']' || s[i]=='}' || s[i]==')')
        {
            if(s1.size()==0)
            return "NO";
            else
            {
                if((s[i]==']' && s1.top()=='[') || (s[i]=='}' && s1.top()=='{') || (s[i]==')' && s1.top()=='('))
                {
                    s1.pop();
                    continue;
                }
                else 
                return "NO";
            }
        }
    }
    if(s1.size()==0)
    return "YES";
    else
    return "NO";
}

int main()
{
    string str;
    cout<<"Enter the string\n";
    cin>>str;
    cout<<isBalanced(str);
    return 0;
}