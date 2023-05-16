#include "main.h"
#include <string.h>
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
 * description:
 * if text_content is NULL create an empty file
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count;
	ssize_t w_bytes;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC);
	if (fd == -1)
		return (-1);

	count = strlen(text_content);

	w_bytes = write(fd, text_content, count);
	if (w_bytes == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
