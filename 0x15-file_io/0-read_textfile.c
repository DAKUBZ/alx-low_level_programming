#include "main.h"
#include <fcntl.h>

/**
* read_textfile - function that reads a text file
* and prints it to the POSIX standard output
* @filename: text being read
* @letters: number of letters to be printed
* Return: 0 if file cannot open or name is null
* *w -  actual number of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t t;
ssize_t w;
size_t fd;
char *buff;

fd = open(filename, O_RDONLY);
if ((int)fd == -1)
return (0);
buff = malloc(sizeof(char) * letters);
t = read(fd, buff, letters);
w = write(STDOUT_FILENO, buff, t);

free(buff);
close(fd);
return (w);
}
