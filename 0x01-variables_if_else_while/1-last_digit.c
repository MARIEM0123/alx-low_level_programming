#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - C language is so cool
 * Return: Our return here is 0
 */
int main(void)
{
	int n,r;
       
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n%10;
	if (d > 5)
	printf("Last digit of %d is %d and is greater than 5\n",n,r);
	else if (d == 0)
	printf("Last digit of %d is %d and is and is 0\n",n,r);
	else 
	printf("Last digit of %d is %d and is less than 6 and not 0\n",n,r);
	return (0);
}
