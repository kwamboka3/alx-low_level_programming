#include <stdio.h>

/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: Always 0.
 */

char print_alphabet(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}

putchar('\n');

}
