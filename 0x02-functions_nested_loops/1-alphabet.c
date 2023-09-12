#include <stdio.h>
/**
  * print_alphabet - Make the alphabet
  *
  * Return: void
  */

void print_alphabet(void);

int main(void)
{
  print_alphabet();
    return (0);
}

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
}
