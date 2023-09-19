#include "main.h"

/**
 * puts_half - Prints half of a string, or the second half if the length is odd.
 * @str: The input string.
 *
 * Return: void
 */
void puts_half(char *str)
{
    int a, n, longi;

    longi = 0;

    for (a = 0; str[a] != '\0'; a++)
        longi++;

    n = (longi / 2);

    if ((longi % 2) == 1)
        n = ((longi + 1) / 2);

    for (a = n; str[a] != '\0'; a++)
        _putchar(str[a]);
    _putchar('\n');
}

/**
 * print_array - Prints n elements of an integer array.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < (n - 1); i++)
    {
        printf("%d, ", a[i]);
    }
    if (i == (n - 1))
    {
        printf("%d", a[n - 1]);
    }
    printf("\n");
}

