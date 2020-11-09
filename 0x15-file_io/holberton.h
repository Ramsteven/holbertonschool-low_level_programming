#ifndef _HOLBERTON_H
#define _HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>


/*amount of string*/
int _strl(const char *n);

/*function that reads a text file and prints it to the POSIX standard output.*/
ssize_t read_textfile(const char *filename, size_t letters);

/*function that creates a file.*/
int create_file(const char *filename, char *text_content);

 /*function that appends text at the end of a file.*/
int append_text_to_file(const char *filename, char *text_content);


#endif
