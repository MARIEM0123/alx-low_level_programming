#include "main.h"
#include <math.h>
#include <stdio.h>
/**
 * main - The largest prime factor
 * Return: th return is 0
 */

int main(void)
{
	int long a = 612852475143;
	int long b, c;

	for (b = 1; b <= sqrt(a); b++)
	{
		if (a % b == 0)
		{
			c = a / b;
		}
	}
	printf("%ld\n", c);
	return (0);
}
