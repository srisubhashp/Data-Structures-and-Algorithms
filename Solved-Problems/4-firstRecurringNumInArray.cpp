#include<iostream.h>
#include<stdio.h>
#include<map>

int main(){
    map<int,int> m;

    int arr[]={2,3,5,1,2,6,8,7};

    int len=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<len;i++){
        if(m.find(arr[i])==m.end())
            m(arr[i])=1;
        else
        {
            cout<<arr[i];
            return arr[i];
            break;
        }
    }
    return 0;
}