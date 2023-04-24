#include <time.h>
#include <stdio.h>
/**
 * main - C is so cool
 * Return: The return here is 0
 */
int main(void)
{
	int a, b, c;
	
	c=0;
	while (c < 10)
	{
	a=1;
	while (a < 10)
	{
	b = 2;
	while (b < 10)
	{
	if (b <= a)
	{
	b++;
	}
	else
	{
	putchar(c + 48);
	putchar (a + 48);
	putchar(b + 48);
	if (a + 48 == 56 && b + 48 == 57)
	break;
	else
	{
	putchar(',');
	putchar(' ');
	b++;
	}
	}
	}
	a++;
	}
	putchar('\n');
	}
	return (0);
}
