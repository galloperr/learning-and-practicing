#include<stdio.h>

int  insert_sort(int num[], int n);

int main()
{
	int num[5] = { 3,7,9,12,6 };
	int n, x;
	n = sizeof(num) / sizeof(num[0]);
	insert_sort(num, n);
	for (x = 0; x < n; x++)
	{
		printf("%d ", num[x]);
	}
	return 0;
}

int insert_sort(int num[], int n)
{
	int i,j, key, x;
	for (j = 1; j < n; j++)
	{
		key = num[j];
		i = j - 1;
		while (i >= 0 && num[i] > key)
		{
			num[i + 1] = num[i];
			i = i - 1;
		}
		num[i + 1] = key;
	}
	return 0;
}