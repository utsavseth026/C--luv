// How operations happen when different datatypes are involved in c++

// By virtue of brain, we know that the popularity order is as follows: double>float>int>char

/* So if multiple datatypes are involved, all smaller priority datatypes shall be converted to largest priority datatypes and final 
answer bhi largest priority datatype mein hi aayega */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 3.5;
    cout<<a<<endl; // output is 3 because an integer variable cannot store decimal value

    cout<<9/2<<endl; // output is 4. Kyunki 9 hai int, 2 hai int, toh final output bhi int hi aayega

    int b=9/2; // 9 hai int, 2 hai int, toh final of 9/2 bhi int hi aayega and vohi b mein store hoga, 4.5 toh kabhi bana hi nahi
    cout<<b<<endl;

    cout<<9/2.0<<endl; // output hai 4.5 kyunki ek float hai and ek hai int

    float c = 9/2; // c will get 4 only, 4.5 toh kabhi banega hi nahi.
    cout<<c<<endl;

    int d = 9.0/2;
    cout<<d<<endl; //output hai 4 kyunki 4.5 toh bana, but d is of datatype int and so value after decimal is truncated.

    float e = 9/2.0;
    cout<<e<<endl; // now 4.5 banega bhi and kyunki d is of type float, toh 4.5 voh store kar bhi lega

    cout<<'c'+1<<endl; // We have a char and an integer, since integer is of higher priority, char shall be converted to int. // output is 100.

    cout<<7/2*3<<endl; // division and multiplicationn have same priority,so associativity comes into play, as per left associativity, division ka zyada mehatv hai, therefore 7/2 gives 3 and 3*3 is 9, therefore output is 9.

    cout<<7*3/2<<endl; // output is 10 kyunki 21/2 10 hoga and not 10.5

    cout<<7/2.0*3<<endl; //output is 10.5

    return 0;
}