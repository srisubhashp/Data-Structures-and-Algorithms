#include<iostream>
#include<climits>
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
                temp=tempHead;
                tempHead=tempHead->next;
            }
            temp->next=NULL;
            free(tempHead);
            len--;
        }
    }
}
 int length(){
        return len;
    }

    void deleteAtPos(int pos){
        if(pos<0||pos>length())
            cout<<"\n Invalid, As position is out of Bounds";
        else{
            if(head->next==NULL||pos==0){
                deleteBeg();
                return;
            }
            else{
                Node* tempHead=head;
                Node* temp=NULL;
                while(pos--){
                    temp=tempHead;
                    tempHead=tempHead->next;
                }
                temp->next=tempHead->next;
                free(tempHead);
                len--;
            }
        }
    }

    void findMax(){
        int max=INT_MIN;
        if(head==NULL){
            cout<<"THe List is Empty";
            return;
        }
        Node* tempHead=head;
        while(tempHead){
            if(tempHead->data>max){
                  max=tempHead->data;
             }
             tempHead=tempHead->next;
         }
        cout<<"\n The maximum element in the list is "<<max;
    }

    void findMin(){
        int min=INT_MAX;
        if(head==NULL){
            cout<<"THe List is Empty";
            return;
        }
        Node* tempHead=head;
        while(tempHead){
            if(tempHead->data<min){
                  min=tempHead->data;
             }
             tempHead=tempHead->next;
         }
        cout<<"\n The minimum element in the list is "<<min;
    }

    void findSum(){
        if(head==NULL){
            cout<<"List is already empty";
        }
        else{
            int sum=0;
            Node* tempHead=head;
            while(tempHead){
                sum+=tempHead->data;
                tempHead=tempHead->next;
            }
            cout<<"\n The Sum of the elements in the list is "<<sum;
        }
    }
    void addPos(int data,int pos){
        if(pos<0||pos>length()){
            cout<<"\n Index Out of Bounds";
            return;
        }
        else{
            Node* tempHead=head;
            Node* temp=NULL;
            Node* newNode=createNode(data);

            while(pos--){
                temp=tempHead;
                tempHead=tempHead->next;
            }
            newNode->next=temp->next;
            temp->next=newNode;
        }
    }
    void reverseList(){
        if(head==NULL){
            cout<<"\n The List os empty.";
            return;
        }
            Node* curr=head,*next=NULL,*prev=NULL;
            while(curr){
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }
        head=prev;    
    }

    void swap(int *a,int *b){
        int temp=*a;
        *a=*b;
        *b=temp;
    }

    void sortList(){
        if(head==NULL){
            cout<<"The Linked list is already empty";
            return;
        }        
            Node* a=head,*b=NULL;
            while(a){
                b=a->next;
                while(b){
                    if(b->data<a->data)
                        swap(&b->data,&a->data);
                    b=b->next;
                }
                a=a->next;
            }
    }
//main function to handle linked list
int main()
{
	while(1)
	{
		cout<<"\n1.add at begin\n2.add at end\n3.delete at begin\n4.delete end\n";
		cout<<"5.delete at specified position\n6.display linked list\n7.find max\n";
		cout<<"8.find min\n9.display sum of elements of linked list";
		cout<<"\n10.inserting a node at a desired position\n11.reversing a linked list\n12.sort the list";
		cout<<"\n\nenter your option";
		
		int option, data, pos;
		cin >> option;
		
		if(option > 12 || option < 0)
			break;
		
		switch(option)
		{
			case 1:
				cout<<"\nenter value to add ";
				cin>>data;
				addBeg(data);
				break;
				
			case 2:
				cout<<"\nenter value to add ";
				cin>>data;
				addEnd(data);
				break;
			
			case 3:
				deleteBeg();
				break;
			
			case 4:
				deleteEnd();
				break;
				
			case 5:
				cout<<"\nenter position of element use 0 based indexing";
				cin>>pos;
				deleteAtPos(pos);
				break;
			
			case 6:
				display();
				break;
			
			case 7:
				findMax();
				break;
			
			case 8:
				findMin();
				break;
			
			case 9:
				findSum();
				break;
				
			case 10:
				cout<<"\nenter data ";
				cin>>data;
				cout<<"\nenter position use 0 based indexing ";
				cin>>pos;
				addPos(data, pos);
				break;
				
			case 11:
				reverseList();
				break;
				
			case 12:
				sortList();
				break;
				
		}	
	}
}




