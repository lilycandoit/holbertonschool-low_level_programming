#include "main.h"

/**
* _memset - to fills the first n bytes
* of the memory area pointed to by s with the constant byte b
*
* @s: a string with pointer
* @b: the constant value to be filled in
* @n: number of bytes to be filled
*
* Return: the new string s with filled values
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
