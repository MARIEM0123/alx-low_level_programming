#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - the function
 * @argc: parameter
 * @argv: parameter
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int n, j, r;
	int a[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	r = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && n >= 0; j++)
	{
		while (n >= a[j])
		{
			r++;
			n = n - a[j];
		}
	}

	printf("%d\n", r);
	return (0);
}
