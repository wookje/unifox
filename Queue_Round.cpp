#include <stdio.h>

const int MAX = 10;

int head = 1;
int tail = 0;
int Queue[MAX] = { 0, };

void Push(int n)
{
	if (isFull() == true)
	{
		return;
	}
	tail = tail % MAX;
	Queue[++tail] = n;
}

void Pop()
{
	if (isEmpty() == true)
	{
		return;
	}
	head = head % MAX;
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

void print()
{
	for (int i = 1; i <= MAX; i++)
	{
		printf("Q[%d] = %d\n", i, Queue[i]);
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
