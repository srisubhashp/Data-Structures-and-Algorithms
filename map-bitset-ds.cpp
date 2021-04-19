//Sri Subhash Pathuri
//@srisubhashp

#include<iostream>
#include<map>
#include<bitset>

using namespace std;

int main()
{
    // A Map is a general array that consists of key value pairs.
    // The keys and the values can be of any data type.

    // A Structed Map is based on a balanced binary tree and accessing elements take O(logN) time.
    // An Unstructured Map is based on a heap structure, and take O(1) time for accessing elements. 

    map<string,int> m;
    m["ram"]=2;
    m["shyam"]=3;
    m["giri"]=4;
    cout<<"\n "<<m["giri"]; // 4

    // If the value of a key is requested but the KEY is not present, then its assigned a default value.In the below example,
    cout<<m["john"]<<"\n"; //0

    // The function [count] checks if a key exists in the map.

    for(auto x : m)
    {
        cout<<"\n Index = "<<x.first<<" , value = "<<x.second;
    }

    //A bitset is an array whose value is either 0 or 1. 
    //They require less memory than ordinary arrays because they only use one bit of memory.

    //Forexample, if n bits are stored in an int array, 32n bits of memory will be used, but
    //a corresponding bitset only requires n bits of memory.

    bitset<10> bitSet1;// declares a bitset with a size 10.

    bitSet1[1]=1;
    bitSet1[3]=1;
    bitSet1[4]=1;
    cout<<"\n "<<bitSet1[4]<<" "; //1
    cout<<"\n "<<bitSet1[2]<<" "; //0

    //There's also another way of creating a bitSet.

    bitset<10> s(string("001001110")); // from right to left
    cout<<s[3]<<"\n"; //1
    cout<<s[4]<<"\n"; //4

    // The function count returns the number of 1s in the bitset.

    cout<<s.count()<<"\n"; //4

    //Further operations using BitSet:
    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));
    cout << (a&b) << "\n"; // 0010010000
    cout << (a|b) << "\n"; // 1011111110
    cout << (a^b) << "\n"; // 1001101110

    return 0;
}