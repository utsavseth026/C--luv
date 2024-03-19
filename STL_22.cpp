#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    priority_queue<vector<int>> pq1;
    priority_queue<pair<int,int>> pq2;
    cout<<"Enter the number of elements you wish to enter in pq of integers\n";
    int num;
    cin>>num;
    for(int i=0;i<num;++i)
    {
        int x;
        cin>>x;
        pq.push(x);
    }
    cout<<"Enter the number of elements you wish to enter in pq of vectors\n";
    int num1;
    cin>>num1;
    for(int i=0;i<num1;++i)
    {
        int size;
        cout<<"Enter vector "<<i+1<<" size\n";
        cin>>size;
        int x;
        vector<int> v;
        for(int j=0;j<size;j++)
        {
            cout<<"Enter element "<<j+1<<endl;
            cin>>x;
            v.push_back(x);
        }
        pq1.push(v);
    }
    cout<<"Enter the number of elements you wish to enter in pq of pairs\n";
    int num2;
    cin>>num2;
    for(int i=0;i<num2;++i)
    {
        cout<<"Enter pair "<<i+1<<endl;
        int x,y;
        cin>>x>>y;
        pq2.push({x,y});
    }

    cout<<"\n Printing pq of integers\n";
    while(pq.size())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
    cout<<endl;

     cout<<"Printing pq of vectors\n";
    while(pq1.size())
    {
        vector<int> temp = pq1.top();
        for(int i=0;i<temp.size();i++)
        cout<<temp[i]<<" ";
        pq1.pop();
        cout<<endl;
    }
    cout<<endl;

     cout<<"Printing pq of Pairs\n";
    while(pq2.size())
    {
        cout<<pq2.top().first<<" "<<pq2.top().second<<endl;
        pq2.pop();
    }
    cout<<endl;

    priority_queue<int,vector<int>,greater<int>> pq_1;//Syntax of min heap of integers, min element is always at top
    priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq_2; //Syntax of min heap of vectors, min element is always at top
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq_2; // Syntax of main heap of pairs
    return 0;
}

