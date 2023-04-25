#include <stdio.h>
/**
 * _islower - C is so cool
 * Return: The return here is 0
 */
int _islower(int c)
{
	if (c<=122 && c>=97)
        putchar(49);
	else
        putchar(48);
	return(0);
}
