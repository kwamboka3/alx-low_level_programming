#include <stdio.h>

/**
 * main - print alphabet lowercase
 *
 * Return: Always 0.
 */

int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}

putchar('\n');

}
