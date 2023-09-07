#include <stdio.h>
int main(void)
{
	int n;
	long int x;
	long long int y;
	char m;
	float z;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));
	return (0);
}
