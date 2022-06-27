#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - crete array
 * @size: size of an array
 * @c: constant
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (0);
	if (p == '\0')
		return (0);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
