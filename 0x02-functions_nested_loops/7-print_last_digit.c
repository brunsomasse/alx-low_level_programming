#include "main.h"

/**
 * print_last_digit -  a function that prints the last digit of a number
 * @m: character argument
 * Return: the last digit
 */
int print_last_digit(int m)
{
int x;
if (m < 0)
m = -m;
x = m % 10;
_putchar(x + '0');
return (x);
}
