#include "shell.h"

/**
 * _execve - executes the command
 */
void _execve(char cmd[])
{
	int i;
	char **token_array = NULL;
	char *fleshed_path_cmd = NULL;

	i = 0;
	token_array = _strtok(cmd);

	/* if access finds (/bin/ls), execute */
	if (access(token_array[0], F_OK) == 0)
	{
		printf("full path is in here\n");
		if ((execve(token_array[0], token_array, NULL)) == -1)
		{
			perror("Execution Error");
		}
		else
			printf("full path not executable\n");
	}
	else
	{
		/* flesh out command's path (ls --> /bin/ls) */
		fleshed_path_cmd = _which(token_array[0]);

		printf("Fleshed path is %s\n", fleshed_path_cmd);

		if (access(fleshed_path_cmd, F_OK) == 0)
		{
			printf("fleshed path is in here to be executed\n");
			if ((execve(fleshed_path_cmd, token_array, NULL)) == -1)
				perror("Execution Error");
		}
		else
		{
			perror("Fleshed path error");
		}
	}
}
