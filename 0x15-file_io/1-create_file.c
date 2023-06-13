#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file with the specified name and writes the
 *               specified text content to it.
 * @filename: The name of the file to create
 * @text_content: The content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, bytes_written, content_length;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_d == -1)
		return (-1);
	if (text_content != NULL)
	{
		content_length = strlen(text_content);
		bytes_written = write(file_d, text_content, content_length);
		if (bytes_written != content_length)
		{
			close(file_d);
			return (-1);
		}
	}
	close(file_d);
	return (1);
}

