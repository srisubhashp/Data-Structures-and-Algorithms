#include<iostream>
#include<math.h>

int findFactorialRecursive(int number){
    if(number<2)
        return 1;

    return number*findFactorialRecursive(number-1);
} //O(n) Run time. 

int fibonacciRecursive(int number){
    if(number<2)
        return number;
    return fibonacciRecursive(number-1)+fibonacciRecursive(number-2);
}

