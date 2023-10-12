#include "varadic_functions.h"

/**
 * print_all - print numbers and strings
 * @format: key
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	char *ptr = format;
	char *t;
	char *separator = ", ";

	va_start(ap, format);
	while (*ptr)
	{
		if (*(ptr + 1) == '\0')
			separator = "\n";
		switch (*ptr++)
		{
			case 'c':
				printf("%c%s", va_arg(ap, int), separator);
				break;
			case 'i':
				printf("%d%s", va_arg(ap, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(ap, float), separator);
				break;
			case 's':
				t = va_arg(ap, char*);
				if (!t)
					t = "(nil)";
				printf("%s%s", t, separator);
		}
		va_end(ap);
	}
}
