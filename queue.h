// #define TRUE 1
// #define FALSE 0

typedef int etype;

typedef struct
{
	etype data[100];
	int top;
} queue;

// is the queue empty?
// returns 1 (true) if empty, 0 (false) if not
int isEmptyQueue(queue);
// is the queue full?
// return 1 if full, 0 if not
int isFullQueue(queue);
// push an element into the queue
// return 1 if successful push, 0 if fails
int pushQueue(queue, etype);
// pop top element from the queue
// returns top element
etype popQueue(queue);
