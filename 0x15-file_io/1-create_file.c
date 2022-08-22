#include "main.h"

/**
 * create_file -> creates file
 * @filename: created file name
 * @text_content: content written in file
 * Return: 1 if successful, -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int fr, nletters, rwr;

	if (!filename)
		return (0);

	fr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fr == -1)
		return (0);
	if (!text_content)
		text_content = " ";

	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rwr = write(fr, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fr);
	return (1);
}