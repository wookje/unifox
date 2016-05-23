#include <stdio.h>

const int MN = 100;

int DATA[MN], N, K;

void input()
{
	scanf("%d %d", &N, &K);
	for(int i = 1; i <= N; i++)
	{
		scanf("%d", &DATA[i]);
	}
}

int BinSearch(int n)
{
	int left = 1, right = N, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (DATA[mid] == n)
		{
			return mid;
		}
		else if (DATA[mid] < n)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return -1;
}

int main()
{
	freopen("input.txt", "r", stdin);
	
	input();
	printf("%d\n", BinSearch(K));

	return 0;
}
