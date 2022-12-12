#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * description: get a random number and print.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;
if (lastn > 5)
{
	printf("last digit of %d is %d and is greater than 5\n", n, lastn);
}
else if (lastn < 6 && lastn != 0)
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
}
else if (lastn == 0)
{
printf("last digit of %d is %d and is 0\n", n, lastn);
}
else
{
	printf("last digit of %d is %d and not 0\n", n, lastn);
}
return (0);
}
