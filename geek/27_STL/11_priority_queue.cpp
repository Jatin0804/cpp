#include<iostream>
using namespace std;
#include<queue>


void showpq1( priority_queue<int, vector<int>, greater<int>> gq)
{
    priority_queue<int,vector<int>,greater<int>> g=gq;
    cout<<endl<<"Priority queue in min heap : ";

    while(!g.empty())
    {
        cout<<g.top()<<"  ";
        g.pop();
    }
    cout<<endl;
}

void showpq(priority_queue<int> gq)
{
    priority_queue<int> g=gq;
    while (!g.empty())
    {
        cout << g.top() << "  ";
        g.pop();
    }
}
int main()
{
    int arr[6]={10,6,5,4,8,2};
    priority_queue<int> pq;

    cout<<"Array : ";
    for(auto i:arr)
        cout<<i<<"  ";
    cout<<endl;

    for(int i=0;i<6;i++)
        pq.push(arr[i]);
    
    cout<<"Priority queue : ";
    showpq(pq);

    priority_queue<int,vector<int>,greater<int>> pq1(arr,arr+6);

    showpq1(pq1);

    // Note: We can only access the top element in the priority queue.

    priority_queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(100);
    gquiz.push(120);
    gquiz.push(20);
    gquiz.push(40);
    gquiz.push(50);
    gquiz.push(5);
    gquiz.push(2);
    gquiz.push(0);
    gquiz.push(300);

    cout<<endl<<"The priority queue gquiz : ";
    showpq(gquiz);

    cout<<endl<<"gquiz size : "<<gquiz.size();
    cout<<endl<<"gquiz top element : "<<gquiz.top();
    cout<<endl<<"gquiz pop element : "<<gquiz.top();
    gquiz.pop();
    cout<<endl<<"Now gquiz : ";
    showpq(gquiz);

    // swap() function
    // emplace() function

    return 0;
}