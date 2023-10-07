#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * check - checks if str is composite of digits only
 * @str: input char *
 * Return: 0 or 1
*/

int check(char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			str++;
		else
			return (0);
	}
	return (1);
}

/**
 * removeZero - removes zeros from start of number
 * @str: input number
 * Return: number
*/

char *removeZero(char *str)
{
	int i = 0, l = strlen(str);
	char *new;

	while (str[i] == '0' && i < l)
		i++;
	new = malloc(strlen(str) - i);
	while (l >= 0)
	{
		new[l - i] = str[l];
		l--;
	}
	return (new);
}

/**
 * multiply - takes 2 nums multiply them and return result
 * @num1: number1
 * @num2: number2
 * Return: result
*/

char *multiply(char *num1, char *num2)
{
	int size1 = strlen(num1), size2 = strlen(num2);
	int total_size = size1 + size2;
	char *result = malloc(total_size--);
	int carry = 0, count = 0, loop = 0, sign = 0;
	int digit_num1, digit_num2, l, r, i, number;

	while (loop < size1 + size2)
	{
		loop++;
		i = 0;
		number = carry;
		while (i <= count)
		{
			if (num1[l] == '-')
				sign++;
			if (num2[r] == '-')
				sign++;
			l = size1 - 1 - count + i;
			r = size2 - 1 - i;
			digit_num1 = (l >= 0 && l < size1) ? num1[l] - '0' : 0;
			digit_num2 = (r >= 0 && r < size2) ? num2[r] - '0' : 0;
			i++;
			number += digit_num1 * digit_num2;
		}
		carry = number / 10;
		number %= 10;
		result[total_size--] = '0' + number;
		count++;
	}
	if (sign % 2)
		result[total_size] = '-';
	result = removeZero(result);
	return (result);
}

/**
 * main - Entry point
 * @argc: int count of argv
 * @argv: arguments
 * Return: 0
*/

int main(int argc, char **argv)
{
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (check(argv[1]) && check(argv[2]))
	{
		result = multiply(argv[1], argv[2]);
		printf("%s\n", result);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
