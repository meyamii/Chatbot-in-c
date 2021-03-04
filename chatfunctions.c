#include <stdio.h>
#include "chatfunctions.h"

void greeting()
{
	printf("hello\n");
}

void take_input(char * input)
{
	printf("\n ############# Give Input #############\n>>> ");

    	strcpy(input, fgets(input, 200, stdin)); //copy input from stdin to input pointer
}

void respond_to(char * input, char * response)
{
	printf("Hello\n");
}

void goodbye()
{
	printf("Au revoir!\n");
}
