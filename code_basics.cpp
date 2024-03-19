// Understanding cin and cout

/* Main thing to note is that cin and cout stop taking input after space ya enter. Use getline if you wish to 
consider space. Note that getline will not consider enter. */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter the integers\n";
    cin>>x>>y;
    cout<<"The value of first integer is "<<x<<" and the value of second integer is "<<y<<endl;

    string s1,s2;
    cout<<"enter first string and second string\n";
    cin>>s1>>s2;
    cout<<"The first string entered is "<<s1<<" and the second string entered is "<<s2<<endl;

    char ch1,ch2;
    cout<<"Enter the characters\n";
    cin>>ch1>>ch2;
    cout<<"The first character entered is "<<ch1<<" and the second character entered is "<<ch2<<endl; 

    char ch3 = 4;
    cout<<"The character ch3 is "<<ch3<<endl;
    char ch4;
    cout<<"Enter character ch4 "<<endl;
    cin>>ch4; // Type 4 here and compare with above case of char ch3 = 4 to know the result. Actually it is same as char ch = '4'
    cout<<"The character ch4 is "<<ch4<<endl; 

    fflush(stdin); // To clear the input buffer, may need to be used sometimes

    // Using getline in case of strings
    string s3;
    cout<<"Enter the string\n";
    getline(cin,s3);
    cout<<"The string entered is "<<s3;  

    /* A typical getline case is as follows:, when we are inputting test cases and then strings, toh there can be some mishappeings.
    Suppose we input 3 at test_cases, toh it will take only 2 strings, kyunki getline considers new input the moment it encounters an enter
    and in the buffer, there is an enter ya \n after getting the input of number of test cases, toh jaise hi aap 3 ya koi bhi number 
    type karne ke baad enter type karoge, \n is present in buffer which shall be considered as one of the inputs. Dont take too much load
    yahi ek special case bas yaad rakh lena */
    int test_cases;
    cin>>test_cases;
    cin.ignore(); // this helps to avoid this issue
    while(test_cases--)
    {
        string z;
        getline(cin,z);
    }
    return 0;
}