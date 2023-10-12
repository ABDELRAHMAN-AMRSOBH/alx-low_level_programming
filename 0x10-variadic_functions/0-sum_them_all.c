#include "variadic_functions.h"

/**
 * sum_them_all - take n parameters sum them and return result
 * @n: unsigned int count of coming parameters
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0, cp = n;

	va_start(ap, n);
	while (cp--)
	{
		sum += va_arg(ap, int);
		va_end(ap);
	}
	return (sum);
}
