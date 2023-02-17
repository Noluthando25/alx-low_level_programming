#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there
 * main - prints if number is positive,negetive or zero
 * Return = ALWAYS (success)
 * betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is 0\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);

}

