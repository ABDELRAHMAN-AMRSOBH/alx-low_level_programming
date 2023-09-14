#include "main.h"

/**
 * more_numbers - print from 0 to 14
*/

void more_numbers(void)
{
	int i, count = 10;

	while (count-- > 0)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			i++;
		}
		_putchar('\n');
	}
}
