#include "main.h"
/**
 * get_end - checks the endianness
 * Return: int
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char* byte = (unsigned char*) &num;
	return ((int) (*byte));
}
