#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - pass as parameter and update 
 *
 * Return: Always 0
 */
void reset_to_98(int *n)
{
    
int x = 402;
*n = &x;    
reset_to_98(&x);
putchar(*n);

return (0);
}
