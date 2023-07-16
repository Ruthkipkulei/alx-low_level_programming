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

	printf("Size of a char:%lu bytes(s)\n", (unsigned long)sizeof(w));
	printf("Size of an int:%lu bytes(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long int:%lu bytes(s)\n", (unsigned long)sizeof(y));
	printf("Size of a long long int:%lu bytes(s)\n", (unsigned long)sizeof(z));
	printf("Size of a float:%lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
