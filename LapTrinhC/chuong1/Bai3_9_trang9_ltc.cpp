#include <stdio.h>

int main()
{
	int n, m;
	printf("Nhap vao cot m: ");
	scanf("%d", &m);
	printf("Nhap vao hang n: ");
	scanf("%d", &n);

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

	return 0;
}
