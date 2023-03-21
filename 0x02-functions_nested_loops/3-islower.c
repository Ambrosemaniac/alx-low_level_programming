#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * char c is lower case if true
 * char c is not lower case if false
 * Return: 1 if true and 0 if false.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);

	else

		return (0);
	_putchar('\n');
}
