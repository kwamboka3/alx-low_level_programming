/**
 * swap_int: swipes the two numbers a and b
 *@a: print int
 *@b: print int
 * Return: always 0
 */
#include <stdio.h>
#include "main.h"
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
