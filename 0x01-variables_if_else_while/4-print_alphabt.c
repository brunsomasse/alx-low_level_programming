#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all the letters except q and e
 *Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar(10);
return (0)
}
