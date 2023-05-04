#include "main.h"
/**
 * _strcmp - The function compares between 2 strings
 * @s1: The string 1
 * @s2: The string 2
 * Return: the return is not 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
