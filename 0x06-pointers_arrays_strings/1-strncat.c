#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * @dest: destination parameter
 * @src: source parameter
 * @n: third parameter
 * Return: String
 */

char *_strncat(char *dest, char *src, int n)
{
strncat(*dest, *src, n);
return (dest);
}
