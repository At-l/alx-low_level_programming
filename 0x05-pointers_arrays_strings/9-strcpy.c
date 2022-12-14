#include "main.h"
#include <stdio.h>

/**
 * _strcpy -main entry.
 * void: nothing
 * @dest: char pointer
 * @src: char pointer
 * Description:copies string pointed by src to the buffer pointed to by dest
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (src[c] != '\0')
	{
		dest[c] = src[c];

		c++;
	}
	dest[c] = src[c];


	return (dest);

}
