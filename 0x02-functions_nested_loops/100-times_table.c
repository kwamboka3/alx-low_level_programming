#include "main.h"
/**
 * print_times_table - print multiple times
 *@n: print int
 * Return: Always 0.
 */
void print_times_table(int n)
{
if (n >= 0)
{
print_times_table(n);
}
else if (n <= 15)
{
print_times_table(n);
}
else
{
break;
}
_putchar('\n');
}
