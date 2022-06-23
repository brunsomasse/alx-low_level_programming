#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: square root parameter
 * @i: iterator
 * Return: square root of a number
 */

int _sqrt_recursion(int n, int i)
{
int square = i * 1;
if (square > n)
return (-1);
if (square == 1)
return (1);
return (_sqrt_recursion(n, i + 1));
}
