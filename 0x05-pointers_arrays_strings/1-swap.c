/**
 * swap_int: swipes the two numbers a and b
 * Return: always 0
 */
#include <stdio.h>
#include "main.h"
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
int main()
{
    int a, b;
    printf("Enter the first value:");
    scanf("%d", &a);
    printf("Enter the second value:");
    scanf("%d", &b);
    printf("%d + %d = %d\n", a, b);
    return 0;
}
