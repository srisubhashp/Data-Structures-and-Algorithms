#include<iostream>
using namespace std;

//Sri Subhash Pathuri; 1st Aug-2020
// Return the final fibonacci number
int main(){

int fibonacci(int num){
    int a=0,b=0,result=0;

    do{
        if(num){
            result=a+b;
            a=b;
            b=result;
        }
    }while(num>1);
    return result;
}
}
