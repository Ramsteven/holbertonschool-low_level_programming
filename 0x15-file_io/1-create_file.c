#include "holberton.h"

/**
  *create_file- create file with call system
  *@filename: text received
  *@text_content: string received
  *Return: 1 if works -1 of otherwise
  **/
int create_file(const char *filename, char *text_content)
{

	int fd;
	ssize_t w;
	char *buffer = NULL;

	if (!filename)
		return (-1);

	/*create file*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (free(buffer), 0);

	/*write*/
	if (text_content == NULL)
	{
		w = write(fd, text_content, 0);
		if (w == -1)
			return (-1);
	}
	else
	{
		w = write(fd, text_content, _strl(text_content));
		if (w == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

/**
 * _strl - find size of a string
 * @str: string received
 * Return: Size integer
 */
int _strl(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

