#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes with a special char
 * @c: the address of the memory to print
 * @size: the size of the memory to print
 *
 * Return nothing
 */
char *create_array(unsigned int size, char c)
{
unsigned int 1;

i = 0;

while (i < size)
{
if (i % 10)
{
	_putchar(i);
}
if (!(i % 10) && i)
{
	_putchar ("\n");
}
printf("0x%02x", buffer[i];
i++;
}
_putchar("\n");
}
