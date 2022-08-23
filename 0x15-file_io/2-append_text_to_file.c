#include "main.h"

/**
 * append_text_to_file -> appends text to end of file
 * @filename: file name
 * @text_content: appended content
 * Return: 1 if file exists, -1 if file doesnt
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fr, nletters, rwr;

	if (!filename)
		return (-1);

	fr = open(filename, O_WRONLY | O_APPEND);
	if (fr == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		rwr = write(fr, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}
	close(fr);

	return (1);
}
