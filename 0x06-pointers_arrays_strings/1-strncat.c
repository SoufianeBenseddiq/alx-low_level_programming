#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * @n: param pointer to an int
 * Return: return value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		if (*(src + j) == '\0')
			break;
		j++;
		i++;
	}

	return (dest);
}
