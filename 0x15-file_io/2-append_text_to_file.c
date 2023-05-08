#include "main.h"

/**
 * append_text_to_file - Appends text to a file
 * @filename: Name of the file
 * @text_content: chars to append
 *
 * Description: function adds to a file
 * Return: 1 for success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int des, chr, txt;

	if (!filename)
		return (-1);
	des = open(filename, O_WRONLY | O_APPEND);
	if (des == -1)
		return (-1);
	if (text_content)
	{
		for (chr = 0; text_content[chr]; chr++)
			;
		txt = write(des, text_content, chr);

		if (txt == -1)
			return (-1);
	}
	close(des);
	return (1);
}
