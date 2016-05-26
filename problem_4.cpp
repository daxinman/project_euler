// Project Euler
// Problem 4
// A palindromic number reads the same both ways.
// The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3 - digit numbers.

#include <iostream>
using namespace std;

bool check_palindrom(int n)
{
	int reverse = 0;
	int check = n;
	do {
		reverse = (reverse * 10) + (n % 10);
		n = n / 10;

	} while (n != 0);

	if (check == reverse)
		return true;
	else if (check != reverse)
		return false;
}

int main()
{
	int current_max = 1;
	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			int sum = i * j;
			if (check_palindrom(sum) && (sum > current_max))
				current_max = sum;
		}
	}
	cout << current_max << endl;
	return 0;
}