#include <stdio.h>
/**
 * main -Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
 float e;
{
printf("size of a char: %lu byte(s)\n", (long unsigned int)sizeof(d));
printf("size of an int: %lu byte(s)\n", (long unsigned int)sizeof(a));
printf("size of a long int: %lu byte(s)\n", (long unsigned int)sizeof(b));
printf("size of a long long int: %lu byte(s)\n", (long unsigned int)sizeof(c));
printf("size of a float: %lu byte(s)\n", (long unsigned int)sizeof(e));
return (0);
}
}
