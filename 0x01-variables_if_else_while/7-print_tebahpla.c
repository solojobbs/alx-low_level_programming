#include <stdio.h>

/**
  * main - Prints the alphabet at reverse
  *
  * Return: Always (Success)
  */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}

