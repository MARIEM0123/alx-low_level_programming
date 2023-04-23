#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main C language is so cool
 * Return: The resturn here is 0
 */
int main(void)
{
	int a, b;
	
	a=0;
	while (a < 10)
    	{
	b=1;
	while (b < 10)
	{
	if ( b<=a)
	{
 	b++;
	}
	else{
	putchar (a+48);
	putchar(b+48);
	if (a+48==56 && b+48==57)
	break;
	else
	{
	putchar(',');
	putchar(' ');
	b++;
	}
	}
	}
	a++
	}
	putchar('\n');
	return (0);
}
