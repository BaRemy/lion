#include <stdio.h>
/**
 * main - Entry point
 * program to print the size of an integer
 * Return: Always 0.
 */
int main(void)
{
	printf("Value of an int:%d\n", sizeof(int));
	printf("Value of an char:%d\n", sizeof(char));
	printf("Value of an double:%lf\n", sizeof(double));
	printf("Value of an float:%f\n", sizeof(float));
	return (0);
}
