#include "main.h"

/***/

void print_diagonal(int n)
{
	int i = 0;
	while (n-- > 0)
	{
		while (i > 0)
			_putchar(' ');
		_putchar('\');
		if (n)
			_putchar('\n\);
		i++;
	}
	_putchar('\n');
}
