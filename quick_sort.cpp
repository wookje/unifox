#include <stdio.h>

#define swap(a, b, t) { t = a; a = b; b = t; }

const int MAX = 1000;

int N;
int DATA[MAX] = { 0, };

void input()
{
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &DATA[i]);
	}
}

void Quick_Sort(int s, int e)
{
	if (s >= e) return;

	int i = s;
	int j = e + 1;
	int temp;

	while (i < j)
	{
		while (i < e)
		{
			i++;
			if (DATA[s] < DATA[i]) break;
		}
		while (j > s)
		{
			j--;
			if (DATA[s] > DATA[j]) break;
		}
		if (i < j) swap(DATA[i], DATA[j], temp);
	}
	swap(DATA[s], DATA[j], temp);

	Quick_Sort(s, j-1);
	Quick_Sort(j+1, e);
}

void output()
{
	for (int i = 1; i <= N; i++)
	{
		printf("%d ", DATA[i]);
	}
}

int main()
{
	input();
	Quick_Sort(1, N);
	output();

	return 0;
}