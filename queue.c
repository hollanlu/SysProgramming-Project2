#include <stdio.h>
#include "queue.h"

// if qu is empty, return 1
int isEmptyQueue(queue qu)
{
	if (qu.top == -1)
		return 1;
	else
		return 0;
}

// if qu is full, return 1
int isFullQueue(queue qu)
{
	if (qu.top == 99)
		return 1;
	else
		return 0;
}

// if el is properly pushed into qu, return 1
int pushQueue(queue qu, etype el)
{
	if (isFullQueue(qu))
		return 0;
	qu.data[(qu.top)++] = el;
	return 1;
}

// return popped element of qu
etype popQueue(queue qu)
{
	etype el = NULL;
	if (isEmptyQueue(qu))
		return 0;
	el = qu.data[qu.top];
	qu.top = qu.top--;
	return el;
}






