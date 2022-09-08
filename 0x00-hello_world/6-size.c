#include<stdio.h>
/**
 * main - print the strings
 * Description: using the main function
 * this program prints sizeof data types
 * Return:0
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long lll;
	float f;

	printf("Size of char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(l));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lll));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
