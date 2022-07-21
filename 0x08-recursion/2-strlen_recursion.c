#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: pointer of character.
 * Return: integer of length.
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
