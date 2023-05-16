#include "main.h"
/**
 * main - entry point
 * descripton: copies the content of a file to another file.
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int file_from_d, file_to_d, r_bytes, w_bytes;
	char buf[1024];

	if (ac != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	file_from_d = open(av[1], O_RDONLY);
	if (file_from_d == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	file_to_d = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (file_to_d == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	r_bytes = read(file_from_d, buf, 1024);
	if (r_bytes == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (r_bytes > 0)
	{
		w_bytes = write(file_to_d, buf, r_bytes);
		if (w_bytes == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (close(file_from_d) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from_d);
		exit(100);
	}
	if (close(file_to_d) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to_d);
		exit(100);
	}
	return (0);
}
