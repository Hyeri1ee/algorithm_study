//hyeri_week1_2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	//���� ����
	char c[100]; 
	int i ,result = 0;

	scanf("%s", c); //���ڿ� �Է�
	
	if ((strlen(c) % 2 )!= 0) //���ڿ��� ���̰� Ȧ���� ���
	{
		for (i = 0; i < strlen(c) / 2; i++) //����� ���ڸ� �����ϰ� ������ ��
		{

			if (c[i] == c[strlen(c) - 1 - i])
				result += 0; //�Ӹ������ ���
			else
				result += 1; //�Ӹ������ �ƴ� ���
		}
	}
	else //���ڿ��� ���̰� ¦���� ���
	{
		for (i = 0; i < strlen(c) / 2; i++) //����� ���� �����ؼ� ������ ��
		{
			if (c[i] == c[strlen(c) - 1 - i])
				result += 0; //�Ӹ������ ���
			else
				result += 1; //�Ӹ������ �ƴ� ���
		}
	}

	//��� ���

	if (result == 0) //�Ӹ������ ���
		printf("%d", 1);

	else //�Ӹ������ �ƴ� ���
		printf("%d", 0);
	return 0;
}