#include<stdio.h>

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
return(m);
}
}
