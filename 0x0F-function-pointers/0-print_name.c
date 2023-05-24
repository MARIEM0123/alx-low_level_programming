#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function
 * @name: parameter
 * @f: pointer to function
 * Return: no return
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
