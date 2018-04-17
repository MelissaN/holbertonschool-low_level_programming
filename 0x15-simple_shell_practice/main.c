#include "shell.h"

/*
 * main - simulates mini shell environment that accepts user commands
 * Return: 0 upon success
 */

int main(void)
{
	char *cmd = NULL;
	int i, rd, status;

	do {
		/* prompt user till they hit Ctrl-D */
		printf("Kev Mel Shell$ ");

		rd = _getline(&cmd);
		if (rd == 0)
		{
			printf("Hmm... Couldn't read what you wrote...\n");
			return (-1);
		}

		i = 0;
		if (cmd[i] == 0) /* if Ctrl-D, print newline and exit */
		{
			printf("\n");
			exit(99);
		}
		while (cmd[i] != '\n')
			i++;
		cmd[i] = '\0';

		/* execute child process/cmd before reprompting */
		if (fork() == 0)
		{
			_execve(cmd);
		}
		else
			wait(&status);
		free(cmd);
	} while (rd != EOF);
	free(cmd);
	return (0);
}
