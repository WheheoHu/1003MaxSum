// 1003MaxSum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  
using namespace std;
int a[100010];
bool flag;
int main()
{
	int t;
	scanf_s("%d", &t);
	int c = 1;
	while (t--)
	{
		printf("Case %d:\n", c++);
		int n;
		scanf_s("%d", &n);
		for (int i = 0; i<n; i++)
		{
			scanf_s("%d", &a[i]);
		}
		int maxsum = a[0], tempsum = a[0];
		int start = 0, end = 0, itemp = 0;
		for (int i = 1; i<n; i++)
		{
			if (tempsum<0)
			{
				tempsum = 0;
				itemp = i;
			}
			tempsum += a[i];
			if (tempsum>maxsum)
			{
				maxsum = tempsum;
				start = itemp;
				end = i;
			}
		}
		printf("%d %d %d\n", maxsum, start + 1, end + 1);
		if (t != 0)
			printf("\n");
	}
	system("pause");
	return 0;
}



