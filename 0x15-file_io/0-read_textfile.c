#include "holberton.h"

/**
  *read_textfile-print on stdout
  *@filename: text received
  *@letters: amount of character for print
  *Return: ssize_t amount
  **/
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t r, w;
	char *buffer = NULL;

	if (!filename)
		return (0);
	/*buffer*/
	buffer = malloc(letters + 1);
	if (!buffer)
		return (0);
	/*open*/
	fd = open(filename, O_RDONLY, 600);
	if (fd == -1)
		return (free(buffer), 0);
	/*read*/
	r = read(fd, buffer, letters);
	if (r == -1)
		return (free(buffer), 0);
	buffer[letters] = '\0';
	/*write*/
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
		return (free(buffer), 0);
	free(buffer);
	close(fd);
	return (w);
}
