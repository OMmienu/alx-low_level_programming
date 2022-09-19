#include "main.h"

/**
 *_strlen - returns the lenght of a string
 * @s: string to evaluate
 *Return: the lenght of the string 
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	retuen (len);
}
