#include "main.h"
#include <string.h>

/**
 * _strcat -  a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: String
 */

char *_strcat(char *dest, char *src)
{
int i, len1, len2;
len1 = strlen(*dest);
len2 = strlen(*src);
for (i = 0; i <= len2; i++)
{
dest[len1 + 1] = src[i];
}
_putchar('\n');
return (dest);
}
