#define _CRT_SECURE_NO_WARNINGS
//����һ��һά�������飬A[10]���������ݣ����ʵ�ֶ������ǰһ��Ԫ���������У���һ���Ԫ�ؽ������в����
#include <stdio.h>
int main()
{
	int A[10];
	int i, j, t,m;
	for (i = 0;i < 10;i++)
	{
		printf("�������%d����\n", i + 1);
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