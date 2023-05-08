#include "main.h"

/**
 * read_textfile - Reads data from a text file
 * @filename: Name of the file
 * @letters: number of letter/size
 *
 * Description: Function uses file descript
 * Return: size of the file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int des;
	ssize_t fls, nfl;
	char *buffer;

	if (!filename)
		return (0);
	des = open(filename, O_RDONLY);

	if (des == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (!buffer)
		return (0);
	fls = read(des, buffer, letters);
	nfl = write(STDOUT_FILENO, buffer, fls);

	close(des);
	free(buffer);
	return (nfl);
}
