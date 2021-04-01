#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int isEmpty(STACK *s)
{
	return (s->stackTop == EmptyTOS);
}

int isFull(STACK *s)
{
	return (s->stackTop == s->capacity - 1);
}

STACK *createStack(int maxElements)
{
	STACK *s;

	if (maxElements < MinStackSize)
	{
		printf("Stack size is too small\n");
		return NULL;
	}
	s = (STACK *)malloc(sizeof(struct stackRecord));
	s->array = (elementType *)malloc(sizeof(elementType) * maxElements);
	s->capacity = maxElements;
	makeEmpty(s);

	return s;
}

void disposeStack(STACK *s)
{
	if (s != NULL) {
		free(s->array);
		free(s);
	}
}

void makeEmpty(STACK *s)
{
	if (s != NULL) {
		s->stackTop = EmptyTOS;
	}
}

void push(elementType element, STACK *s)
{
	if (!isFull(s)) {
		s->stackTop++;
		s->array[s->stackTop] = element;
	} else {
		printf("Full stack\n");
	}
}

elementType top(STACK *s)
{
	if (!isEmpty(s)) {
		return s->array[s->stackTop];
	} else {
		printf("empty stack\n");
		return 0;
	}
}

void pop(STACK *s)
{
	if (!isEmpty(s)) {
		s->stackTop--;
	} else {
		printf("empty stack\n");
	}
}

elementType topAndTop(STACK *s)
{
	if (!isEmpty(s)) {
		return s->array[s->stackTop--];
	}	else {
		printf("empty stack\n");
		return 0;
	}
}

int main()
{
	STACK *ptr = createStack(10);
	push(10, ptr);
	push(20, ptr);

	printf("stack top = %d\n", top(ptr));


	return 0;
}
