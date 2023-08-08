#include "stdio.h"
void hinhchunhatrong(int,int);
void hinhchunhatrong(int n, int m)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (i == 1 || i == n || j == 1 || j == m)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

int main()
{
	int n, m;
	printf("Nhap vao so cot m: ");
	scanf("%d", &m);
	printf("Nhap vao hang n: ");
	scanf("%d", &n);

	hinhchunhatrong(n, m);

	return 0;
}
