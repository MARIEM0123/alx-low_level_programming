#include "main.h"
#include <stdlib.h>
/**
 * argstostr - the function
 * @ac: first parameter
 * @av: second parameter
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *m;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l = l + ac;

	m = malloc(sizeof(char) * l + 1);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		m[k] = av[i][j];
		k++;
	}
	if (m[k] == '\0')
	{
		m[k++] = '\n';
	}
	}
	return (m);
}
