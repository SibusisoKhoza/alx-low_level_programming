#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 40

int main(int argc, char *argv[]) {
    FILE *input_file, *output_file;
    char input_buffer[MAX_LINE_LENGTH + 2], output_buffer[MAX_LINE_LENGTH + 2];
    size_t input_length;

    if (argc != 3) {
        fprintf(stderr, "Usage: %s input_file output_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    input_file = fopen(argv[1], "r");
    if (input_file == NULL) {
        fprintf(stderr, "Error: Can't open input file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    output_file = fopen(argv[2], "w");
    if (output_file == NULL) {
        fprintf(stderr, "Error: Can't create output file %s\n", argv[2]);
        fclose(input_file);
        exit(EXIT_FAILURE);
    }

    while (fgets(input_buffer, sizeof(input_buffer), input_file)) {
        input_length = strlen(input_buffer);

        if (input_buffer[input_length - 1] != '\n') {
            fprintf(stderr, "Error: Line too long in input file\n");
            fclose(input_file);
            fclose(output_file);
            exit(EXIT_FAILURE);
        }

        if (input_length > MAX_LINE_LENGTH + 1) {
            input_buffer[MAX_LINE_LENGTH] = '\n';
            input_buffer[MAX_LINE_LENGTH + 1] = '\0';
        }

        strncpy(output_buffer, input_buffer, sizeof(output_buffer) - 1);
        output_buffer[sizeof(output_buffer) - 1] = '\0';

        fprintf(output_file, "%s", output_buffer);
    }

    fclose(input_file);
    fclose(output_file);

    return EXIT_SUCCESS;
}
