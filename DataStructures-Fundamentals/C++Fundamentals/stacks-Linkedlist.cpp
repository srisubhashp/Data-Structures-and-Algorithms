#include<iostream>
#include<cstdlib>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

class Stack{
    Node* top;
    int totalNodes;
    public:
    Stack(){
        top=NULL;
        totalNodes=0;
    }

    void push(int newEntry){
        Node* temp=new Node;
        temp->data=newEntry;
        temp->next=NULL;
        if(top==NULL){
            top=temp;
            totalNodes++;
            return;
        }
            temp->next=top;
            top=temp;
            totalNodes++;
    }

    void pop(){
        if(top==NULL){
            cout<<"\nStack Underflow or Empty.";
            return;
        }
        Node* latestNode=new Node;
        latestNode=top;
        cout<<"\n Current Node with value : "<<latestNode->data<<" deleted.";
        top=top->next;
        free(latestNode);
        totalNodes--;
    }
    
    void display(){
        if(top==NULL){
            cout<<"\n The Stack is already empty.";
            return;
        }
        Node* temp=new Node;
        temp=top;
        cout<<"\n Current Stack : ";
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.display();

    return 0;
}

