#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Function
 * @filename: Pointer
 * @text_content: File contents
 * Description: function that appends text at the end of a file
 * Return: 1 if success, 0 otherwise
 */

int append_text_to_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content)
{
	int length = 0, file_descriptor;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[length] != '\0')
	{
		length++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
	{
		return (-1);
	}

	if (write(file_descriptor, text_content, length) == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);
	return (1);
}
