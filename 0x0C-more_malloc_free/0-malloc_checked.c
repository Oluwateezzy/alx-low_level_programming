#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsigned integer parameter
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *mal;

	mal = malloc(b);
	if (mal == NULL)
	{
		(exit(98));
	}
	return (mal);
}
