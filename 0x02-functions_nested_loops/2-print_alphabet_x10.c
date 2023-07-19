#include "main.h"
/**
* print_alphabet_x10 - a function that prints 10 times the alphabet
* Return: 0 (success)
*/

void print_alphabet_x10(void)
{
	int ten;
	char lo;

	for (ten = 0; ten <= 9; ten++)
	{
		for (lo = 'a'; lo <= 'z'; lo++)
		_putchar(lo);
	}
		_putchar('\n');
	
}
