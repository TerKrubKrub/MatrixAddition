#include <stdio.h>
int main()
{
	int m, n, i, j;
	int x[100][100];
	int y[100][100];
	scanf_s("%d %d", &m, &n);
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
		{
			scanf_s("%d", &x[i][j]);
		}
	}
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
		{
			scanf_s("%d", &y[i][j]);
		}
	}
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%d ", x[i][j] + y[i][j]);
		}
		printf("\n");
	}
	return 0;
}