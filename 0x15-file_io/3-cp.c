#include "main.h"

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fwwr, fddw, a, b, c;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fwwr = open(argv[1], O_RDONLY);
	if (fwwr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fddw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((a = read(fwwr, buf, BUFSIZ)) > 0)
	{
		if (fddw < 0 || write(fddw, buf, a) != a)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fwwr);
			exit(99);
		}
	}
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	b = close(fwwr);
	c = close(fddw);
	if (b < 0 || c < 0)
	{
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fwwr);
		if (c < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fddw);
		exit(100);
	}
	return (0);
}
