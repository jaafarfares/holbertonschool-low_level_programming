#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_file - ....
 *@filename: ...
 *@text_content: ...
 *Return: .....
 */
int create_file(const char *filename, char *text_content)
{
	int ftp;

	if (filename == NULL)
	{
		return (-1);
	}
	ftp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	if (ftp == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	write(ftp, text_content, strlen(text_content));
	close(ftp);
	return (1);
}

