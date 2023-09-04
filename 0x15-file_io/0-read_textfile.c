#include "main.h"
/**
* read_textfile - function that reads a text file and
* prints it to the POSIX standard output.
* @filename: pointer to char
* @letters: number of letters it should read and print
* Return: if a file fails return NULL
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	FILE *file;
	ssize_t bytesRead;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);


	buff = (char *)malloc(sizeof(char) * letters);
	if  (buff == NULL)
	{
		fclose(file);
		return (0);
	}

	bytesRead = fread(buff, 1, letters, file);
	if (bytesRead == -1)
	{
		fclose(file);
		free(buff);
		return (0);
	}

	buff[bytesRead] = '\0';
	ssize_t bytesWritten = write(STDOUT_FILENO, buff, bytesRead);

	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		fclose(file);
		free(buff);
		return (0);
	}
	fclose(file);
	free(buff);
	return (bytesRead);

}
