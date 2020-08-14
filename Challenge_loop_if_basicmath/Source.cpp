#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int x, y, n = 0, sul = 0;
	float sum = 0, aver = 0, sd;
	scanf_s("%d %d", &x, &y);
	if (x < y)
	{
		for (x = x;x <= y;x++)
		{
			printf("%d ", x);
			sum = sum + x;
			sul = sul + pow(x, 2);
			n++;
			aver = sum / n;
			sd = sqrt(((n * sul) - pow(sum, 2)) / (n * (n - 1)));
		}printf("\nAverage = %.2f", aver);
		printf("\nSD = %.2f", sd);
	}
	else if (y < x)
	{
		for (x = x;x >= y;x--)
		{
			printf("%d ", x);
			sum = sum + x;
			sul = sul + pow(x, 2);
			n++;
			aver = sum / n;
			sd = (sqrt((n * sul) - pow(sum, 2) / n * (n - 1)));							// สูตร SD
		}printf("\nAverage = %.2f", aver);
		printf("\nSD = %.2f", sd);
	}
	return 0;
}