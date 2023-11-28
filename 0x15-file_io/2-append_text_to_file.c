#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len, x;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	for (x = 0; text_content[x] != '\0'; x++)
		;
	len  = write(file, text_content, x);
	if (len == -1)
		return (-1);

	close(file);
	return (1);
}
