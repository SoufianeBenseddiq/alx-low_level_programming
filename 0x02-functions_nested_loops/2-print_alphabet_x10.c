#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
char lowcase;
int i;
for (i = 0; i < 10; i++)
{
for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
{
_putchar(lowcase);
}
_putchar('\n');
}
}

