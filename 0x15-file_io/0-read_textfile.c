#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include "main.h"
#include <fcntl.h>
/**
 * read_textfile - indicates the number of bytes read and printed.
 * @filename: The name of the text file to read (const char*).
 * @letters: The number of letters to read and print (size_t).
 * Return: number of letters it can print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t lenr, lenw;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	lenr = read(fd, buffer, letters);
	close(fd);

	if (lenr == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (0);
}
