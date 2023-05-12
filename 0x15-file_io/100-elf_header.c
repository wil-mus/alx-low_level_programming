#include "main.h"
#include <elf.h>

#define ERROR_EXIT_CODE 98

/**
 * print_errors - prints error
 *
 * @error_message: message printed in case of error
 */

void print_errors(const char *error_message)
{
	fprintf(stderr, "%s\n", error_message);
	exit(ERROR_EXIT_CODE);
}

/**
 * display_elf_header - displays elf header file
 *
 * @filename: name of file
 */
void display_elf_header(const char *filename)
{
	ssize_t bytes_read;
	Elf64_Ehdr elf_header;

	int fd = open(filename, O_RDONLY);
	int a;

	if (fd == -1)
	{
		print_errors("Failed to open the file.");
	}

	bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));

	if (bytes_read != sizeof(Elf64_Ehdr))
	{
		print_errors("Failed to read the ELF header.");
	}

	printf("Magic:   ");

	for (a = 0; a < EI_NIDENT; a++)
	{
		printf("%02x ", elf_header.e_ident[a]);
	}
	printf("\n");


	printf("Class:                             %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:                              %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI:                            %d\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type:                              0x%x\n", elf_header.e_type);
	printf("Entry point address:               0x%lx\n", elf_header.e_entry);

	close(fd);
}

/**
 * main - collect argc and argv
 * 
 * @argc: arguments pointer
 * @argv:@argc
 *
 * Return: 0
 */

int main(int argc, char *argv[]) {
	if (argc != 2)
	{
		print_errors("Usage: elf_header elf_filename");
	}

	display_elf_header(argv[1]);

	return (0);
}
