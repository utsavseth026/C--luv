#include<bits/stdc++.h>
using namespace std;

void PrintStackDouble(stack<double> s);
void PrintStackPair(stack<pair<int,int>> s);

void PrintQueueString(queue<string> q);
void PrintQueueVector(queue<vector<int>> q1);

void PrintDequeInt(deque<int> dq);
void PrintDequePair(deque<pair<int,string>> dq1);

int main()
{
    // Stacks
    stack<double> s;
    stack<pair<int,int>> s1;
    s.push(9.3);
    s.push(1.45);
    s.push(2.333);
    s.push(6.78);
    PrintStackDouble(s);
    s1.push({1,2});
    s1.push({3,4});
    s1.push({5,6});
    s1.push({7,8});
    PrintStackPair(s1);

    cout<<endl;

    // Queues
    queue<string> q;
    queue<vector<int>> q1;
    q.push("abc");
    q.push("Pol");
    q.push("mnb");
    PrintQueueString(q);
    q1.push({1,2,3});
    q1.push({5});
    PrintQueueVector(q1);

    //deques
    deque<int> dq;
    deque<pair<int,string>> dq1;
    dq.push_back(3);
    dq.push_back(6);
    dq.push_back(5);
    dq.push_back(1);
    dq.push_back(2);
    PrintDequeInt(dq);
    dq1.push_back({2,"abc"});
    dq1.push_back({4,"a"});
    dq1.push_back({3,"dev"});
    dq1.push_back({1,"abcddd"});
    PrintDequePair(dq1);
    return 0;
}

void PrintStackDouble(stack<double> s)
{
    while(s.size())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

void PrintStackPair(stack<pair<int,int>> s)
{
    while(s.size())
    {
        cout<<(s.top()).first<<" "<<(s.top()).second<<endl;
        s.pop();
    }
}

void PrintQueueString(queue<string> q)
{
    while(q.size())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

void PrintQueueVector(queue<vector<int>> q1)
{
    while(q1.size())
    {
        for(auto &it:q1.front())
        {
            cout<<it<<" ";
        }
        cout<<endl;
        q1.pop();
    }
    cout<<endl;
}

void PrintDequeInt(deque<int> dq)
{
    while(dq.size())
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    cout<<"\n";
}

void PrintDequePair(deque<pair<int,string>> dq1)
{
    while(dq1.size())
    {
        cout<<dq1.front().first<<" "<<dq1.front().second<<endl;
        dq1.pop_front();
    }
    cout<<"\n";
}

