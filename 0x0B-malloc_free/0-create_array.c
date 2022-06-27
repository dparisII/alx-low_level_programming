#include <main.h>
#include <stdio.h>

/**
 * create_array - A function that creates an array chars, and initializes it with a specific char.
 * @size: The size of an array
 * @c: A character to initialized the array
 * Resturn: A pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));


	if (s = NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
