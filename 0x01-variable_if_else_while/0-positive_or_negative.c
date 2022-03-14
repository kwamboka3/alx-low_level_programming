#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main -entry point
 *
 * Return:Always 0 (success/correct)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n==0)
	{
		printf("x1 is zero\n", n);
	}
	else if (n<0)
	{
		printf("x1 is negative\n", n);
	}
	else
	{
		printf("x1 is positive\n", n);
	}

	return (0);
}
