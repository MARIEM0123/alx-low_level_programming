#include <stdio.h>
#include <stdlib.h>
/**
 * main - C language is so cool
 * Return: Our return here is 0
 */
int main(void)
{
	int a = 0;

	while (a < 9)
	{
	putchar(a + 48);
	putchar(',');
	putchar(' ');
	a++;
	}
	putchar(57);
	return (0);
}
