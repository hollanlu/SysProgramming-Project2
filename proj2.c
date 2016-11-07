#include <stdio.h>
#include <stdlib.h>
#include "queue.c"
#include "list.c"

int main(int argc, char* argv[])
{
	FILE *file = NULL;
	
	// make sure user selected file
	if (argc != 1)
	{
		printf("Choose a C file to scan.\n");
		exit(1);
	}
	
	// opens file and checks validity
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		printf("You've selected an invalid file.\n");
		printf("Please choose another file and try again.\n");
		exit(1);
	}
	
	return 0;
}







