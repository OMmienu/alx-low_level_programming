#include "main.h"

/**
 *_strcat - concatenantes the string pointed to by @src to
 *the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String that will e concatenated upon
 *
 *Return: return pointer to @dest
 */

char *_strcat(char *dest, char *src)
 {
int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
