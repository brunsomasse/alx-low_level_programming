#include <stdio.h>

/**
 * main -  a program that prints the number of arguments
 * @argc: argc parameter
 * @argv: arrays of command listed
 * Return: 0 for success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
