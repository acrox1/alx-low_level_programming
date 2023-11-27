#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 *
 * @filename: file name to be read
 * @letters: number of letters to read and print
 * Return: actual number of letters read (success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t len, w_count;
	int file;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}
	len = read(file, buffer, letters);
	if (len == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	w_count = write(STDOUT_FILENO, buffer, len);
	free(buffer);
	close(file);
	if (w_count != len)
		return (0);
	return (len);
}


