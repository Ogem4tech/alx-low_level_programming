#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFSIZE 1024

/**
 * main - copies the content of a file to another file.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, otherwise an error code
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, read_result, write_result;
	char buf[BUFSIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]), exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((read_result = read(fd_from, buf, BUFSIZE)) > 0)
	{
		write_result = write(fd_to, buf, read_result);
		if (write_result != read_result || write_result == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					argv[2]), exit(99);
	}
	if (read_result == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
