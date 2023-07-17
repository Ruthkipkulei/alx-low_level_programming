#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Last digit of n and rltnshp to zero
* Return: Always (0)
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Generated number: %d\n", n);
int lastDigit = abs(n) % 10;

printf("Last digit of %d is %d ", n, lastDigit);
if (lastDigit > 5)
{
printf("and is greater than 5\n");
}
else if (lastDigit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
}

return (0);
}
