// String reversal, and storing very very large numbers is c++ using strings

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cout<<"Enter string 1\n";
    cin>>s1;
    cout<<s1.back()<<endl;
    cout<<s1.front()<<endl;
    cout<<"The string before reversal is "<<s1<<endl;

    ///////////way 1
    for(int i=0;i<s1.size()/2;i++)
    swap(s1[i],s1[s1.size()-i-1]);
    cout<<"The string after reversal is "<<s1<<endl;

    //////////way 2
    string str_rev;
    for(int i = s1.length()-1; i>=0 ; i--)
    str_rev = str_rev + s1[i]; // characters can be added via plus operator to string.Another way ould have been to use push_back, str_rev.push_back(s1[i])


    ////////////////////////////////////////////////////////////////////////////////////

    string s2;
    cout<<"Enter string 2, a very large number, and note that each number shall be stored as character in the string\n";
    cin>>s2;
    cout<<"Suppose you want to obtain the third last digit of this number, just for fun ya practice\n";
    int third_last_digit = s2[s2.length()-3]-'0';
    cout<<third_last_digit<<endl;
    
    // adding 1 to that large number and displaying the result. Be careful, at each index, we have character, not the integer 
    int n = s2.size()-1;
    for(int i=n;i>=0;i--)
    {
        if(s2[i]!='9')
        {
            s2[i]=s2[i]+1;
            break;
        }
        else
        {
            s2[i]='0';
        }
    }
    if(s2[0]=='0')
    s2='1'+s2;
    cout<<"\n The number is "<<s2;
    return 0;
}