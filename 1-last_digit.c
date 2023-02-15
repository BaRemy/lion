#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if  (n > 5)
		printf("Last digit of %d is %d and greater than 5\n", n,m);
	if (n == 0)
		printf("Last digit of %d is %d and equal to 0\n", n,m);
	if (n < 6 && n != 0)
			printf("Last digit of %d is %d and less than 6 and not 0\n", n,m);
	return (0);
}
