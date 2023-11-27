#include "main.h"

/**
 * read_textfile - to read text
 * @filename: file name.
 * @letters: bytes to read.
 * Return: success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int F;
	ssize_t B;
	char buffer[BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	F = open(filename, O_RDONLY);
	if (F == -1)
		return (0);
	B = read(F, &buffer[0], letters);
	B = write(STDOUT_FILENO, &buffer[0], B);
	close(F);
	return (B);
}

