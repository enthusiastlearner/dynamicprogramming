# include "fibonacci.cpp"
#include<iostream>
using namespace std;

int main()
{
    int n = 3;
    int nth_fib = fibonacci_space_optimized(n);
    cout << nth_fib;
    return 0;
}