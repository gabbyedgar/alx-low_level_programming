#include "main.h"

/**
 * read_textfile - read text and print it to POSIX
 * @filename: name of file char
 * @letters:number of letters to read size_t
 * Return: read the file display it or error 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int c;
	int a, b;
	char *buf;
	if (!filename)
		return (0);
	c = open(filename, O_RDONLY);
	if (c < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	a = read(c, buf, letters);
	if (a < 0)
	{
		free(buf);
		return (0);
	}
	buf[a] = '\0';
	close(c);
	b = write(STDOUT_FILENO, buf, a);
	if (b < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (b);
}
