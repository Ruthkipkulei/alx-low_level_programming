#include "main.h"
/**
* print_sign - prints the sign of a number
* Return: 1 if number is greater than zero
* 0 if number is zero
* -1 if number is less than zero
*/

int print_sign(int n) /* n: the number of the sign to be printed */
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
