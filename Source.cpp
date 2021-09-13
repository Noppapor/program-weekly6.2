#include"stdio.h"
int main() {
	int x, i, j;
	scanf_s("%d", &x);
	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= x; j++)
		{
			if (j <= x - i)
			{
				printf(" ");
			}
			else printf("*");
		}
		j == 1;
		for (j = 1; j <= x; j++)
		{
			if (j >= 2, j < i)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}