// Nesting of vectors

#include<bits/stdc++.h>
using namespace std;

void PrintVectorOfStrings(vector<pair<int,string>> v)
{
    for(int i=0;i<v.size();++i)
    {
        pair<int,string> temp = v[i];
        cout<<temp.first<<" "<<temp.second<<endl;
    }
}

void PrintVectorOfVectors(vector<vector<int>> v)
{
    for(int i=0;i<v.size();++i)
    {
        vector<int> temp = v[i];
        for(int j=0;j<temp.size();++j)
        cout<<temp[j]<<" ";
        cout<<endl;
    }
}

void PrintArrayOfVectors(vector<int> arr[],int n)
{
    for(int i=0;i<n;++i)
    {
        vector<int> temp = arr[i];
        for(int j=0;j<temp.size();++j)
        cout<<temp[j]<<" ";
        cout<<endl;
    }
}

int main()
{
    // Example 1: Vector of Pairs

    vector<pair<int,string>> v;
    int num;
    cout<<"Enter the number of pairs you wish to enter in the vector\n";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        pair<int,string> temp;
        cout<<"Enter integer value and string value of pair "<<i+1<<endl;
        cin>>temp.first>>temp.second;
        v.push_back(temp);
    }
    PrintVectorOfStrings(v);

    // Example 2: Vector of vectors

    vector<vector<int>> v1;
    int num1;
    cout<<"Enter the number of vectors you wish to enter in the main vector\n";
    cin>>num1;
    for(int i=0;i<num1;i++)
    {
        vector<int> temp; // Note you cannot directly do v[i].push_back(any integer value), kyunki v toh abhi khaali hai, v[i] kuch hai nahi abhi. One more way can be you first push_back an empty vector, and then you can do the previous method
        cout<<"enter size of vector "<<i+1<<endl;
        int size;
        cin>>size;
        for(int i=0;i<size;++i)
        {
            int x;
            cout<<"Enter element "<<i+1<<endl;
            cin>>x;
            temp.push_back(x);
        }
        v1.push_back(temp);
    }
    PrintVectorOfVectors(v1);

    // Example 3: Array of vectors
    int N;
    cout<<"Enter the array size\n";
    cin>>N;
    vector<int> arr[N]; // arr is an array of size N , wherein each element is a vector, which means arr[i] is a vector
    for(int i=0;i<N;i++)
    {
        int vector_size;
        cout<<"Enter size of vector "<<i+1<<endl;
        cin>>vector_size;
        for(int j=0;j<vector_size;++j)
        {
            int x;
            cout<<"Enter "<<j+1<<" element of vector "<<i+1<<endl;
            cin>>x;
            arr[i].push_back(x);
        }
    }
    PrintArrayOfVectors(arr,N);
    return 0;

}