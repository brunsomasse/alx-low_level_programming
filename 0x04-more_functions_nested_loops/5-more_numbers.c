#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
int a, b;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 14; b++)
{
_putchar(b + '0');
}
_putchar('\n');
}
}
