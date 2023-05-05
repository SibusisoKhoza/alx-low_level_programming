#include "main.h"
/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b) {
    if (b == NULL) {
        return 0; // return 0 if input string is NULL
    }

    unsigned int decimal = 0;
    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] != '0' && b[i] != '1') {
            return 0; // return 0 if any char in input string is not 0 or 1
        }
        decimal = (decimal << 1) + (b[i] - '0'); // convert binary digit to decimal equivalent
    }

    return decimal; // return decimal equivalent of binary input string
}
