#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "chatfunctions.h"

int main(void)
{
	// declare necessary stuff
	bool quit = false;

	// say greeting
	greeting();

	// chatbot logic loop
	do
	{
		// longest response is 200 chars atm!
		char * input[200];
		char * response[200];

		take_input(*input);
		respond_to(*input, *response);
		//printf("%s", response);

		// check if user wants to exit
		if (strcmp(*response, "quit") == 0)
		{
			quit = true;
		}
	} while (quit == false);

	// say goodbye
	goodbye();
}
