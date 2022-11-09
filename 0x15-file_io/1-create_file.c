#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strlen - returns length of string
* @s: character
*
* Return: Always 0 (Success)
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
* create_file - creates file
* @filename: filenmae
* @text_content: NULL terminated string to write to file
* Return: 1 on succes, -1 for failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	int wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	len = _strlen(text_content);
	wr = write(fd, text_content, len);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
