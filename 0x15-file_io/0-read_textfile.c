#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: the file name to be read
 * @letters: number of letters to read and print
 * Return: the number of letters read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	rd = read(file, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(file);
	free(buf);
	return (wr);

}
