#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: argc parameter
 * @argv: array of command listed
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
int a;
for (a = 0; a < argc; a++)
{
printf("%s\n", argv[a]);
}
return (0);
}
