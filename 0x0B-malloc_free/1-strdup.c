#include "main.h"
#include <stdlib.h>
#include<string.h>
/**
* _strdup - a function that copies a string
* @str: the string to  be copied
* Return: returns a pointer to a newly allocated space in memonry
* which contains a copy of the given string
*/
char *_strdup(char *str)
{
	int i;
	int len = strlen(str);
	char *newStr;

	if (str == NULL)
		return (NULL);

	newStr = (char *) malloc((len + 1)  * sizeof(char));
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		newStr[i] = str[i];
	}
	return (newStr);
}
