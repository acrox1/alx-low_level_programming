#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>

#define SE STDERR_FILENO
#define MAXSIZE 1204
/**
 * main - create the copy bash script
 * @ac: arguments count
 * @av: list of arguments
 * Return: 0
 */
int main(int ac, char *av[])
{
	int input_file, output_file, input_status, output_status;
	char buffer[MAXSIZE];

	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	input_file = open(av[1], O_RDONLY);
	if (input_file == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);
	output_file = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (output_file == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
	do{
		input_status = read(input_file, buffer, MAXSIZE);
		if (input_status == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (input_status > 0)
		{
			output_status = write(output_file, buffer, (ssize_t) input_status);
			if (output_status == -1)
			{
				dprintf(SE, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	} while (input_status > 0);
	input_status = close(input_file);
	if (input_status == -1)
		dprintf(SE, "Error: Can't close fd %d\n", input_file), exit(100);
	output_status = close(output_file);
	if (output_status == -1)
		dprintf(SE, "Error: Can't close fd %d\n", output_file), exit(100);
	return (0);
}
