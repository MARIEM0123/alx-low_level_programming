#include "main.h"
/**
 * rev_string - reverse a string
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	char s0 = s[0];
		int i = 0;
		int j;

		while (s[i] != '\0')
			i++;
		for (j = 0; j < i; j++)
		{
			i--;
			s0 = s[j];
			s[j] = s[i];
			s[i] = s0;
		}
}
