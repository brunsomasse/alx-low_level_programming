#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Sucess)
 */
int main(void)
{
int num;
for (num = 0; num >= 9; num++) 
{
putchar((num % 10 + '0'));
}
putchar('\n');
return (0);
}
