#include <stdio.h>
#include <stdlib.h>
/**
 * main - C language is so cool
 * Return: Our return here is 0
 */
int main(void)
{
	int a;
	while (a < 10)
	{
	putchar(a+48);
	a++;
	}
	for (a=0; a < 6; a++)
	{
	putchar(a+97);
	}
	putchar('\n');
	return (0);
}
