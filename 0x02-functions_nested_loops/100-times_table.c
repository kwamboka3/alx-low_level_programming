#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print multiple times
 *@n: print int
 * Return: Always 0.
 */
void print_times_table(int n)
{
int i;
for (i = 1; i <= 10; ++i) {
  printf("%d * %d = %d \n", n, i, n * i);
}
_putchar('\n');
}
