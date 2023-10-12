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
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				t = va_arg(ap, char*);
				if (!t)
					t = "(nil)";
				printf("%s", t);
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
		va_end(ap);
	}
	printf("\n");
}
