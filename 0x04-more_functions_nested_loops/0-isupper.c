#include "0-main.c"

/**
 * _isupper - a function that checks for upper case character
 * @c: An input character
 * Return: 1 if c is uppercase or 0 oterwise
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if(c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
