#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char u;

	u = 'Z';
	while (u >= 'A')
	{
		putchar(u);
		u--;
	}
	putchar('\n');
	return (0);
}
