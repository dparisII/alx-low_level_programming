#include "main.h"

/**
 * _isalpha - this checks if it leter is alphabet or not
 * @c: is the input character
 * Return: 0
 */
int _isalpha(int c)
{
	char i, j;
	int isletter = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (c == i || c == j)
				isletter = 1
		}
	}
	return (isletter);
}

