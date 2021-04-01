#ifndef _STACK_H_
#define _STACK_H_

#define EmptyTOS -1 // 空栈
#define MinStackSize 5 // 栈的最小值

typedef int elementType; // 数据类型

typedef struct stackRecord
{
	int capacity; // 容量
	int stackTop; // 栈顶
	elementType *array;
} STACK;

int isEmpty(STACK *s);
int isFull(STACK *s);
STACK *createStack(int maxElements);
void disposeStack(STACK *s);
void makeEmpty(STACK *s);
void push(elementType element, STACK *s);
elementType top(STACK *s);
void pop(STACK *s);
elementType topAndTop(STACK *s); // 出栈并返回栈顶

#endif
