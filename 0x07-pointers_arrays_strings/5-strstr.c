#include "holberton.h"

/**
  *_strstr- function that locates a substring.
  *@haystack: gives string
  *@needle: substring
  *
  *Return:Returns a pointer to the beginning of the located substring, or NULL
  *if the substring is not found.
  **/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int x = 0;
	unsigned int k = 0;
	unsigned int w;

	if (!*needle)
		return (haystack);

	while (needle[k] != '\0')
		k++;

	for (w = 0; haystack[w] != '\0'; w++)
	{
		if (haystack[w] == needle[i])
		{
			x++;
			i++;

			if (x == k)
			{
				return (haystack + w - k + 1);
			}
		}
		else
		{
			i = 0;
			x = 0;
		}
	}
	return (0);
}
