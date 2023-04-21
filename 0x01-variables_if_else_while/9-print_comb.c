#include <stdio.h>
#include <stdlib.h>
/**
 * main - C language is so cool
 * Return: Our return here is 0
 */
int main(void)
{
	int a = 0;
	int i = 0;

	while (a < 10)
	{
	putchar(a + 48);
	a++;
	if (i < 9)
	putchar(',');
	putchar(' ');
	i++;
	}
	return (0);
}
