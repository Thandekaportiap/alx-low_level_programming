#include <stdio.h>
/**
 * main - prints the values
 * Return: always 0
 */
int main(void)
{
	char a(1);
	int b(4);
	long int c(4);
	long long int d(8);
	float f(4);

	printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %d byes(s)\n", (unsigned long)sizeof(f));
return (0);
}
