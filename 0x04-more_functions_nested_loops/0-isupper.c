#include "main.h"
/**
 * _isupper - Checks if a letter is uppercase
 * 
 * @c: the variable checked
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 98)
return (1);
else
return (0);
}
