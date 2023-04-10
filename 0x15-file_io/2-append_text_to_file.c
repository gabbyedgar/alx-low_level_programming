#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 *
 * @filename: file name
 * @text_content: pointer to text
 *
 * Return: 1 on success or -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, a, b = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[b])
			b++;
		a = write(fd, text_content, b);
		if (a != b)
			return (-1);
	}

	close(fd);

	return (1);
}
