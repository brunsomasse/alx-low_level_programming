#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: destination area
 * @src: source area
 * @n: bytes from memory to copy
 * Return: memory area replaced
 */

char *_memcpy(char *dest, char *src, unsigned int n)
char a;
{
for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
