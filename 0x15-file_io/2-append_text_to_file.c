#include "main.h"
/**
 * append_text_to_file - to append to end of file
 * @filename: filename
 * @text_content: new content added
 * Return: te return value
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int aad;
	int newlttrs;
	int rr;

	if (!filename)
		return (-1);
	aad = open(filename, O_WRONLY | O_APPEND);

	if (aad == -1)
		return (-1);

	if (text_content)
	{
		for (newlttrs = 0; text_content[newlttrs]; newlttrs++)
			;

		rr = write(aad, text_content, newlttrs);

		if (rr == -1)
			return (-1);
	}

	close(aad);
	return (1);
}
