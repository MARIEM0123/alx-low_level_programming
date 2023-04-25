#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_sign - C is so cool
 * @n: to verify the sign
 * Return: The return here is 0
 */
int print_sign(int n)
{	
	if (n > 0)
	{
	putchar (43);
	return (1);
	}
	else if (n==0)
	{
	putchar(48);
	return(0);
	}
	else
	{
	putchar (45);
	return(-1);
	}
}
