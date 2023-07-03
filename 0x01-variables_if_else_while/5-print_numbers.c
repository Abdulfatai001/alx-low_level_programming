#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * Description: 'print numbers of 0 to 9'
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
