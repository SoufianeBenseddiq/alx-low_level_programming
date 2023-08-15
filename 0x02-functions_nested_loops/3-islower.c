#include "main.h"
/**
 * _islower - checks for lowercase characters
 * Rerurn: Always 1 for lowercase character or 2 for anything else
 * (Success)
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}

