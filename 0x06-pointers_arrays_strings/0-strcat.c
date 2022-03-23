#include "main.h"
/**
 * _strcat -concatenates two strings,
 * @dest: destination.
 * @src: source
 * Return: Pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;
	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count 2 >= 0)
	{
		*(dest + count) + *(src + count 2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return(dest);
}
