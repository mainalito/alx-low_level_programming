#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - print reverse
 * @s: string to print
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	int i;
	int len;
	int temp;

	len = strlen(s);
	if (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
		_print_rev_recursion(s);
	}
}
