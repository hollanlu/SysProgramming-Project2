#include <stdio.h>

typedef int etype;

typedef struct
{
	etype data[100];
	int pos;
	//int previous;
	//int next;
} linkedlist;

// checks if list is empty
// returns 1 if list is empty, 0 if not
int isEmptyList(linkedlist);
// checks if list is full
// returns 1 if list if full, 0 if not
int isFullList(linkedlist);
// pushes element onto given linkedlist
// returns 1 if push successful, 0 if not
int pushList(linkedlist, etype);
// pops top element of list
// returns popped element
etype popList(linkedlist);
