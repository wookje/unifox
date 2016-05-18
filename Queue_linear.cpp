#include <stdio.h>

const int MAX = 1000;

int head = 1;
int tail = 0;
int Queue[MAX*MAX] = { 0, };

void Push(int n)
{
	if (isFull() == true)
	{
		return;
	}
	Queue[++tail] = n;
}

void Pop()
{
	if (isEmpty() == true)
	{
		return;
	}
	Queue[head++] = 0;
}

bool isEmpty()
{
	if (head == tail)
	{
		printf("Q is empty");
		return true;
	}
	return false;
}

bool isFull()
{
	if (tail - head == MAX)
	{
		printf("Q is full");
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