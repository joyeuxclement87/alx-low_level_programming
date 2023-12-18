#include "main.h"
/**
 * create_file  for creating a file
 * @filename: filename
 * @text_content: file content
 * Return: value return
 */
int create_file(const char *filename, char *text_content)
{
	int aad;
	int newlttrs;
	int rr;

	if (!filename)
		return (-1);

	aad = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (aad == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (newlttrs = 0; text_content[newlttrs]; newlttrs++)
		;
	rr = write(aad, text_content, newlttrs);
	if (rr == -1)
		return (-1);
	close(aad);
	return (1);
}
