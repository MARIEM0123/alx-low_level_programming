#include <stdio.h>
#include <stdlib.h>
/**
 * main - C language is so cool
 * Return: Our return here is 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
	putchar(a + 48);
	if (a + 48 == 57)
	{
	break;
	}
	putchar(',');
	putchar(' ');
	a++;
	}
	putchar('\n');
	return (0);
}
