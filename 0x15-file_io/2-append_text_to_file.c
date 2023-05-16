#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: a NULL termiated string to write to the file
 * Return: 1 on success and -1 on failure
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist or
 * if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_bytes;
	int count = strlen(text_content);
	
	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	w_bytes = write(fd, text_content, count);
	if (w_bytes == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
