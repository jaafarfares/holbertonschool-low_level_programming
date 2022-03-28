#include "main.h"

/**
 * read_textfile - check the code
 *@filename: ....
 *@letters: ...
 * Return: ....
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *a;
	int fp, length;

	a = malloc(sizeof(char) * letters);
	if (a == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	length = read(fp, a, letters);
		return (0);
	free (a);
	close (fp);
	return (length);
}
