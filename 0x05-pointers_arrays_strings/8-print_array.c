#include "main.h"
/**
 * print_array - check the code
 * @a: first parameter
 * @n:wq: second parameter
 * Return: there is a return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i  == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
