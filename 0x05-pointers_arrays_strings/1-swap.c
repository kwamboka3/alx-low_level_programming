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
    printf("Enter Value of a");
    scanf("%d", &a);
    printf("\nEnter Value of b");
    scanf("%d", &b);
    swap(a, b);
    printf("\nAfter Swapping: a = %d, b = %d", a, b);
    return 0;
}
