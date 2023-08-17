#include "main.h"
/**
 * main - prints the numbers from 1 to 100
 * for multiples of three print Fizz
 * for the multiples of five print Buzz
 * Return: No return value (void)
 */
void main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
_putchar('FizzBuzz');
else if (i % 3 == 0)
_putchar('Fizz');
else if (i % 5 == 0)
_putchar('Buzz');
else
_putchar('i');
}
}

