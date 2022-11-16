#include "main.h"

/**
 * _isupper - return 1 if parameter is uppercase alphabet
 *@c: the character to check
 * Return:  0 (failure)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
