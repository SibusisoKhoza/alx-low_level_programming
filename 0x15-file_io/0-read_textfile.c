#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t readTextFile(const char *file_name, size_t num_letters) {
    int file_descriptor, read_count, write_count;
    char *buffer;

    buffer = (char*) malloc(num_letters);
    if (buffer == NULL) {
        return 0;
    }

    if (file_name == NULL) {
        return 0;
    }

    file_descriptor = open(file_name, O_RDONLY);
    if (file_descriptor == -1) {
        free(buffer);
        return 0;
    }

    read_count = read(file_descriptor, buffer, num_letters);
    if (read_count == -1) {
        free(buffer);
        return 0;
    }

    write_count = write(STDOUT_FILENO, buffer, read_count);
    if (write_count == -1) {
        free(buffer);
        return 0;
    }

    close(file_descriptor);
    free(buffer);

    return write_count;
}
