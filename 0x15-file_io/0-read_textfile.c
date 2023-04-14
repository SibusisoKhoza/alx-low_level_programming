#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Function readfile
 * @filename: Pointer
 * @letters: Letters size
 * Description: function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, read_count, write_count;
	char *buffer;

	buffer = (char *) malloc(letters);
	if (buffer == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}


	read_count = read(file_descriptor, buffer, letters);

	write_count = write(STDOUT_FILENO, buffer, read_count);	

	close(file_descriptor);
	free(buffer);

	return (write_count);
}
