#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the digits from '0' to '8' using the ASCII values,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 48;
while (a < 57)
{
putchar(a);
a++;
}
putchar("\n");
return (0);
}

