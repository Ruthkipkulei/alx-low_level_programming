#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: the number of times '\' should be printed
*Return: void
*/
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
	}
}
