#include "main.h"
/**
 * main - print _putchar
 *
 * Return: 0
*/
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count = 0, c_size;

	c_size = sizeof(str) / sizeof(int);
	for (count = 0; count < c_size; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');

	return (0);
}
