#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
*
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is and is greater than 5", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is and is 0", n);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of % is and is less than 6 and not 0", n);
	}
	return (0);
}
