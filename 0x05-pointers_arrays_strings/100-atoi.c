#include "main.h"

/**
 * _atoi - check the code
 * @s: the parameter
 * Return: there is a return
 */

int _atoi(char *s)
{
	int a, b, c, d, f, g;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	f = 0;
	g = 0;
	while (s[d] != '\0')
		d++;
	while (a < d && f == 0)
	{
		if (s[a] == '-')
		++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			g = s[a] - '0';	
			c = c * 10 + g;
			f = 1;
			if (s[a+1] < '0' || s[a+1] > '9')
				break;
			f = 0;
		}
		a++;
	}
	if (f==0)
		return (0);
	return (c);
}

