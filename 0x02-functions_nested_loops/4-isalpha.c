#include "main.h"
/**
 * _isalpha -  a function that checks for alphabetic character.
 * @c: c is character argument
 * Return: return 1 and 0 depending on function
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
