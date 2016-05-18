#include <stdio.h>

const int MAX = 1000;
int top = 0;
int stack[MAX] = { 0, };

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

int main()
{
	// push(a);
	// pop();

	return 0;
}