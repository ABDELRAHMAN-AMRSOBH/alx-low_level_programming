#include "main.h"

/**
 * use_exit - print error msg to STDERR and exit
 * @n: exit code
 * @argv: list of arguments
 * @fd: Number of file can't close
*/

void use_exit(int n, char **argv, int fd)
{
	if (n == 97)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	else if (n == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	else if (n == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	else
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(n);
}

/**
 * main - Entry point
 * @argc: count of argv
 * @argv: array of char
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, reading;
	char buf[1024];

	if (argc != 3)
		use_exit(97, argv, 0);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		use_exit(98, argv, 0);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		close(file_from);
		use_exit(99, argv, 0);
	}
	do {
		reading = read(file_from, buf, 1024);
		if (reading == -1)
		{
			close(file_to);
			close(file_from);
			use_exit(98, argv, 0);
		}
		if (reading != write(file_to, buf, reading))
		{
			close(file_to);
			close(file_from);
			use_exit(99, argv, 0);
		}
	} while (reading == 1024);
	if (close(file_from) == -1)
		use_exit(100, argv, file_from);
	if (close(file_to) == -1)
		use_exit(100, argv, file_to);
	return (0);
}
