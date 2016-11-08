#include <stdio.h>

typedef char* ltype;

typedef struct
{
	ltype data;
	struct node *next;
} node;

// checks if list is empty
// returns 1 if list is empty, 0 if not
int isEmptyList(node*);
// pushes element onto given linkedlist
// returns 1 if push successful, 0 if not
int pushList(node*, ltype);
// pops top element of list
// returns popped element
ltype popList(node*);
