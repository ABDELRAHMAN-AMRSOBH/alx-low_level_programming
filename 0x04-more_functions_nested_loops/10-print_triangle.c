#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: input
*/

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j >= size - i - 1)
				_putchar('#');
			else
				_putchar(' ');
		}
		if (i < size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
