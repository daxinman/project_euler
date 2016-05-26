// Project Euler
// Problem 5
// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?

#include <iostream>
using namespace std;

int main()
{
	int n = 2520;
	int count = 0;
	while (1)
	{
		for (int i = 1; i < 20; i++)
		{
			if (n % i == 0)
			{
				count++;
				if (count == 19)
					cout << n << endl;
			}
		}
		count = 0;
		n++;
	}
}