#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

int main(int argc, char **argv) {
    int fd;
    Elf64_Ehdr ehdr;

    // Check command-line arguments
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    // Open the ELF file
    fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        fprintf(stderr, "Error: could not open file '%s'\n", argv[1]);
        exit(98);
    }

    // Read the ELF header
    if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr)) {
        fprintf(stderr, "Error: could not read ELF header from file '%s'\n", argv[1]);
        exit(98);
    }

    // Check if the file is an ELF file
    if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "Error: file '%s' is not an ELF file\n", argv[1]);
        exit(98);
    }

    // Display the extracted information
    printf("Magic: ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", ehdr.e_ident[i]);
    }
    printf("\nClass: %d-bit\n", (ehdr.e_ident[EI_CLASS] == ELFCLASS64) ? 64 : 32);
    printf("Data: %s\n", (ehdr.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" :
                         (ehdr.e_ident[EI_DATA] == ELFDATA2MSB) ? "2's complement, big endian" :
                         "unknown");
    printf("Version: %d\n", ehdr.e_ident[EI_VERSION]);
    printf("OS/ABI: %s\n", (ehdr.e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX System V" :
                            (ehdr.e_ident[EI_OSABI] == ELFOSABI_HPUX) ? "HP-UX" :
                            (ehdr.e_ident[EI_OSABI] == ELFOSABI_STANDALONE) ? "standalone" :
                            "unknown");
    printf("ABI Version: %d\n", ehdr.e_ident[EI_ABIVERSION]);
    printf("Type: %s\n", (ehdr.e_type == ET_NONE) ? "NONE (Unknown type)" :
                        (ehdr.e_type == ET_REL) ? "REL (Relocatable file)" :
                        (ehdr.e_type == ET_EXEC) ? "EXEC (Executable file)" :
                        (ehdr.e_type == ET_DYN) ? "DYN (Shared object file)" :
                        (ehdr.e_type == ET_CORE) ? "CORE (Core file
    // Read the rest of the header
    if (read(fd, &header.e_ident[EI_VERSION], sizeof(header) - EI_VERSION) != sizeof(header) - EI_VERSION) {
        fprintf(stderr, "Error reading ELF header: %s\n", strerror(errno));
        exit(98);
    }

    // Close the file
    if (close(fd) == -1) {
        fprintf(stderr, "Error closing file: %s\n", strerror(errno));
        exit(98);
    }

    // Display the ELF header information
    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header.e_ident[i]);
    }
    printf("\nClass:                             %s\n", class_names[header.e_ident[EI_CLASS]]);
    printf("Data:                              %s\n", data_names[header.e_ident[EI_DATA]]);
    printf("Version:                           %d\n", header.e_ident[EI_VERSION]);
    printf("OS/ABI:                            %s\n", abi_names[header.e_ident[EI_OSABI]]);
    printf("ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
    printf("Type:                              %s\n", type_names[header.e_type]);
    printf("Entry point address:               0x%lx\n", header.e_entry);
    printf("Start of program headers:           %ld (bytes into file)\n", header.e_phoff);
    printf("Start of section headers:           %ld (bytes into file)\n", header.e_shoff);
    printf("Flags:                             0x%x\n", header.e_flags);
    printf("Size of this header:                %d (bytes)\n", header.e_ehsize);
    printf("Size of program headers:            %d (bytes)\n", header.e_phentsize);
    printf("Number of program headers:          %d\n", header.e_phnum);
    printf("Size of section headers:            %d (bytes)\n", header.e_shentsize);
    printf("Number of section headers:          %d\n", header.e_shnum);
    printf("Section header string table index:  %d\n", header.e_shstrndx);

    return 0;
}
