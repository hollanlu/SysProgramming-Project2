#include <stdio.h>
#include "list.h"

int isEmptyList(node * head)
{
	if (head == NULL)
		return 1;
	else
		return 0;
}

int pushList(node * head, ltype el)
{
	node *current;  // create new node
	current = malloc(sizeof(node));
	
	current->data = el;  // set new node to given data
	current->next = head->next;  // link new node
	head = current;  // set new head
	return 1;
}

ltype popList(node * head)
{
	ltype el = NULL;  // new data
	node *temp = NULL;  // temporary node
	if (head == NULL)
		return el;  // nothing in the list yet
	
	temp->next = head->next;  // link temp to list
	temp->data = head->data;  // set temp data
	el = head->data;  // get data
	head = temp;  // set new head
	return el;
}
