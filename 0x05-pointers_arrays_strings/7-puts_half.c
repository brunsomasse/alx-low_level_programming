#include "main.h"
#include <string.h>

/**
 * puts_half -  a function that prints half of a string
 *@str: string parameter
 */

void puts_half(char *str)
{
int x, y, a;
x = strlen(str);
if (x % 2 == 1)
y = x / 2 + 1;
else
y = x / 2;
for (a = y, a < x, a++)
_putchar(str[a]);
_putchar('\n');
}
