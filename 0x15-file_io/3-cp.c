#include "main.h"
/**
 * main - program that copies the content of a file to another file
 * @ac: length of argument
 * @av: argument vector
 * Return: integer
 */
int main(int ac, char **av)
{
	ssize_t re, wr;
	char buffer[1024], ch;
	int file_from, file_to;

	if (ac != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		printf("Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		printf("Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	re = read(file_from, buffer, 1024);
	if (re == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	while (re)
	{
		wr = write(file_to, buffer. re);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}

