#include "main.h"

/**
 * swap_int swaps the values of two integers
 *
 * @x: first entry
 * @y: second entry
 *
 *
 */

void swap_int(int *x, int  *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
