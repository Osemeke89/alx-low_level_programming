#include "main.h"
#include <string.h>

/**
 *  _strncpy - functions as strncpy
 *  @dest: string
 *  @src: string
 *  @n: integer
 *
 *  Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
