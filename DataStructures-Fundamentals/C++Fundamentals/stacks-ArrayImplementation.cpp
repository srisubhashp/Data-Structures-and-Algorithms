#include<iostream>
#include<cstdlib>
using namespace std;
#define Size 128


class Stack{
    int top;
    int *arr;
    public:
        Stack(){
            top=-1;
            arr=new int[Size];
        }
        void push(int data){
            if(top>(Size-1)){
                cout<<"\n The Stack is already full";
                return;
            }
            top=top+1;
            arr[top]=data;
        }

        int pop(){
            if(top==-1){
                cout<<"\n The Stack is already empty.";
                return 0;
            }   
            int data=arr[top];
            top=top-1;
            return data;
        }

        int peek(){
            return arr[top];
        }

        void display(){
            if(top==-1){
                cout<<"\n The Stack is already empty.";
                return;
            }
            cout<<"\n The Stack Elements are : "<<endl;
            while(top){
                cout<<arr[top--]<<" ";
            }
        }
};
int main() {
    Stack s;
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);// note the output 60 will come first even if it was added at last.

    cout<<"Element "<<s.pop()<<" has been deleted."<<endl;
    s.display();
    return 0;
}
