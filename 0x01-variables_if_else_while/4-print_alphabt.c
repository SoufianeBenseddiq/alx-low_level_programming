#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase, followed by a new line,
 * and then prints the alphabet in uppercase, followed by a new line.
 * Only the putchar function is used.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase = 'a';
while (lowercase <= 'z')
{
if (lowercase != 'e' && lowercase != 'q')
{
putchar(lowercase);
}
lowercase++;
}
return (0);
}

