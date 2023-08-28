#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @*s: area pointed to by s
 * @b: the constant byte
 * @n: number of bytes
 * Return: the pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
