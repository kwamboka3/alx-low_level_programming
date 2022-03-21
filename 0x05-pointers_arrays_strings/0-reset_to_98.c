#include <stdio.h>
#include "main.h"
/**
 * reset_to_98 - updates to 98
 *@n: print int
 * Return: always 0
 */
void reset_to_98(int *n)
{
n = 402;
printf("n=%d\n", n);
reset_to_98(&n);
printf("n=%d\n", n);
return (0);
}
