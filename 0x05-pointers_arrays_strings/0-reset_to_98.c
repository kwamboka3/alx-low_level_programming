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
reset_to_98(&n);
return (0);
}
