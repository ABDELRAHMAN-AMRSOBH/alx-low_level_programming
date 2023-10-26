/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 *
 * Return: decimal (unsigned int)
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, index = 0;

	if (!b)
		return (result);
	while (b[index])
	{
		if (b[index] == '1')
			result = (result << 1) | 1;
		else if (b[index] == '0')
			result = result << 1;
		else
			return (0);
		index++;
	}
	return (result);
}
