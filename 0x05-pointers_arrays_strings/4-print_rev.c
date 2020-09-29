#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - reverse a string
 * @s: string given
 * Return: reverse the string
 */
void print_rev(char *s)
{
	int i, y, length;

	i = 0;
	length = 0;
	for (y = 0; *(s + y) != '\0'; y++)
	{
		length++;
	}
	length = length - 1;
	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

