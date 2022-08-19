#include "main.h"
/**
 * get_endianness - Entry Point
 *
 * Return: 1 if little endian, 0 otherwise
 */
int get_endianness(void)
{
	unsigned int test = i;
	char *endian = (char *)&test;

	if (*endian)
		return (1);
	return (0);
}
