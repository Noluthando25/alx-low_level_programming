#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - entry point
 * Return : 0 (success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last digit of n > 5)
	{
	printf("last digit of %d and is greater than 5\n", n);
	}
	else if	(last digit of n == 0)
	{
		printf("last digit of %d and is 0\n", n);
	}
	else(last digit of n < 6 and !0)
	{
		printf("last digit of %d and is less than 6 and not 0\n", n);
	}

	return (0);
}
