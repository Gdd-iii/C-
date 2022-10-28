#define _CRT_SECURE_NO_WARNINGS
//给定一个一维整型数组，A[10]，输入数据，编程实现对数组的前一半元素升序排列，后一半的元素降序排列并输出
#include <stdio.h>
int main()
{
	int A[10];
	int i, j, t,m;
	for (i = 0;i < 10;i++)
	{
		printf("请输入第%d个数\n", i + 1);
		scanf("%d", &A[i]);
	}
	for (j = 0; j <= 5; j++)

	{
		for (i = 0; i < 5; i++)
		{
			if (A[i] > A[i+1])
		    {
			int t = 0;
			t = A[i];
			A[i] = A[i+1];
		  	A[i+1] = t;
		    }
		}
		for (i = 9; i > 4; i--)
		{
			if (A[i] < A[i - 1])
			{
				int t = 0;
				t = A[i];
				A[i] = A[i - 1];
				A[i - 1] = t;

			}
		}
	}
	for (m = 0;m <= 9; m++)
	{
		printf("%d", A[m]);
	}
	return 0;
}