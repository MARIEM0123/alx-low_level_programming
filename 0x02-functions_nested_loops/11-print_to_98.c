#include<stdio.h>
/**
 * print_to_98 - C is so cool
 * @n: the number to consider
 * Return: The return here is 0
 */
void print_to_98(int n)
{       
        if (n <= 98)
	{
		int i;
		for(i = n; i <= 98; i++)
		{
		printf("%d, ", i);
		}
	}
	printf("\n");
	if (n >= 98)
	{
		int i;
		for (i = 98; i <= n; i++)
		{
			 printf("%d, ", i);
		}
	}
}

