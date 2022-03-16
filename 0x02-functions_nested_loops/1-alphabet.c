#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success/correct)
 */
void print_alphabet(void)
{
char alph;

for (alph = 'a'; alph <= 'z'; alph++)
{
_putchar(alph);
}
_putchar('\n');
return (0);
}
