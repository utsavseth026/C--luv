/* Problem
You have been given an array A of size N consisting of positive integers. You need to find and print the 
product of all the number in this array Modulo 1e9+7. 

Input Format:
The first line contains a single integer N denoting the size of the array. The next line contains N space
separated integers denoting the elements of the array

Output Format:
Print a single integer denoting the product of all the elements of the array Modulo 1e9+7.

Constraints
1<=N<=1e3
1<=A[i]<=1e3 */

#include <iostream>
using namespace std;

const int n = 1e9+7;

int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	int a[num];
	for(int i = 0;i<num;i++)
	cin>>a[i];
	long long int ans = 1;
	for(int i=0;i<num;i++)
	{
		ans = ((ans%n)*(a[i]%n))%n;
	}
	cout<<ans;
}

