#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that not use printf or put fuction
 * Return: 1(means successful)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
