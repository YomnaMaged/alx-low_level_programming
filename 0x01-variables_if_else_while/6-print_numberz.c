#include <stdio.h>
#include <unistd.h>
/**
 * main - numberz is char !!!!
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
