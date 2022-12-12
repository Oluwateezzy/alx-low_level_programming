#include "main.h"
/**
 * read_textfile - reads a text file and prints it to Posix standard output
 * @filename: name of file
 * @letters: length of file
 * Return: signed unisigned integer
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd;
	char temp;
	ssize_t i;

	i = 0;
	if (filename == NULL)
		return (0);
	fd = fopen(filename, "r");
	if (fd == NULL)
		return (0);
	while (!feof(fd) & ((size_t) i < letters))
	{
		temp = fgetc(fd);
		printf("%c", temp);
		++i;
	}
	fclose(fd);
	return (i);
}
