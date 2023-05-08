#include "main.h"

/**
 * create_file - Creates a text file
 * @filename: Name of the file
 * @text_content: chars in the file
 *
 * Description: function writes to a file
 * Return: 1 for success
 */

int create_file(const char *filename, char *text_content)
{
	int des, chr, txt;

	if (!filename)
		return (-1);
	des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (des == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (chr = 0; text_content[chr]; chr++)
		;
	txt = write(des, text_content, chr);

	if (txt == -1)
		return (-1);
	close(des);
	return (1);
}
