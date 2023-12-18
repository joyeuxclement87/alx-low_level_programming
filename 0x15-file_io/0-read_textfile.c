#include <stddef.h>
#include "main.h"
/**
 * read_textfile - reads and print letter
 * @filename: filename
 * @letters: printed letter's number
 * Return: nvalue of return
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int aad;
	ssize_t nd, nr;
	char *buff;

	if (!filename)
		return (0);

	aad = open(filename, O_RDONLY);

	if (aad == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);
	nd = read(aad, buff, letters);
	nr = write(STDOUT_FILENO, buff, nd);
	close(aad);
	free(buff);
	return (nr);
}
