#include "main.h"
#include <fcntl.h>

/**
* create_file - a function that creates a file
* @fillename - name of the file created
* @filename: pointer to the filename
* @text_content: pointer to a string
* Return: 1 on success, -1 on fail
*/

int create_file(const char *filename, char *text_content)
{
int fd = 0;
int w = 0;
int len = 0;

if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(fd, text_content, len);

if (fd == -1 || w == -1)
{
return (-1);
}
close(fd);

return (1);
}
