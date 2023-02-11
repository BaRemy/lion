#include "main.h"
int main(void)
{
	char *str = "I will be the C language master!\n";

	while (*str)
		_putchar(*str++);
	return (0);
}
