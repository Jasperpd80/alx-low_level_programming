#include "main.h"
#include <string.h>
/* #include <stdio.h> */
/**
 * *_strchr - function that locates a character in a string.
 * @s: pointer of char type
 * @c: character
 * Return: a pointer to the first occurence of the character c in
 * the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	char *pointer = strchr(s, (int) c);

	return (pointer);
}
