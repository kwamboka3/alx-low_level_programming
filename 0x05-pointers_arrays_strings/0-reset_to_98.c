#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - pass as parameter and update 
 *
 * Return: Always 0
 */
void reset_to_98(int *n)
{
    
int n = 402;
*n = &n;    
reset_to_98(&n);
putchar(*n);

return (0);
}
