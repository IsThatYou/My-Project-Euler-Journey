/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <time.h>
using namespace std;
int *sieves(int m)
{
	bool *ahrrr = (bool *)calloc(m, sizeof(bool));
	/*bool *ahrrr = (bool *) malloc(m* sizeof(bool));*/
	
	
	for (int i = 2; i < m + 1; i++)
	{
		if (i % 2 == 0)
		{
			ahrrr[i - 1] = 1;
		}
	}
	ahrrr[0] = 0;
	ahrrr[1] = 0;
	ahrrr[2] = 1;
	for (int j = 3; j < m; j++)
	{
		if (ahrrr[j] == 1)
		{
			for (int z = j * 3; z < m + 1; z = z + j * 2)
			{
				ahrrr[z] = 0;
			}
		}
		
	}
	int length = 0;
	for (int s = 0; s < m; s++)
	{
		if (ahrrr[s] == 1)
		{
			length += 1;
		}
	}
	int *yaaa = (int*)calloc(length, sizeof(int));
	int counter = 0;
	for (int r = 0; r < m; r++)
	{
		if (ahrrr[r] == 1)
		{
			yaaa[counter] = r;
			counter += 1;
		}
	}
	
	return yaaa;
}
int main()
{
	int *a = sieves(2000000);
	int counter = 0;
	long long sum = 0;
	int length = 0;
	clock_t start, end;
	start = clock();
	while (a[counter] !=NULL)
	{
		sum += (long long)a[counter];

		counter += 1;
		
	}
	end = clock();
	float seconds = (float)(end - start) /CLOCKS_PER_SEC;
	printf("runtime:%f", seconds);
	cout<<sum<<endl;
	
	return 0;
}
