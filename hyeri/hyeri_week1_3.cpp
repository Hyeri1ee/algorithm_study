//hyeri_week1_3

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Ǻ���ġ �Լ� ����
int pibonaci(int k);

int main(void)
{
	//���� ����
	int n;

	scanf("%d", &n); //n�� �Է�

	printf("%d", pibonaci(n)); //�Ǻ���ġ �Լ� ��� ���
	return 0;
}

//�Ǻ���ġ �Լ� ����
int pibonaci(int k)
{
	//���� ����
	int result;

	if (k <= 0)
		result = 0;
	else if (k == 1)
		result = 1;
	else
		result = pibonaci(k - 2) + pibonaci(k - 1);
	return result;  //����Լ� �̿�
	
}