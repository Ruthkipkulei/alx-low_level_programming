#include <stdio.h>
/**
 * main -A program that print out the sizes of data types
 * Return: 0 (means successful)
 */
int main(void)
{
	char w;
	int x;
	long int y;
	long long int z;
	float f;

	printf("Size of a char: %lu 1 bytes(s)\n", (unsigned long)sizeof(w));
	printf("Size of a int: %lu 4 bytes(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long int: %lu 4 bytes(s)\n", (unsigned long)sizeof(y));
	printf("Size of a long long int: %lu 8 bytes(s)\n", (unsigned long)sizeof(z));
	printf("Size of a float: %lu 4 bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
