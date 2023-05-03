#include "main.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - generate the random
 * Return: Returning 0
 */

int main(void)
{
	int a[100];
	int i, s, n;

	s = 0;
	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		a[i] = rand() % 78;
		s += (a[i] + '0');
		putchar(a[i] + '0');
		if ((2772 - s) - '0' < 78)
		{
			n = 2772 - s - '0';
			s += n;
			putchar (n + '0');
			break;
		}
	}
	return (0);
}
