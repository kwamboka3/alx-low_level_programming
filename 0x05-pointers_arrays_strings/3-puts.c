#include "main.h"
/**
*_puts - prints a string
*@str: A pointer to an int that will be changed
*
*Return: void which means our answer is correct
*/

void _puts(char *str)
{
char *k;
int p;

k = str;

for (p = 0; k[p]; p++)
{
putchar (k[p]);
}
putchar('\n');
}
