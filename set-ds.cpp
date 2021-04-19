// Sri Subhash Pathuri
//@srisubhashp

#include<iostream>
#include<vector>
#include<stdio.h>
#include<set>
//Data Structures in C++
using namespace std;
//1. Vectors - Dynamic Array

int main()
{
    int i=0;
    vector<int> v;

    v.push_back(1);// [1] 
    v.push_back(2); 
    v.push_back(3);

    // Printing elements
    cout<<v[0]<<"\n";


    //2. Set DS- This data structure maintains a collection of elements. The basic operations are insertion, search and removal.
    
    /*

    Two implementations: 
    1- Structured set - Based on a balanced binary tree and its operations work on O(logN) time. 
    2 - unordered_set - Uses hastag, and its operations work on O(1) time. 

    [set] - maintains the order of elements and provides mroe functions. [unordered_set] is more efficient. 
    */
    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(4); 
    s.insert(2);

    cout<<s.count(2)<<"\n";// 2
    cout<<s.count(3)<<"\n";// 3

    s.erase(3); //removes the element 3

    //In a set it is not possible to access the elements using [] notation.
    // All elements are distinct in a set.
    // the function [insert] never adds a duplicate element to the set. 

    set<int> s1={2,4,6,8};

    cout<<"\n Size  = "<<s1.size(); //4

    for( auto x: s1)
    {
        cout<<"\n "<<x;
    }

    //There are also structures such as [multiset] & [unordered_multiset] which hold multiple instances of an element.

    multiset<int> s2;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    cout<<s.count(5)<<"\n"; //3

    // In [multiset]s, the function [erase] removes all the instances of an element from the dataset. 
    // Inorder to remove only the first copy of the element, we should use the below procedure.

    s.erase(s.find(5));
    cout<<"\n"<<s.count(5); //2

}




