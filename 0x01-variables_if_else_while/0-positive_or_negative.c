#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
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
printf("%1 is zero\n", n);
}
else if (n<0)
{
printf("%1 is negative\n", n);
}
else
{
printf("%1 is positive\n", n);
}
return (0);
}

