#include "main.h"

/**
 * main - main block
 * is_lower checks if it is lower
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
		else
			lower = 0;
	}
	return (lower);
}
