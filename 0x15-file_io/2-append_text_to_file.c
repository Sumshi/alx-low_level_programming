#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content:  string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
/*opens the file in append mode "a" */
	file = fopen(filename, "a");
	if (file == NULL)/*file cannot be opened*/
	{
		return (-1);
	}
	if (text_content != NULL)
	{
/*fprintf is used to write contents of text_content to the file*/
		fprintf(file, "%s", text_content);
	}
	fclose(file);/*closes the file*/
	return (1);
}
