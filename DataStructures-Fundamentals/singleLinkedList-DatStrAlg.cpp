//https://github.com/sanketpathak64/Data-Structures-and-Algorithms/blob/master/Data%20Structures/Linked%20List/Singly%20Linked%20List/linkedlist.cpp
#include<iostream>
using namespace std;

typedef struct Node{
    int data;
    struct Node* next;
}Node;

int len=0;

Node* head=NULL;;

Node* createNode(int data){
    Node* temp=new Node(); //Node* temp=(Node* )mallow(sizeof(Node));
    temp->data=data;
    temp->next=NULL;
    len++;
    return temp;
}

void addBeg(int data){
    Node* temp=createNode(data);
    temp->next=head;
    head=temp;
}

void addEnd(int data){
    Node* temp=createNode(data);

    Node* tempHead=head;

    if(head==NULL)
        head=tempHead;
    else
    {
        while(tempHead->next)//check so that we stop at the last element
            tempHead=tempHead->next;
        tempHead->next=temp;
    } 
}

void display(){
    if(head==NULL)
        cout<<"\n List is currently empty.";
    else
    {
        cout<<"\n Linked List : ";
        Node* tempHead=head;
        while(tempHead){
            cout<<tempHead->data<<" ";
            tempHead=tempHead->next;
        }
    }
}

void deleteBeg(){//to delete the first Node
    if(head==NULL)
        cout<<"\n Cannot delete as the List is empty.";
    else{
        Node* tempHead=head;
        head=head->next;
        free(tempHead);
        len--;
    }
}

void deleteEnd(){
    if(head==NULL)
        cout<<"\n List is already empty.";
    else{
        if(head->next==NULL){// if the list has only one element
            head=NULL;
            free(head);
            len--;
        }
        else{// if list has many elements
            Node* tempHead=head;
            Node* temp;
            while(head->next!=NULL){
                temp=head;
                head=head->next;
            }
            tempHead->next=NULL;
            free(temp);
            len--;
        }
    }
}
