#include <time.h>
#include <stdio.h>
/**
 * main - C is so cool
 * Return: The return here is 0
 */
int print_sign(int n)
{	
	if (n > 0)
	{
	putchar('+');
	putchar (',');
	return (1);
	}
	else if (n==0)
	{
	putchar('0');
	putchar (',');
	return(0);
	}
	else
	{
	putchar ('-');
	putchar (',');
	return(-1);
	}
}
