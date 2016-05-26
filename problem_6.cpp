// Project Euler
// Problem 6
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n = 100;
	int int_sum = 0;
	int int_squares = 0;

	for (int i = 1; i <= n; i++)
	{
		int_sum += i;
		int_squares += i*i;
	}
	cout << (int_sum*int_sum) - int_squares << endl;
	return 0;
}