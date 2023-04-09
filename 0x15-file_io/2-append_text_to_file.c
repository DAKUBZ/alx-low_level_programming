#include "main.h"
/**
 * append_text_to_file - append text to a file
 *
 * @filename: name of file to append to
 * @text_content: content to be appended to file
 *
 * Return: 1 on success; -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	int success = 1;

	if (filename == NULL)
	{
		return (-1);
	}
	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fclose(file);
		return (success);
	}
	if (fprintf(file, "%s", text_content) < 0)
	{
		success = (-1);
	}
	fclose(file);
	return (success);
}
