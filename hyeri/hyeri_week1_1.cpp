//hyeri_week1_1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	// ���� ����
	int n, i, k,m;
	int num[100];

	//�Է� �κ�

	scanf_s(" %d", &n); //���� ���� ���� �Է�
	for (i = 0; i < n; i++) 
	{
		scanf_s(" %d", &num[i]); //���� ������ŭ ���� �Է�
	}

	//������������ ����

	for (i = 0; i < n; i++) //���� ���� ������ ������� ����� ���� for��
	{

		for (k = i+1 ; k < n; k++)
		{
			if (num[i] < num[k])  //�� ���� ��ȯ�ϴ� �κ�
			{
				m = num[i];
				num[i] = num[k];
				num[k] = m;
			}
			
		
		}
	}

	//�����ĵ� ���� ���

	for (i = n-1; i >= 0; i--)
		printf("%d\n", num[i]);

	return 0;
}