/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/
#include <stdio.h>
#include <math.h>

int main()
{
	int product = 0;
	for (int a = 1; a < 999; a++)
	{
		for (int b = a+1; (b < 1000 - a); b++)
		/* it doesn't really make a difference, but hey. */
		{
			for (int c = b+1; c<(1001 - b - a); c++)
			{
				/*printf("a:%ia^2:%i", a, pow(a,2));*/

				if (a*a+ b*b == c*c && a + b + c == 1000)
				{
					product = a * b * c;
				}
			}
		}
	}
	printf("answser:%i", product);
	return 0;
}