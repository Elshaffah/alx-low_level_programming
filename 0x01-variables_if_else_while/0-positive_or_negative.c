#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more hearders goes there */

/**
 * main - Entry point
 * Description - Prints if random generated number is +tive, zero or -tive
 * Return: Always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
                printf("%d is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else
                printf("%d is negative\n", n);
	return (0)
}
