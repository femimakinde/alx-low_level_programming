#include <stdio.>

/**
 * main - prints all single digit numbers of base
 * 10 strating from 0, followed by an new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
