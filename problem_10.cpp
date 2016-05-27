// Project Euler
// Problem 10

#include <iostream>
#include <cmath>
using namespace std;

bool check_prime(int n)
{
	if (n <= 1)
		return false;
	else if (n == 2)
		return true;
	else if (n % 2 == 0)
		return false;
	else
	{
		for (int i = 3; i < (sqrt(n) +1); i++)
		{
			if (n % i == 0)
				return false;	
		}
		return true;
	}
}

int main()
{
	long limit = 2000000;
	long long current_sum = 0;
	int i;

	for  (i = 1; i < limit; i++)
	{
		if (check_prime(i))
			current_sum += i;
		cout << current_sum << "        " << i <<endl;
	}
	cout << current_sum <<endl;
}