#include "holberton.h"
/**
 * _strcmp - compare two string
 * @s1: string compare to s2
 * @s2: string compared with s1
 * Return: negative number, positive, 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (-(s2[i] - s1[i]));
		i++;
	}
	return (0);
}
