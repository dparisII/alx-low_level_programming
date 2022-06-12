#include "main.h"

/**
 * _islower - this checks if the letter is lower or not
 * @c: is an input character
 * Return: 0
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
