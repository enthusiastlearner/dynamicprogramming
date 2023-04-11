#include <iostream>
#include <vector>
using namespace std;

inline int fibonacci_recursive(int n)
{
	int nth_fib = 0;
	if (n <= 1)
		return n;
	nth_fib =  fibonacci_recursive(n - 2) + fibonacci_recursive(n - 1);
	return nth_fib;
}

inline int fibonacci_iterative(int n)
{
	//Time complexity : O(n) for given n
	//Auxiliary space : O(n)
	if (n <= 1)
		return n;

	vector<int> fib;
	
	fib.push_back(1);
	fib.push_back(1);

	for (int i = 2; i < n; ++i)
	{
		fib.push_back(fib[i - 2] + fib[i - 1]);
	}
	return fib[n-1];
}

inline int fibonacci_space_optimized(int n)
{
	//Time complexity : O(n) for given n
	//Auxiliary space : O(1)
	if (n <= 1)
		return n;
	int nth_fib = 0;
	int fib_1	= 1;
	int fib_2	= 0;
	for (int i = 2; i <= n; ++i)
	{
		nth_fib = fib_2 + fib_1;
		fib_2	= fib_1;
		fib_1	= nth_fib;
	}
	return nth_fib;
}



