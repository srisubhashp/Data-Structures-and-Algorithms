#include<iostream>
using namespace std;

//leetcode - Q67-binary
bool is_Prime(int n)
{
    if(n==1)
    return false;
    else if(n==2)
    return true;
    
    while(i*i<=n){

        if(n%i==0)
            return true;
        i++;
    }
    return false;
}