#include "holberton.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: pointer to char
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 0;
	int n = 0;
	char half;

	while (str[i] != '\0')
		i += 1;
	if (i % 2 == 1)
		n = (i - 1) / 2;
	else
		n = i / 2;
	while (str[n] != '\0')
	{
		half = str[n];
		_putchar(half);
		n++;
	}
	_putchar('\n');
}
