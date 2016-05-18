#include <stdio.h>

const int MAX = 10;

int top = 0;
int stack[MAX+5] = { 0, };

void Push(int n)
{
	if (isFull() == true)
	{
		return;
	}
	stack[++top] = n;
}

void Pop()
{
	if (isEmpty() == true)
	{
		return;
	}
	stack[top--] = 0;
}

bool isFull()
{
	if (top == MAX)
	{
		printf("stack is full\n");
		return true;
	}
	return false;
}

bool isEmpty()
{
	if (top == 0)
	{
		printf("stack is empty");
		return true;
	}
	return false;
}

void print()
{
	for (int i = 1; i <= MAX; i++)
	{
		printf("stack[%d] = %d\n", i, stack[i]);
	}
	printf("\n");
}

int main()
{
	// push(a);
	// pop();
	// print();

	return 0;
}
