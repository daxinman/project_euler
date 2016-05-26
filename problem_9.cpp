// Project Euler
// Problem 9

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c;

	for (c = 1; c < 500; c++)
	{
		for (b = 1; b < 500; b++)
		{
			for (a = 1; a < 500; a++)
			{
				if (pow(a, 2) + pow(b, 2) == pow(c, 2)  && ((a + b + c) == 1000))  
				{
					cout << a << " " << b << " " << c << endl;
					unsigned long long answer= a*b*c;
					cout << answer << endl;
				}
			}
		}
	}
}