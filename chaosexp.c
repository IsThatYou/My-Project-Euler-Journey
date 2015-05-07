#include <stdio.h>
int main()
{
	double r = 3.1;
	double x = (r-1)/r;
	int iteration = 1000;
	double sum = 0.0;
	for (int i = 0; i < iteration; i++)
	{
		sum = r*x*(1-x);
		x = sum;
		printf("%f", x);
	}
	return 0;
}