//Sri Subhash Pathuri
//@srisubhashp

#include<iostream>
#include<queue>
#include<stack>

using namespace std;

int main()
{
    // A Queue provides two O(1) oeprations: 
    // 1. Adding elements to the end of the queue
    // 2. Extrating the first element from the queue

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<"\n "<<q.front(); // 1
    q.pop(); 
    cout<<"\n "<<q.front(); // 2

    // A Deque is a dynamic array whose size can be efficiently changed at both ends of the array.
    // A Deque also provides the functions such as [push_back] & [pop_back], [push_front] and [pop_front]

    // The internal implementation of a Deque is much more complicated hence its slower than an Vector.
    // Adding and removing elements takes O(1) time.

    deque<int> d;
    d.push_back(5);
    d.push_back(2);
    d.push_front(3);
    d.pop_front();
    d.pop_back();

    // A Stack is a data structure that provides O(1) time operations:
    // 1. adding elements to the top of the Stack.
    // 2. Removing elements from the top of the Stack.

    stack<int> s1;

    s1.push(3);
    s1.push(2);
    s1.push(5);

    cout<<"\n "<<s1.top()<<endl; //5
    s1.pop();
    cout<<"\n "<<s1.top()<<endl; //2

    return 0;
}