#include "main.h"

/**
 * fizz_buzz -  a program that prints the numbers from 1 to 100
 * multiple of three print Fizz
 * multiples of five print Buzz
 * multiples of both three and five print FizzBuzz
 * Return: Always 0
 */

int main(void)
{
int x;

for (x = 0; x < 100, x++)
{
if (x % 3 == 0 && x % 5 == 0)
{
printf("FizzBuzz\n");
}
else if (x % 3 == 0)
{
printf("Fizz\n");
}
else if (x % 5 == 0)
{
printf("Buzz\n");
}
else
{
printf("%d\n", x);
}
}
printf("\n");
return (0);
}













}
