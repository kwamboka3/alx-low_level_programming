#include "main.h"
/**
 * print_number - prints an integer
 * @n: print integer
 * Return: Always 0.
 */
void print_number(int n)
{
while (n < 10)
{
_putchar (n + '0');
n++;
}

_putchar ('\n');
}
