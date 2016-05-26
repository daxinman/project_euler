// Project Euler
// Problem 7
// What is the 10001st prime number?

#include <iostream>
#include <cmath>
using namespace std;

bool check_prime(int n)
{
	for (int i = 2; i < (n-1); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int prime_count = 0;
	int n = 2;
	while (1)
	{
		if (check_prime(n))
			prime_count++;
		if (prime_count == 10001)
			break;
		n++;
	}
	cout << "the 10001st prime is " << n << endl;
	return 0;
}