/**
 * swap_int: swipes the two numbers
 * Return: always 0
 */
#include <stdio.h>
#include "main.h"
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
printf("After Swapping: ", a, b);
}
