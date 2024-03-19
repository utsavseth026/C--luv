// Conditional Statements - if else vagera. 
//The important thing to keep in mind is difference between multiple if's & if-elseif ladder(without else) & if-elseif-else ladder(with else)

// In multiple if's, every condition is checked. Jo bhi sahi hogi voh execute hongi, if nothing is correct, kuch bhi execute nahi hoga

// In if-elseif ladder, without else, jaise hi ek sahi milega, voh execute hoga, and straight away exit, and if nothing is correct, kuch bhi execute nahi hoga

//In if-elseif with else condition, jaise hi ek sahi milega,, voh execute hoga and then exit. In all cases, atleast one statement will be executed.

#include<bits/stdc++.h>
using namespace std;

int main()
{

    // Multiple if statements. Jo jo sahi hoga voh print ho jayega
    int a = 10;
    if(a<20)
    cout<<"c"<<endl;
    if(a<19)
    cout<<"d"<<endl;
    if(a>18)
    cout<<"e"<<endl;
    if(a<17)
    cout<<"f"<<endl;
    if(a<16)
    cout<<"g"<<endl;

    // if else-if ladder and no else. 
    int b = 10;
    if(b<9)
    cout<<"cool"<<endl;
    else if(b<8)
    cout<<"dool"<<endl;
    else if(b>18)
    cout<<"eool"<<endl;
    else if(b<17)
    cout<<"fool"<<endl;
    else if(b<16)
    cout<<"gool"<<endl;

    // if else-if ladder and no else. Here we can see nothing is executed
    int c= 10;
    if(c>20)
    cout<<"cool"<<endl;
    else if(c>19)
    cout<<"dool"<<endl;
    else if(c>18)
    cout<<"eool"<<endl;
    else if(c>17)
    cout<<"fool"<<endl;
    else if(c>16)
    cout<<"gool"<<endl;

    //if-elseif-else ladder
    int d = 10;
    if(d>20)
    cout<<"pool"<<endl;
    else if(d>19)
    cout<<"qool"<<endl;
    else if(d>18)
    cout<<"rool"<<endl;
    else if(d>17)
    cout<<"sool"<<endl;
    else
    cout<<"tool"<<endl;

    //LOOPS - for loop, while loop, do while loop. 

    // TO handle t test cases, first you write the logic in one test case and then put that entire code in while(t--)

    //Jump statements - break, continue. break gets you out of the most nearby for ya while loop. continue ends the current iteration.
    
    //In case of for loop, if you use continue, you move to next increment ya decrement vala part whereas in while loop, you may end in infinite loop.

    return 0;
}