//hyeri_week2_1.c
//ū ���� ��Ģ(������ with ���̽� p.92)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Լ� ����
int first_big_num(int arr[],int k);
int second_big_num(int arr[],int k);
int main(void)
{
	int n, m, k,i ,p=0,result =0;
	int num[100];

	//N,M,K �Է¹ޱ�
	scanf("%d %d %d", &n, &m, &k);
	for (i = 0; i < n; i++)
	{
		//n���� �� �Է¹ޱ�
		scanf("%d", &num[i]);
	}
	
	//���� ū ���� k��, �� ��°�� ū ���� 1�� ���� �� ����� �����ϴ� �κ�

	while (1)
	{
		for (p = 0; p < k; p++)
		{
			if (m == 0)
				break;
			result += first_big_num(num, n);
			m -= 1;
		}
		if (m == 0)
			break;
		result += second_big_num(num, n);
		m -= 1;
	}



	//����� ���
	printf("%d", result);
	return 0;
}

//�Լ� ����:�迭���� ���� ū ���� ����ϴ� �Լ�
int first_big_num(int arr[], int k)
{
	int i,j , temp;

	//�迭arr[]�� ������������ ����
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < (k - 1) - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	//���� ū �� ���
	return arr[k-1];
}

//�Լ� ����:�迭���� ���� ū ���� ����ϴ� �Լ�
int second_big_num(int arr[], int k)
{
	int i, j, temp;

	//�迭arr[]�� ������������ ����
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < (k - 1) - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	//�� ��°�� ū �� ���
	return arr[k-2];
}