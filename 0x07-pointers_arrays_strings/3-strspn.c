#include "main.h"
#include <string.h>
/* #include <stdio.h> */
/**
 * *_strspn - function that gets the length of a prefix substring.
 * @s: pointer of char type
 * @accept: pointer of character type
 * Return: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int len = strspn(s, accept);

	return (len);
}
