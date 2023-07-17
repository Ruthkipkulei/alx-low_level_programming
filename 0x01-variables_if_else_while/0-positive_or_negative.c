#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int num;

	num = !0;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("The number is %d %d", n, num);
	if (num > 0)
	{
	printf("is positive\n");
	}
	else if (num == 0)
	{
	printf("is zero\n");
	}
	else
	{
	printf("is negative\n");
	}
	return (0);
}
