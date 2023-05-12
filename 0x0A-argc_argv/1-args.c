#include <stdio.h>
#include "main.h"

/**
 * main - print the num of parameter
 * @argc: the parameter
 * @argv: the parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
