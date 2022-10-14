#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - a program that returns the sum of all of its paraneters
* @n: the number of arguments (excluding n itself)
* Return: returns an int
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, int);
	va_end(ap);
	return (sum);
}
