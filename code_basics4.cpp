// All about Strings

/* A string is a data structure available explicitly in C++ language, and not in C. Basically string is a 
class, and when we create a variable of this class, that is called an object. A string is a collection of 
characters, enclosed within double quotes, unlike simple char datatype which has characters enclosed within
single quote. */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // declaration 
    string str;

    // assigning values to strings
    str = "hello"; // way 1
    cout<<str<<endl;
    cout<<"enter the string\n";
    cin>>str; // way 2

    // getting string length
    cout<<str.size()<<endl; // way 1
    cout<<str.length()<<endl; //way 2

    //iterating over a string
    for(int i=0;i<str.length();i++)
    cout<<str[i]<<endl;

    //changing 1 or more characters of the string
    str[0]='a';
    str[2]='+';
    cout<<str<<endl;

    //Wrong ways
    //str[0]="a"; This is absolutely wrong, because str[any index] is a character, so a character cannot be equated to a string

    str = "cool"; // strings can be changed, but make sure string ko string ke saath hi change karo, dont do str = 'c';
    cout<<str<<endl;

    // concatenation of strings

    string str1;
    str1 = "World";
    string str2 = str+str1;
    cout<<str2<<endl;
    string str3 = str+" "+str1;
    cout<<str3<<endl;

    // strings can be compared
    if(str2 == str3)
    cout<<"Both are equal strings\n";
    else
    cout<<"Both strings are unequal\n";

    return 0;
}