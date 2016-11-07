#include <stdio.h>
#include "list.h"

int isEmptyList(linkedlist list)
{
	if (list.pos == -1)
		return 1;
	else
		return 0;
}

int isFullList(linkedlist list)
{
	if (list.pos == 99)
		return 1;
	else
		return 0;
}

int pushList(linkedlist list, etype el)
{
	if (isFullList(list) == 1)
		return 0;
	list.data[(list.pos)++] = el;
	return 0;
}

etype popList(linkedlist list)
{
	etype el = NULL;
	if (isEmptyList(list) == 1)
		return 0;
	el = list.data[list.pos];
	list.pos = list.pos--;
	return el;
}
