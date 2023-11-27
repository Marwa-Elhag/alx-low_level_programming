#include "main.h"

/**
 * _strlen - to return lengths
 * @s: string
 * Return: success
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - to open text
 * @filename: file name
 * @text_content: write text
 * Return: success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int F;
	ssize_t B = 0, L = _strlen(text_content);

	if (!filename)
		return (-1);
	F = open(filename, O_WRONLY | O_APPEND);
	if (F == -1)
		return (-1);
	if (L)
		B = write(F, text_content, L);
	close(F);
	if (B == -1)
		return (-1);
	close(F);
	return (1);
}

