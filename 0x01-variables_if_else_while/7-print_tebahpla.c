#include <stdio.h>
#include <unistd.h>
/**
 * main - reverse alphabet
 *
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'z' ; a >= 'a' ; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
