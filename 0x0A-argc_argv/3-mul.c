#include<stdio.h>
#include<stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0, for success
 * 1, if program does not receive two arguments.
 */
int main(int argc, char *argv[])
{
	int i, total = 1;

	if (argc != 3)
		printf("Error\n");
		return (1);

	for (i = 1; i < argc; i++)
		total = total * atoi(argv[i]);
	printf("%d\n", total);
	return (0);
}
