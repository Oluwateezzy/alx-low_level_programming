#include "main.h"
/**
 * create_file - create a file
 * @filename: name given to the file
 * @text_content: file content
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	wr = write(fd, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
