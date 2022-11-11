#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsigned integer parameter
 */
void *malloc_checked(unsigned int b)
{
	void *mal;

	mal = malloc(b);
	if (mal == NULL)
	{
		return (98);
	}
	return (mal);
}
