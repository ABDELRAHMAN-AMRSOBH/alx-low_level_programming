#include "variadic_functions.h"

/**
 * print_all - print numbers and strings
 * @format: key
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	char *t;
	int i = 0;

	va_start(ap, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ap, double));
				break;
			case 's':
				t = va_arg(ap, char*);
				if (!t)
					t = "(nil)";
				printf("%s", t);
				break;
			default:
				va_end(ap);
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
		va_end(ap);
	}
	printf("\n");
}
