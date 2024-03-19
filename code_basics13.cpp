/* Pasha has a wooden stick of some positive integer length n. He wants to perform exactly three cuts to get four parts of the stick. 
Each part must have some positive integer length and the sum of these lengths will obviously be n.

Pasha likes rectangles but hates squares, so he wonders, how many ways are there to split a stick into four parts so that it's possible 
to form a rectangle using these parts, but is impossible to form a square.

Your task is to help Pasha and count the number of such ways. Two ways to cut the stick are considered distinct if there exists some
 integer x, such that the number of parts of length x in the first way differ from the number of parts of length x in the second way.

Input
The first line of the input contains a positive integer n (1 ≤ n ≤ 2e9) — the length of Pasha's stick.

Output
The output should contain a single integer — the number of ways to split Pasha's stick into four parts of positive integer length so 
that it's possible to make a rectangle by connecting the ends of these parts, but is impossible to form a square.

Sample -> if input = 6, output = 1 because only 1 way is there {1,1,2,2}

Sample -> if input = 20, output = 4 becuase 4 ways exists, {1,1,9,9}   {2,2,8,8}   {3,3,7,7}   {4,4,6,6} */

#include<iostream>
using namespace std;

int main()
{
        int n;
        cin>>n;
        if(n<6 || n&1)
        cout<<0;
        else
        {
            int a = 1;
            int way = 0;
            int b = (n-(a*2))/2;
            while(b!=a && b>a)
            {
                a++;
                b = (n-(a*2))/2;
                way++;
            }
            cout<<way;
        }
    return 0;
}