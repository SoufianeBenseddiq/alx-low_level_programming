#include "main.h"
/**
 * islower - checks for lowercase characters
 * Rerurn: 1 for lowercase character or 2 for anything else
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}

