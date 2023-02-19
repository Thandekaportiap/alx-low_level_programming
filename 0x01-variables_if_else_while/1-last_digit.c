#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *  main - Prints the last digit of a randomly generated number
 *  and whether it is greater than 5 less thhan 6 or 0
 *
 *  Return: 0 (sucess)
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	(m = n % 10);
if( m > 5)
{
	printf("last digit of %d is %d  and is greater than 5\n", n, m);
}
	else if (m = = 0)
{
	printf("last digit of %d is %d and is 0\n", n, m);
}
else (m < 6 && m != 0)
{
	printf("last digit of %d is %d  and is less than 6 and not 0\n", n, m);
}
return (0);
}
