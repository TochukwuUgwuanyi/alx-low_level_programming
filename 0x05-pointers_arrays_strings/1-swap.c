#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Description: swap_int swaps the value of *a and *b
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
