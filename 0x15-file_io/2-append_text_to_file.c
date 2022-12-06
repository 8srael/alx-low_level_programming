#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename : name of the file to create
 * @text_content : string to append at the end
 *
 * Return: -1 on failure, 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, status, i;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);

	file = open(filename, O_APPEND | O_WRONLY);

	if (file == -1)
		return (-1);

	for (i = 0; *(text_content + i) != '\0'; i++)
		;

	status = write(file, text_content, i);

	if (status == -1)
		return (-1);

	close(file);

	return (1);
}
