#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "queue.c"
#include "list.c"

int isIdent(char);
int endOfIdent(char);

int main(int argc, char* argv[])
{
	FILE *fin = NULL;
	FILE *fout = NULL;
	
	// make sure user selected files
	if (argc < 2)
	{
		printf("Choose a C file to scan and an output file.\n");
		exit(1);
	}
	
	// opens file and checks validity
	fin = fopen(argv[1], "r");
	fout = fopen(argv[2], "w");
	if (fin == NULL || fout == NULL)
	{
		printf("You've selected an invalid file.\n");
		printf("Please choose another file and try again.\n");
		exit(1);
	}
	
	node *head = NULL;  // set list
	queue qu;  // set queue
	char *line = NULL;
	int lineNum = 0;  // line number of indentifier
	int j;  // for loop
	char *ident = NULL;  // identifier
	int pos = 0;  // position of char in ident
	size_t len = 0;  // for reading line
	ssize_t read = 0;  // for reading line

	// read each line
	while ((read = getline(&line, &len, fin)) != -1)
	{
		lineNum++;  // increment line number;
		for (j = 0; j < len; j++)
		{
			if (isIdent(line[j] == 1))
			{
				if (pos == 0 && isdigit(line[j]))
					break;  // starts with digit
				ident[pos] = line[j];
				pos++;
				
				// if ident's done, push info, clear ident
				if (endOfIdent(line[j++]) == 1)
				{
					pushList(head, ident);
					pushQueue(qu, lineNum);
					ident = NULL;
					pos = 0;
				}
			}
		}
		// reset ident, pos
		ident = NULL;
		pos = 0;
	}
	
	ltype addIdent = NULL;
	etype addLine = 0;
	// write identifiers to out file
	while (isEmptyList != 1)
	{
		addIdent = popList(head);
		addLine = popQueue(qu);
		fprintf(fout, "Identifier: %s Line(s): %i\n", addIdent, addLine);
	}
	
	return 0;
}

// checks if char c should be included in identifier
// c is alphanumeric or _
// returns 1 if included, 0 if not
int isIdent(char c)
{
	if (isalpha(c) || isdigit(c) || c == '_')
		return 1;
	else
		return 0;
}

// checks if next character signals end of ident
// c is ' ', '(', ')', ect
// returns 1 if end of ident, 0 otherwise
int endOfIdent(char c)
{
	if (c == ' ' || c == '(' || c == ')' || c == '=' || c == '\0')
		return 1;
	else
		return 0;
}







