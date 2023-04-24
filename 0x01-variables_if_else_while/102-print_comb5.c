#include <time.h>
#include <stdio.h>
/**
 * main - C is so cool
 * Return: The return here is 0
 */
int main(void)
{
	int a, b;

	a = 0;
	while (a <=99)
	{
	b = a;
	while (b <=99)
	{
	if (b != a)
	{
	putchar((a/10)+48);
	putchar((a%10)+48);
	putchar(' ');
	putchar((b/10)+48);
	putchar((b%10)+48);
	if (a !=98 ||b != 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	b++;
	}
	a++;
	}
	putchar('\n');
	return (0);
}
