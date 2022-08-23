#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/stst.h>
#include <fcntl.h>
#include <sys/type.h>

/**
 * read_textfile -> reads textfile and prints it to POSIX std.
 * @filename: file to read
 * @letters: number of letters it can read
 * Return: number of letters it could actually read
 */

int read_textfile(const char *filename, size_t letters)
{
	int fr;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);

	fr = open(filename, O_RDONLY);
	if (fr == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fr);
		return (0);
	}
	lenr = read(fr, buffer, letters);
	close(fr);

	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);

	if (lenr != lenw)
		return (0);

	return (lenw);
}
