#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Function
 * @filename: Pointer
 * @text_content: File
 * Description: Create a file
 * Return: 1 if success
 */

int create_file(const char *filename, char *text_content)
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

    file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
