#include "main.h"

/**
 * print_most_numbers - print from 0 to 9 but not 2 and 4
*/

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
		if (i != 4 || i != 2)
			_putchar('0' + i++);
		else
			i++;
	_putchar('\n');
}
