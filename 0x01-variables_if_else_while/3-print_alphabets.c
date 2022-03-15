#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success/correct)
 *
 */
int main(void)
{
char upper_case;
char lower_case;

for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
{
putchar (upper_case);
}
for (lower_case = 'a'; lower_case<= 'z'; upper_case++)
{
putchar (lower_case);
}
return 0;
}
