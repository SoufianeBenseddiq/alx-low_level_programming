#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 * Return: No return value (void)
 */
void more_numbers(void)
{
    int i, j;

    i = 0;
    j = 0;

    while (i < 10)
    {
        for (j = 0; j < 15; j++)
        {
            _putchar(j + '0'); 
        }
        _putchar('\n'); 
        i++;
    }
}

