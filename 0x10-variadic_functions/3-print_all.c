#include "variadic_functions.h"

/**
 * print_all - print numbers and strings
 * @format: key
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	char *t;
	char *separator = ", ";
	int i = 0;

	va_start(ap, format);
	while (format[i])
	{
		if (format[i + 1]  == '\0')
			separator = "\n";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(ap, int), separator);
				break;
			case 'i':
				printf("%d%s", va_arg(ap, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(ap, double), separator);
				break;
			case 's':
				t = va_arg(ap, char*);
				if (!t)
					t = "(nil)";
				printf("%s%s", t, separator);
		}
		i++;
		va_end(ap);
	}
}
