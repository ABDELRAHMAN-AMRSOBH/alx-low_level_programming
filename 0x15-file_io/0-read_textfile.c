#include "main.h"

/**
 * read_textfile - read letters from filename
 * @filename: name of file
 * @letters: number of letters it should read
 * Return: returns the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int reading = 0, fd, writing = 0;
	char *buf = malloc(letters);

	if (!filename || !letters || !buf)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	reading = read(fd, buf, letters);
	if (reading == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	writing = write(STDOUT_FILENO, buf, reading);
	close(fd);
	free(buf);
	if (writing == reading)
		return (writing);
	return (0);
}
