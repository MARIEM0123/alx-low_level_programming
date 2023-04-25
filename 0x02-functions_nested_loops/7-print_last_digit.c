#include<stdio.h>
#include "main.h"
/**
 * print_last_digit - C is so cool
 * @n: to verify the sign
 * Return: The return here is 0
 */
int print_last_digit(int n)
{
int l, m;

l = n % 10;
if (n >= 0)
{
_putchar(l + '0');
return (l);
}
else
{
m = l * -1;
_putchar (m + '0');
return (m);
}
}
