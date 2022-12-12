#include "main.h"
/**
 * read_textfile - reads a text file and prints it to Posix standard output
 * @filename: name of file
 * @letters: length of file
 * Return: signed unisigned integer
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, wr, re;
	char *buffer;

	/* check given file */
	if (filename == NULL)
		return (0);
	/* dynamically allocate memory to buffer */
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	/* create file descriptor */
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	/* read from file descriptor */
	re = read(fd, buffer, letters);
	if (re == -1)
		return (0);
	/* write from file descriptor */
	wr = write(STDOUT_FILENO, buffer, re);
	if (wr == -1 || wr != re)
		return (0);
	/* close file descriptor */
	re = close(fd);
	if (re == -1)
		return (0);
	free(buffer);
	return (wr);
}
