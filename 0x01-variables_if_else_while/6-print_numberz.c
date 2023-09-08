#include <stdio.h>

/**
  * main - Prints the numbers since 0 to 9
  *
  * Return: Always (Success)
  */
int main(void)
{
	int count;

	for (count = '0'; count <= '9'; count++)
	{
		putchar(count);
	}

	putchar('\n');

	return (0);
}

