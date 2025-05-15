// #include <stdio.h>

// /* declare a buffer for user input of size 2048 */

// static char input[2048];

// int main(int argc, char **argv)
// {
// 	/* print version and exit information */
// 	puts("Lispy Version 0.0.0.0.1");
// 	puts("Press ctrl + c to exit");

// 	/* in a never ending loop */
// 	while (1)
// 	{
// 		/* output our prompt */
// 		fputs("lispy> ", stdout);

// 		/*read a line of user input of maximum size 2048*/
// 		fgets(input, 2048, stdin);

// 		/*echo input back to the user */
// 		printf("No you're a %s", input);
// 	}

// 	return 0;
// }

#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

int main(int argc, char **argv)
{
	// print version and exit information
	puts("Lispy Version 0.0.0.0.1");
	puts("Press Ctrl+c to exit\n");

	// in a never ending loop
	while (1)
	{
		// output our prompt and get input
		char *input = readline("lispy> ");

		// add input to history
		add_history(input);

		// echo input back to the user
		printf("No you're a %s\n", input);

		// free retrived input
		free(input);
	}

	return 0;
}