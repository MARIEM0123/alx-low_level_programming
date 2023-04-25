#include<stdio.h>

int print_last_digit(int n)
{
int l,m;
l = n % 10;
if (n >= 0)
{

putchar(l + '0');
return (l);
}
else
{
m = l * -1;
putchar (m + '0');
return(m);
}
}
