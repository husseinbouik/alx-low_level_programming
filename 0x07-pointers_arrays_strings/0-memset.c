#include "main.h"

/**
 * _memset - Write a function that fills memory with a constant byte
 * @s:input
 * @b:input
 * @n:input
 * Return:s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

while (n-- > 0)
*p++ = b;
	return (s);
}
