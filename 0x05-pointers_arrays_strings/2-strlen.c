#include "main.h"
/**
 * _strlen - to calculate the lent of a string
 * @s: the string
 * Return: returning the lenght of the string
 */

int _strlen(char *s)
{
int c = 0;

while (*s != '\0')
{
c++;
s++;
}
return (c);
}
