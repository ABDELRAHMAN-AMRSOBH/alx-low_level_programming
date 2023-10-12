#include "variadic_functions.h"

/**
 * print_numbers - print n numbers separated by a separator
 * @separator: exist between each 2 numbers
 * @n: count of incoming arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int cp = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (cp--)
	{
		printf("%d%s", va_arg(ap, int), cp ? separator ? separator : "" : "\n");
		va_end(ap);
	}
}
