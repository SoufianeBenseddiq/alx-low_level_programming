#include "main.h"

/**
 * print_most_numbers - Prints digits from 0 to 9 except 2 and 4
 *
 * Return: No return value (void)
 */
void print_most_numbers(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        if (i != 2 && i != 4)
            _putchar(i + '0'); // Convert integer to character using '0' offset
    }
    _putchar('\n'); // Print a newline character
}

