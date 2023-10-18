#include "variadic_functions.h"

/**
 * sum_them_all - calculates sum
 *
 * @n: number of arguments
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ls;

	va_start(ls, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ls, int);

	va_end(ls);

	return (sum);
}
