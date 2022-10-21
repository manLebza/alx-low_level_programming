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

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lenr, lenw;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (!buffer)
		return (0);

	lenr = read(fd, buffer, letters);
	lenw = write(STDOUT_FILENO, buffer, lenr);
	close(fd);

	free(buffer);
	return (lenw);
}
