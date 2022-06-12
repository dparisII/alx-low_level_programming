#include "main.h"

/**
 * main - main block
 * _islower: this checks if the letter is lower or not
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
