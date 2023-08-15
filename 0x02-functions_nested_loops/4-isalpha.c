#include "main.h"
/**
 * _is alpha - function that checks for alphabetic character
 * Return: 1 if letter lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97)||(c <= 97  && c <= 122))
{
return (1);
}
return (0);
}

