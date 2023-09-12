#include "main.h"

/**
 * _islower - check if c belong to a..z
 * @c: ascii value of c
 * Return:	1 meaning true_
 *		0 meaning false
*/

int _islower(int c)
{
	return ('a' >= c && c <= 'z' ? 1 : 0);
}
