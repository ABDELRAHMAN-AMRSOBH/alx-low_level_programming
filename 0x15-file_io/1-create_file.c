#include "main.h"

/**
 * create_file - creates a file if exist trunct it
 * @filename: name of file
 * @text_content: content of new file
 * Return: 1 success -1 fail
*/

int create_file(const char *filename, char *text_content)
{
	int fd, length = 0, text_len = 0;
	char *p;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (p = text_content; *p; p++)
			text_len++;
		length = write(fd, text_content, text_len);
	}
	close(fd);
	if (length == text_len)
		return (1);
	return (-1);
}
