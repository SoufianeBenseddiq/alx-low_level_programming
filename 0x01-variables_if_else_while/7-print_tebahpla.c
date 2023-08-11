#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet in reverse order,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase = 'z';
while (lowercase >= 'a')
{
putchar(lowercase);
lowercase--;
}
putchar('\n');
return (0);
}

