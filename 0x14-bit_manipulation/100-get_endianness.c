#include "main.h"
/**
 * get_endianness - return the endianness of the machine
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void) {
    int num = 1;
    char *byte = (char *)&num;

    // If the first byte of the integer contains the least significant bits,
    // it means the system is little endian
    if (*byte) {
        return 1; // little endian
    } else {
        return 0; // big endian
    }
}
