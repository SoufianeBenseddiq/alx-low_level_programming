#include <stdio.h>
#include <stdlib.h>
#include <stdin.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase, followed by a new line.
 *              Only the putchar function is used.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';  // Start with the lowercase 'a'
while (letter <= 'z')  // Loop until 'z'
{
putchar(letter);  // Print the current letter
letter++;  // Move to the next letter
}
putchar('\n');  // Print a newline character at the end
return (0);
}

