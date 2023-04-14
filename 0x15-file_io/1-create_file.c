#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: variable pointer
 * @text_content: content file
 * Description: Create a function that creates a file.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content);

int create_file(const char *filename, char *text_content) {
    int length = 0, file_descriptor;

    if (filename == NULL) {
        return -1;
    }

    if (text_content == NULL) {
        text_content = "";
    }

    while (text_content[length] != '\0') {
        length++;
    }

    file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (file_descriptor == -1) {
        return -1;
    }

    if (write(file_descriptor, text_content, length) == -1) {
        close(file_descriptor);
        return -1;
    }

    close(file_descriptor);
    return 1;
}
