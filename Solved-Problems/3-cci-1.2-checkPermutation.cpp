#include<iostream.h>
#include<stdlib.h>
#include<string.h>

// This is the Check Permutation solution for the q. on pg 90.
//Check if two strings are different or just one is a permutation of the other
using namespace std;
 
bool check_permutation(string a,string b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    return a == b;
}