#include <stdio.h>
#include <unistd.h>
/**
 * main - Hexadecimal base !
 *
 * Return: 0
 */
int main(void)
{
	char x;

	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
	}
	for (x = 'a' ; x <= 'f' ; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
