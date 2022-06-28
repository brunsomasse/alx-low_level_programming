#include <stdio.h>

/**
 * main - a program that adds positive numbers
 * @argc: argc parameter
 * @argv: arrays of string
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
int result = 0, num, a, b, c;
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
}
{
if (argv[a][b] > '9' || argv[a][b] < '0')
{
printf("%s\n", "Error");
return (1);
}
}
for (c = 0; c < argc; c++)
{
num = atoi(argv[c]);
result += num;
}
printf("%d\n", sum);
return (0);
}
