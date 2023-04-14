#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>

#define BUFFER_SIZE 128

int main(int argc, char **argv)
{
    int fd, class, data, version, osabi, abiversion, type;
    char magic[BUFFER_SIZE];
    Elf64_Ehdr header64;
    Elf32_Ehdr header32;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        fprintf(stderr, "Error: cannot open file '%s'\n", argv[1]);
        exit(98);
    }

    if (read(fd, &header64, sizeof(header64)) != sizeof(header64))
    {
        fprintf(stderr, "Error: cannot read ELF header of file '%s'\n", argv[1]);
        exit(98);
    }

    lseek(fd, (off_t) 0, SEEK_SET);

    if (read(fd, &header32, sizeof(header32)) != sizeof(header32))
    {
        fprintf(stderr, "Error: cannot read ELF header of file '%s'\n", argv[1]);
        exit(98);
    }

    if (memcmp(header64.e_ident, ELFMAG, SELFMAG) != 0 || header64.e_ident[EI_CLASS] == ELFCLASSNONE)
    {
        fprintf(stderr, "Error: file '%s' is not an ELF file\n", argv[1]);
        exit(98);
    }

    memcpy(magic, header64.e_ident, EI_NIDENT);
    magic[EI_NIDENT] = '\0';

    class = header64.e_ident[EI_CLASS];
    data = header64.e_ident[EI_DATA];
    version = header64.e_ident[EI_VERSION];
    osabi = header64.e_ident[EI_OSABI];
    abiversion = header64.e_ident[EI_ABIVERSION];
    type = header64.e_type;

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", magic[i]);
    }
    printf("\n");
    printf("  Class:%s\n", class == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:%s\n", data == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:%d (current)\n", version);
    printf("  OS/ABI:");
    switch (osabi)
    {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX\n");
            break;
       
