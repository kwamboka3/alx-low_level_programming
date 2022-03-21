/**
 * C program to swap two variables using a 
 * user defined swap()
 * swap: it swaps two numbers
 * Return: always 0
 */
#include <stdio.h>
#include "main.h"
/**
 * This function swaps values pointed by a and b
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
  
int main()
{
    int a, b;
    printf("Enter Value of a ");
    scanf("%d", &a);
    printf("\nEnter Value of b ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("\nAfter Swapping: a = %d, b = %d", a, b);
    printf("\n");
    return 0;
}
