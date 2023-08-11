#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of single-digit numbers,
 *              separated by commas and spaces, in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

