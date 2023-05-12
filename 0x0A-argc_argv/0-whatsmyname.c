#include <stdio.h>
#include "main.h"

/**
 * main - prints the name
 * @argc: first parameter 
 * @argv: second parameter
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

