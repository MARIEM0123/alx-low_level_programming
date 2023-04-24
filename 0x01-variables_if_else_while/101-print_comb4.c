#include <time.h>
#include <stdio.h>
/**
 * main - C is so cool
 * Return: The return here is 0
 */
int main(void)
{
	int a, b, c;

	a = 0;
	while (a < 10)
	{
	b = 1;
	while (b < 10)
	{
	if (a >= b)
	{
	b++;
	}
	else
	{
	c = 2;
	while (c < 10)
	{
	if (c <= b)
	{
	c++;
	}
	else
	{
	putchar(a + 48);
	putchar(b + 48);
	putchar(c + 48);
	if (a + 48 == 55 && b + 48 == 56 && c + 48 == 57)
	{
	break;
	}
	else
	{
	putchar(',');
	putchar(' ');
	}
	c++;
	}
	}
	b++;
	}
	}
	a++;
	}
	putchar('\n');
	return (0);
}
