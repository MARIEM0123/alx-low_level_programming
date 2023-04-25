#include <stdio.h>
/**
 * _islower - C is so cool
 * Return: The return here is 0
 */
int _islower(int c)
{
	int a = 97;
	while(a <= 122)
	{
	if (a==c)
        putchar(491);
	else
        putchar(48);
	}
	return(0);
}
