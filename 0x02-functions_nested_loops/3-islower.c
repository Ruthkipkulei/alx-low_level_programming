#include "main.h"
/**
* _islower  - A fuction that checks if c is lowercase character
* Return: 1 if letter c is lowercase, 0 if not
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

