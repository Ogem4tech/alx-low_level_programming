#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends the specified text to the end of the file
 *                       with the specified name.
 * @filename: The name of the file
 * @text_content: The text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, bytes_written, text_length;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_length = strlen(text_content);
		bytes_written = write(file_d, text_content, text_length);
		if (bytes_written != text_length)
		{
			close(file_d);
			return (-1);
		}
	}

	close(file_d);
	return (1);
}
