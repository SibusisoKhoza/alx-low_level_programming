#include "main.h"
/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
unsigned int binary_to_uint(const char *b) {
    if (b == NULL) return 0;

    unsigned int decimal = 0;
    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] != '0' && b[i] != '1') return 0;
        decimal = (decimal << 1) + (b[i] - '0');
    }

    return (decimal);
}
