#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the digits from '0' to '9' using the ASCII values,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 48;
while (a < 58)
{
putchar(a);
a++;
}
putchar("\n");
return (0);
}

