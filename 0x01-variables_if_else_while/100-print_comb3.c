#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: always 0 (success/correct)
 *
 */
int main(void)
{
int i;

for (i = 48 ; i <= 89; i++)
{
putchar (i);
if (i == 89)
{
break;
}
putchar(',');
putchar(' ');
}
putchar ('\n');
return (0);
}

