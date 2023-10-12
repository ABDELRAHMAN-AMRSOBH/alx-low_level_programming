#include "variadic_functions.h"

/**
 * print_strings - print n strings separated by a separator
 * @separator: exist between each 2 numbers
 * @n: count of incoming arguments
*/

void print_strings(const char *separator, const unsigned int n, ...)
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
		printf("%s%s", va_arg(ap, char *), cp ? separator ? separator : "" : "\n");
		va_end(ap);
	}
}
