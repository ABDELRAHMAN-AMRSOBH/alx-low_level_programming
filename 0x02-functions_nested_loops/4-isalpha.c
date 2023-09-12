#include "main.h"

/**
 * _isalpha - check if c belong to a..z or A..Z
 * @c: ascii value of c
 * Return:	1 meaning true_
 *		0 meaning false
*/

int _isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}
