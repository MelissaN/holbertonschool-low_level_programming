#include "shell.h"

/**
 * _strdup - duplicates string
 */
char *_strdup(char *str)
{
	char *duplicate_str;
	int i = 0, len = 0;

	if (str == NULL) /* validate str input */
		return (NULL);

	while (*(str + len))
		len++;
	len++; /* add null terminator to length */

	duplicate_str = malloc(sizeof(char) * len); /* allocate memory */
	if (duplicate_str == NULL) /* validate memory */
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(duplicate_str + i) = *(str + i);
		i++;
	}
	return (duplicate_str);
}

/**
 * c_strdup - custom duplicates environ variable after start of title (PATH)
 * @str: string to duplicate
 * @cs: len of variable title (PATH has length 4)
 * Return: environmental variable without title
 */
char *c_strdup(char *str, int cs)
{
	char *duplicate_str;
	int i = 0, len = 0;

	if (str == NULL) /* validate str input */
		return (NULL);

	while (*(str + len))
		len++;

	len++; /* add null terminator to length */

	duplicate_str = malloc(sizeof(char) * (len - cs)); /* allocate memory */
	if (duplicate_str == NULL) /* validate memory */
		return (NULL);

	i = 0;
	while (i < (len - cs))
	{
		*(duplicate_str + i) = *(str + cs + i);
		i++;
	}
	return (duplicate_str);
}

/**
 * _getenv - gets requested environmental variable
 * Return: the requested variable (e.g. PATH)
 */
char * _getenv()
{
	//extern char **environ;
	int i = 0, j = 0;
	char var[5] = "PATH";

	while (environ[i] != NULL)
	{
		while (environ[i][j] == var[j])
		{
			if (var[j + 1] == '\0')
				return (environ[i]);
			j++;
		}
		i++;
	}
}

/**
 * _which - returns full path where executable command is found
 * @cmd: takes command (e.g. "ls")
 * Return: full path (e.g. /bin/ls)
 */
char *_which(char *cmd)
{
	char *envPath = NULL;
	char *tok = NULL;
	char tokcat[40];

	/* get PATH variable without "PATH=" beginning */
	envPath = _getenv();
	envPath = c_strdup(envPath, 5);

	/* append command onto each Path directory till cmd found */
	tok = strtok(envPath, ":");
	while (tok != NULL)
	{
		tokcat[0] = '\0';
		strcat(tokcat, tok);
		strcat(tokcat, "/");
		strcat(tokcat, cmd);
		if (access(tokcat, F_OK) == 0)
		{
/*			printf("Found in %s\n", tokcat); */
			free(envPath);
			return (_strdup(tokcat));
		}
		tok = strtok(NULL, ":");
	}
	free(envPath);
	return (cmd);
}
